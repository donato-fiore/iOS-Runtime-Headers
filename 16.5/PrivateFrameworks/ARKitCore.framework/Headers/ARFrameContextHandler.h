// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARFRAMECONTEXTHANDLER_H
#define ARFRAMECONTEXTHANDLER_H

@class NSMutableOrderedSet, NSMutableSet, NSArray;

#import <Foundation/Foundation.h>

#import "ARFrameContext.h"

@interface ARFrameContextHandler : NSObject {
    NSMutableOrderedSet *_inFlightContexts;
    ARFrameContext *_mostRecentInFlightContext;
    NSMutableOrderedSet *_anchorsToAdd;
    NSMutableOrderedSet *_anchorsToRemove;
    NSMutableOrderedSet *_anchorsToStopTracking;
    BOOL _sessionTransformReset;
    NSMutableSet *_collaborationDatas;
}


@property (readonly, nonatomic) NSArray *anchorsToAdd;
@property (nonatomic) ? sessionTransform; // ivar: _sessionTransform
@property (readonly, nonatomic) BOOL sessionTransformUpdated; // ivar: _sessionTransformUpdated


-(id)createdContextByConsumingPendingChanges;
-(id)init;
-(void)addAnchor:(id)arg0 ;
-(void)addCollaborationData:(id)arg0 ;
-(void)clearAddedAnchors;
-(void)clearInFlightContextsReapplyingChanges;
-(void)markFrameContextProcessed:(id)arg0 ;
-(void)removeAnchor:(id)arg0 ;
-(void)stopTrackingAnchors:(id)arg0 ;


@end


#endif