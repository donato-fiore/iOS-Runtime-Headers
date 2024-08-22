// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPLACESMAPUPDATEPLANRESULTIMPL_H
#define PXPLACESMAPUPDATEPLANRESULTIMPL_H

@class NSMutableSet, NSString;
@protocol PXPlacesMapUpdatePlanResult;

#import <Foundation/Foundation.h>


@interface PXPlacesMapUpdatePlanResultImpl : NSObject <PXPlacesMapUpdatePlanResult>



@property (readonly) NSMutableSet *annotationsToAddImmediately; // ivar: _annotationsToAddImmediately
@property (readonly) NSMutableSet *annotationsToRedraw; // ivar: _annotationsToRedraw
@property (readonly) NSMutableSet *annotationsToRemoveAfterAnimationHasEnded; // ivar: _annotationsToRemoveAfterAnimationHasEnded
@property (readonly) NSMutableSet *annotationsToRemoveAfterAnimationHasStarted; // ivar: _annotationsToRemoveAfterAnimationHasStarted
@property (readonly) NSMutableSet *annotationsToRemoveImmediately; // ivar: _annotationsToRemoveImmediately
@property (readonly) NSMutableSet *annotationsWithUpdatedIndex; // ivar: _annotationsWithUpdatedIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSMutableSet *overlaysToAddImmediately; // ivar: _overlaysToAddImmediately
@property (readonly) NSMutableSet *overlaysToRemoveImmediately; // ivar: _overlaysToRemoveImmediately
@property (readonly) Class superclass;


-(id)init;


@end


#endif