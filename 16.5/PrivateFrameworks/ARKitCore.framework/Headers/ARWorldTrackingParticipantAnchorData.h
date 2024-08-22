// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARWORLDTRACKINGPARTICIPANTANCHORDATA_H
#define ARWORLDTRACKINGPARTICIPANTANCHORDATA_H

@class NSSet, NSString;
@protocol ARResultData;

#import <Foundation/Foundation.h>


@interface ARWorldTrackingParticipantAnchorData : NSObject <ARResultData>



@property (readonly, nonatomic) NSSet *anchors; // ivar: _anchors
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)anchorsForCameraWithTransform:(struct ? )arg0 referenceOriginTransform:(struct ? )arg1 existingAnchors:(id)arg2 anchorsToRemove:(id)arg3 ;
-(id)initWithAnchors:(id)arg0 ;


@end


#endif