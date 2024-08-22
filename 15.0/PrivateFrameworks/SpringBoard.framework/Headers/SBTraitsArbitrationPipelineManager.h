// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTRAITSARBITRATIONPIPELINEMANAGER_H
#define SBTRAITSARBITRATIONPIPELINEMANAGER_H

@class SBFTraitsArbiter, NSString;
@protocol SBLayoutStateTransitionObserver;

#import <Foundation/Foundation.h>

#import "SBTraitsDockFollowsHomePolicySpecifier.h"
#import "SBTraitsHomeFollowsSwitcherPolicySpecifier.h"

@interface SBTraitsArbitrationPipelineManager : NSObject <SBLayoutStateTransitionObserver>

 {
    SBTraitsDockFollowsHomePolicySpecifier *_dockFollowsHomeSpecifier;
    SBTraitsHomeFollowsSwitcherPolicySpecifier *_homeFollowsSwitcherSpecifier;
}


@property (weak, nonatomic) SBFTraitsArbiter *arbiter; // ivar: _arbiter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_layoutCoordinator;
-(id)init;
-(id)initWithArbiter:(id)arg0 ;
-(void)dealloc;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;


@end


#endif