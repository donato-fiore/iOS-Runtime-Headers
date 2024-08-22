// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHENVIRONMENTTRANSITIONSTATE_H
#define BLSHENVIRONMENTTRANSITIONSTATE_H

@protocol BLSHEnvironmentTransitionStateDelegate, BLSHBacklightSceneHostEnvironment;

#import <Foundation/Foundation.h>

#import "BLSHEnvironmentTransitionStateTarget.h"

@interface BLSHEnvironmentTransitionState : NSObject {
    os_unfair_lock_s _lock;
    id<BLSHEnvironmentTransitionStateDelegate> *_delegate;
    BLSHEnvironmentTransitionStateTarget *_lock_requestingFidelityTarget;
    BLSHEnvironmentTransitionStateTarget *_lock_inProgressUpdateTarget;
    BLSHEnvironmentTransitionStateTarget *_lock_animationCompletedForOldTarget;
    BLSHEnvironmentTransitionStateTarget *_lock_animationCompletedWithNewTarget;
    NSUInteger _lock_nextSequenceID;
    BOOL _lock_animating;
}


@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (readonly, nonatomic) NSObject<BLSHBacklightSceneHostEnvironment> *environment; // ivar: _environment
@property (readonly, nonatomic, getter=isUpdatingInitialState) BOOL updatingInitialState;
@property (readonly, nonatomic, getter=isUpdatingVisualState) BOOL updatingVisualState;


+(id)createStateForEnvironment:(id)arg0 delegate:(id)arg1 ;
-(BOOL)isUpdatedToBacklightState:(NSInteger)arg0 ;
-(id)debugDescription;
-(id)description;
-(void)dealloc;
-(void)updateToBacklightState:(NSInteger)arg0 forEvent:(id)arg1 touchTargetable:(BOOL)arg2 presentationDate:(id)arg3 sceneUpdate:(id)arg4 performBacklightRamp:(id)arg5 ;
-(void)updateToDateSpecifier:(id)arg0 ;


@end


#endif