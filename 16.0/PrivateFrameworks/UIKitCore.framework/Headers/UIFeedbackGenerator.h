// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIFEEDBACKGENERATOR_H
#define UIFEEDBACKGENERATOR_H

@class NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_source, UICoordinateSpace;

#import <Foundation/Foundation.h>

#import "_UIFeedbackGeneratorConfiguration.h"
#import "UIView.h"

@interface UIFeedbackGenerator : NSObject {
    NSInteger _styleActivationCount;
    NSInteger _autoDeactivationCount;
    NSObject<OS_dispatch_source> *_autoDeactivateTimer;
    NSMutableDictionary *_preparationTimers;
    id *_feedbackWarmingBlock;
    CGFloat _currentDelay;
    NSSet *_usedFeedbacks;
    BOOL _activated;
}


@property (readonly, nonatomic) NSString *_stats_key;
@property (nonatomic) NSInteger activationCount; // ivar: _activationCount
@property (readonly, nonatomic, getter=_isAutoDeactivated) BOOL autoDeactivated;
@property (readonly, nonatomic, getter=_autoDeactivationTimeout) CGFloat autoDeactivationTimeout;
@property (retain, nonatomic, getter=_configuration, setter=_setConfiguration:) _UIFeedbackGeneratorConfiguration *configuration; // ivar: _configuration
@property (weak, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace; // ivar: _coordinateSpace
@property (readonly, nonatomic, getter=_effectiveCoordinateSpace) NSObject<UICoordinateSpace> *effectiveCoordinateSpace;
@property (readonly, nonatomic, getter=_isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSSet *engines; // ivar: _engines
@property (nonatomic) NSInteger externalActivationCount; // ivar: _externalActivationCount
@property (nonatomic, getter=_isMuted, setter=_setMuted:) BOOL muted;
@property (nonatomic) BOOL usesCustomActivation; // ivar: _usesCustomActivation
@property (weak, nonatomic) UIView *view; // ivar: _view


+(id)_defaultCoordinateSpace;
+(id)behaviorWithConfiguration:(id)arg0 coordinateSpace:(id)arg1 ;
+(id)behaviorWithCoordinateSpace:(id)arg0 ;
+(void)_resetAutoDeactivateTimeout;
+(void)_resetPreparationTimeouts;
+(void)_setAutoDeactivateTimeout:(CGFloat)arg0 ;
+(void)_setPreparationTimeout:(CGFloat)arg0 forStyle:(NSInteger)arg1 ;
+(void)_setRunningTests:(BOOL)arg0 ;
-(BOOL)isActive;
-(CGFloat)_preparationTimeoutForStyle:(NSInteger)arg0 ;
-(NSInteger)_outputMode;
-(id)_activationDurationStatistics;
-(id)_activationTimeOutCountStatistics;
-(id)_playCountStatistics;
-(id)_preparationCountStatistics;
-(id)_preparationTimerForStyle:(NSInteger)arg0 ;
-(id)_statsSuffix;
-(id)_ui_descriptionBuilder;
-(id)description;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 coordinateSpace:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 view:(id)arg1 ;
-(id)initWithCoordinateSpace:(id)arg0 ;
-(void)__activateWithStyle:(NSInteger)arg0 forFeedback:(id)arg1 completionBlock:(id)arg2 ;
-(void)__deactivateWithStyle:(NSInteger)arg0 ;
-(void)_activateWithStyle:(NSInteger)arg0 completionBlock:(id)arg1 ;
-(void)_activated;
-(void)_autoDeactivate;
-(void)_clientDidUpdateGeneratorWithSelector:(SEL)arg0 ;
-(void)_deactivateWithStyle:(NSInteger)arg0 ;
-(void)_deactivated;
-(void)_forceDeactivationForStyle:(NSInteger)arg0 ;
-(void)_playFeedback:(id)arg0 ;
-(void)_playFeedback:(id)arg0 withMinimumIntervalPassed:(CGFloat)arg1 since:(*CGFloat)arg2 prefersRegularPace:(BOOL)arg3 ;
-(void)_prepareWithStyle:(NSInteger)arg0 ;
-(void)_scheduleFeedbackWarming;
-(void)_setOutputMode:(NSInteger)arg0 ;
-(void)_setPreparationTimer:(id)arg0 forStyle:(NSInteger)arg1 ;
-(void)_setupAutoDeactivateTimer;
-(void)_setupEnginesIfNeededForFeedback:(id)arg0 ;
-(void)_setupForFeedback:(id)arg0 ;
-(void)_startFeedbackWarming;
-(void)_stats_activationDidChangeTo:(BOOL)arg0 ;
-(void)_stats_activationTimedOut;
-(void)_stats_playedFeedback;
-(void)_stats_prepared;
-(void)_stopAutoDeactivateTimer;
-(void)_stopFeedback:(id)arg0 ;
-(void)_stopFeedbackWarming;
-(void)_stopPreparationForAllStyles;
-(void)_stopPreparationForStyle:(NSInteger)arg0 ;
-(void)_updateActivationStateForRemovedEngines:(id)arg0 addedEngines:(id)arg1 prewarmCount:(NSInteger)arg2 turnOnCount:(NSInteger)arg3 ;
-(void)_updatePreparationTimer:(id)arg0 withTimeout:(CGFloat)arg1 ;
-(void)activateWithCompletionBlock:(id)arg0 ;
-(void)deactivate;
-(void)dealloc;
-(void)performFeedbackWithDelay:(CGFloat)arg0 insideBlock:(id)arg1 ;
-(void)prepare;


@end


#endif