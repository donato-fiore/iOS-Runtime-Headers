// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFEEDBACKCOREHAPTICSENGINE_H
#define _UIFEEDBACKCOREHAPTICSENGINE_H

@class UIFeedbackEngine, NSMutableSet, CHHapticEngine;



@interface _UIFeedbackCoreHapticsEngine : UIFeedbackEngine {
    NSMutableSet *_playersInUse;
    NSMutableSet *_playersToInvalidate;
}


@property (readonly, nonatomic) CHHapticEngine *coreHapticsEngine; // ivar: _coreHapticsEngine
@property (readonly, nonatomic, getter=_usesFullGamut) BOOL usesFullGamut;


+(BOOL)_supportsAbortingDeactivation;
+(BOOL)_supportsPlayingFeedbackPatternsDirectly;
+(BOOL)_supportsPlayingIndividualFeedback:(id)arg0 ;
+(BOOL)_supportsPlayingIndividualFeedback:(id)arg0 allowsIgnoreCapture:(BOOL)arg1 isFullGamutEngine:(BOOL)arg2 ;
+(id)_internalQueue;
+(id)sharedEngine;
+(void)_loadHapticEngineClass;
+(void)_setHapticEngineCreationBlock:(id)arg0 ;
+(void)_setHapticPatternClass:(Class)arg0 ;
-(BOOL)_internal_initializeCoreHapticsEngine;
-(id)_internal_createCoreHapticsEngine;
-(id)_stats_key;
-(id)init;
-(void)_coreHapticsEngineStoppedForReason:(NSInteger)arg0 ;
-(void)_internal_activateUnderlyingPlayerWithCompletion:(id)arg0 ;
-(void)_internal_cooldownUnderlyingPlayerIfPossibleWithCompletion:(id)arg0 ;
-(void)_internal_coreHapticsEngineFinishedWithError:(id)arg0 completion:(id)arg1 ;
-(void)_internal_coreHapticsEngineStoppedForReason:(NSInteger)arg0 ;
-(void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(id)arg0 ;
-(void)_internal_prewarmUnderlyingPlayerWithCompletion:(id)arg0 ;
-(void)_internal_startRunningFeedbackPlayerWithCompletion:(id)arg0 ;
-(void)_internal_teardownUnderlyingPlayerIfPossibleWithCompletion:(id)arg0 ;


@end


#endif