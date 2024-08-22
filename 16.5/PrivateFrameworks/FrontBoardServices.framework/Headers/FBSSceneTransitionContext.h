// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSSCENETRANSITIONCONTEXT_H
#define FBSSCENETRANSITIONCONTEXT_H

@class FBSceneUpdateContext, FBWatchdogTransitionContext, BSMutableSettings, NSSet, BKSAnimationFenceHandle, BSAnimationSettings, NSString, BSProcessHandle;
@protocol BSXPCCoding, BSDescriptionProviding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface FBSSceneTransitionContext : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying, NSMutableCopying>

 {
    FBSceneUpdateContext *_updateContext;
    FBWatchdogTransitionContext *_watchdogTransitionContext;
    BOOL _allowCPUThrottling;
    BOOL _runningBoardAssertionDisabled;
    BSMutableSettings *_otherSettings;
    BSMutableSettings *_transientLocalClientSettings;
}


@property (copy, nonatomic) NSSet *actions; // ivar: _actions
@property (retain, nonatomic) BKSAnimationFenceHandle *animationFence; // ivar: _animationFence
@property (copy, nonatomic) BSAnimationSettings *animationSettings; // ivar: _animationSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BSProcessHandle *originatingProcess; // ivar: _originatingProcess
@property (readonly) Class superclass;
@property (retain, nonatomic) FBSceneUpdateContext *updateContext;
@property (retain, nonatomic) FBWatchdogTransitionContext *watchdogTransitionContext;


+(id)transitionContext;
-(BOOL)_isEmpty;
-(BOOL)appendDescriptionToBuilder:(id)arg0 forFlag:(NSInteger)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)settings:(id)arg0 appendDescriptionToBuilder:(id)arg1 forFlag:(NSInteger)arg2 object:(id)arg3 ofSetting:(NSUInteger)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)otherSettings;
-(id)settings:(id)arg0 keyDescriptionForSetting:(NSUInteger)arg1 ;
-(id)settings:(id)arg0 valueDescriptionForFlag:(NSInteger)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)transientLocalClientSettings;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif