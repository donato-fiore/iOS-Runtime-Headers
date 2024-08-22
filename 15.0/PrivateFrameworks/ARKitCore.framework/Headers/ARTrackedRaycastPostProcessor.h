// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARTRACKEDRAYCASTPOSTPROCESSOR_H
#define ARTRACKEDRAYCASTPOSTPROCESSOR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ARSession.h"

@interface ARTrackedRaycastPostProcessor : NSObject

@property (weak) ARSession *session; // ivar: _session
@property (readonly, nonatomic) NSArray *trackedRaycasts;


-(BOOL)result:(id)arg0 isCloseEnoughToInitialResultForRaycast:(id)arg1 ;
-(id)initWithSession:(id)arg0 ;
-(struct ? )updatePose:(struct ? )arg0 referenceOriginTransform:(struct ? )arg1 oldRayOrigin:(CGFloat)arg2 oldRayDirection:(CGFloat)arg3 newRayOrigin:(CGFloat)arg4 newRayDirection:(CGFloat)arg5 ;
-(void)addTrackedRaycast:(id)arg0 andProcessInitialResults:(id)arg1 ;
-(void)dealloc;
-(void)invalidateAllRaycasts;
-(void)invalidateRaycastWithIdentifier:(id)arg0 ;
-(void)performBlockWhileLockingRaycasts:(id)arg0 ;
-(void)processInitialResults:(id)arg0 forRaycast:(id)arg1 ;
-(void)processUpdatedResults:(id)arg0 ;
-(void)removeTrackedRaycastWithIdentifier:(id)arg0 ;
-(void)startUpdateTimer;
-(void)updateFromPoseGraphEventWithData:(id)arg0 referenceOriginTransform:(struct ? )arg1 ;
-(void)updateFromTimer:(id)arg0 ;


@end


#endif