// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPIPENVIRONMENTDEPENDENTOVERRIDEASSERTION_H
#define SBPIPENVIRONMENTDEPENDENTOVERRIDEASSERTION_H

@class NSSet, NSString;
@protocol SBLayoutStateTransitionObserver;


#import "SBPIPBehaviorOverrideAssertion.h"

@interface SBPIPEnvironmentDependentOverrideAssertion : SBPIPBehaviorOverrideAssertion <SBLayoutStateTransitionObserver>



@property (copy, nonatomic) NSSet *allowedEnvironmentModes; // ivar: _allowedEnvironmentModes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL invalidatesEarly; // ivar: _invalidatesEarly
@property (readonly) Class superclass;


-(NSInteger)_environmentModeForLayoutState:(id)arg0 ;
-(id)_layoutCoordinator;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithReason:(NSInteger)arg0 identifier:(id)arg1 invalidationBlock:(id)arg2 ;
-(id)initWithReason:(NSInteger)arg0 invalidationBlock:(id)arg1 ;
-(void)_updateStateForTransitionWithContext:(id)arg0 ;
-(void)dealloc;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;


@end


#endif