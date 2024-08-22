// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFEEDBACKENGINE_H
#define _UIFEEDBACKENGINE_H

@class NSMutableDictionary, NSTimer, NSString, NSMapTable;

#import <Foundation/Foundation.h>


@interface _UIFeedbackEngine : NSObject {
    NSMutableDictionary *_completionBlocks;
    NSTimer *_suspensionTimer;
    BOOL _suspended;
}


@property (readonly, nonatomic) NSString *_stats_key;
@property (nonatomic, getter=_backgroundTaskIdentifier, setter=_setBackgroundTaskIdentifier:) NSUInteger backgroundTaskIdentifier; // ivar: _backgroundTaskIdentifier
@property (readonly, nonatomic) CGFloat currentTime;
@property (nonatomic, getter=isEnabled, setter=_setEnabled:) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSUInteger numberOfClients; // ivar: _numberOfClients
@property (retain, nonatomic, getter=_playerDequeueBlocks, setter=_setPlayerDequeueBlocks:) NSMapTable *playerDequeueBlocks; // ivar: _playerDequeueBlocks
@property (nonatomic) NSInteger prewarmCount; // ivar: _prewarmCount
@property (nonatomic, getter=_state, setter=_setState:) NSInteger state; // ivar: _state
@property (readonly, nonatomic, getter=_suspensionState) NSInteger suspensionState; // ivar: _suspensionState


+(BOOL)_supportsAbortingDeactivation;
+(BOOL)_supportsPlayingFeedback:(id)arg0 ;
+(BOOL)_supportsPlayingFeedbackPatternsDirectly;
+(BOOL)_supportsPlayingIndividualFeedback:(id)arg0 ;
+(id)_internalQueue;
+(id)engineForFeedback:(id)arg0 ;
+(id)sharedEngine;
-(BOOL)_internal_isSuspended;
-(id)_activationCountStatistics;
-(id)_activationDurationStatistics;
-(id)_outOfChannelsCountStatistics;
-(id)_prewarmDurationStatistics;
-(id)_statsSuffix;
-(id)description;
-(id)init;
-(void)_activate:(BOOL)arg0 andPerformWhenRunning:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationDidResume:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_applicationWillSuspend:(id)arg0 ;
-(void)_cooldown;
-(void)_deactivate;
-(void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(id)arg0 ;
-(void)_hostDidEnterBackground:(id)arg0 ;
-(void)_hostWillEnterForeground:(id)arg0 ;
-(void)_internal_activate:(BOOL)arg0 andPerformWhenRunning:(id)arg1 ;
-(void)_internal_activateEngine;
-(void)_internal_activateUnderlyingPlayerWithCompletion:(id)arg0 ;
-(void)_internal_cooldown;
-(void)_internal_cooldownEngineIfPossible;
-(void)_internal_cooldownUnderlyingPlayerIfPossibleWithCompletion:(id)arg0 ;
-(void)_internal_deactivate;
-(void)_internal_deactivateEngineIfPossible;
-(void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(id)arg0 ;
-(void)_internal_performAtState:(NSInteger)arg0 block:(id)arg1 ;
-(void)_internal_playFeedbackData:(id)arg0 atTime:(CGFloat)arg1 feedback:(id)arg2 effectiveFeedbackType:(NSUInteger)arg3 existingPlayer:(id)arg4 withCompletionBlock:(id)arg5 ;
-(void)_internal_prewarm:(BOOL)arg0 andPerformWhenPrewarmed:(id)arg1 ;
-(void)_internal_prewarmEngine;
-(void)_internal_prewarmUnderlyingPlayerWithCompletion:(id)arg0 ;
-(void)_internal_serviceBlocksForState:(NSInteger)arg0 withSuccess:(BOOL)arg1 ;
-(void)_internal_setSuspended:(BOOL)arg0 ;
-(void)_internal_setupBackgroundTask;
-(void)_internal_startWarmingFeedbacks:(id)arg0 ;
-(void)_internal_stopWarmingFeedbacks:(id)arg0 ;
-(void)_internal_teardownBackgroundTask;
-(void)_internal_teardownUnderlyingPlayerIfPossibleWithCompletion:(id)arg0 ;
-(void)_internal_updateSuspension;
-(void)_internal_willCancelFeedback:(id)arg0 ;
-(void)_internal_willPlayFeedback:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)_playFeedback:(id)arg0 atTime:(CGFloat)arg1 withCompletionBlock:(id)arg2 ;
-(void)_prewarm:(BOOL)arg0 andPerformWhenPrewarmed:(id)arg1 ;
-(void)_remoteViewControllerWillDisconnect:(id)arg0 ;
-(void)_setSuspended:(BOOL)arg0 ;
-(void)_startWarmingFeedbacks:(id)arg0 ;
-(void)_stats_outOfChannels;
-(void)_stats_stateDidChangeFrom:(NSInteger)arg0 to:(NSInteger)arg1 ;
-(void)_stopWarmingFeedbacks:(id)arg0 ;
-(void)_suspendEngineNow;
-(void)runWhenReady:(id)arg0 ;


@end


#endif