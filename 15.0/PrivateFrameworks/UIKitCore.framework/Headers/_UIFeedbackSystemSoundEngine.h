// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFEEDBACKSYSTEMSOUNDENGINE_H
#define _UIFEEDBACKSYSTEMSOUNDENGINE_H

@class UIFeedbackEngine, NSCountedSet;
@protocol _UIFeedbackPlayer_Internal;



@interface _UIFeedbackSystemSoundEngine : UIFeedbackEngine <_UIFeedbackPlayer_Internal>



@property (copy, nonatomic) id *invalidationBlock; // ivar: _invalidationBlock
@property (readonly, nonatomic) NSCountedSet *suspendedSSIDs; // ivar: _suspendedSSIDs
@property (readonly, nonatomic) NSCountedSet *warmSSIDs; // ivar: _warmSSIDs


+(BOOL)_supportsPlayingIndividualFeedback:(id)arg0 ;
+(id)_internalQueue;
+(id)sharedEngine;
-(BOOL)_internal_playFeedbackData:(id)arg0 forFeedback:(id)arg1 atTime:(CGFloat)arg2 ;
-(BOOL)_internal_prepareSystemSoundID:(unsigned int)arg0 forBeingActive:(BOOL)arg1 ;
-(id)_stats_key;
-(void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(id)arg0 ;
-(void)_internal_performForEachSSIDsInFeedbacks:(id)arg0 block:(id)arg1 ;
-(void)_internal_playFeedbackDataNow:(id)arg0 forFeedback:(id)arg1 withOptions:(id)arg2 ;
-(void)_internal_startWarmingFeedbacks:(id)arg0 ;
-(void)_internal_stopFeedbackData:(id)arg0 forFeedback:(id)arg1 ;
-(void)_internal_stopWarmingFeedbacks:(id)arg0 ;
-(void)_internal_updateSuspension;
-(void)_playFeedback:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)_stopFeedback:(id)arg0 ;
-(void)_updateValueForParameters:(id)arg0 withKey:(id)arg1 ;


@end


#endif