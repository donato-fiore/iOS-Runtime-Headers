// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFEEDBACKCOREHAPTICSPLAYER_H
#define _UIFEEDBACKCOREHAPTICSPLAYER_H

@protocol _UIFeedbackPlayer_Internal, OS_dispatch_queue, CHHapticPatternPlayer;

#import <Foundation/Foundation.h>

#import "_UIFeedbackCoreHapticsEngine.h"

@interface _UIFeedbackCoreHapticsPlayer : NSObject <_UIFeedbackPlayer_Internal>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (retain, nonatomic) NSObject<CHHapticPatternPlayer> *coreHapticsPlayer; // ivar: _coreHapticsPlayer
@property (weak, nonatomic) _UIFeedbackCoreHapticsEngine *hapticEngine; // ivar: _hapticEngine
@property (copy, nonatomic) id *invalidationBlock; // ivar: _invalidationBlock


-(BOOL)_internal_playFeedbackData:(id)arg0 forFeedback:(id)arg1 atTime:(CGFloat)arg2 ;
-(id)_internal_createEventsForFeedbackData:(id)arg0 engine:(id)arg1 parameters:(*id)arg2 parameterCurves:(*id)arg3 ;
-(id)_internal_createEventsForFileFeedbackData:(id)arg0 engine:(id)arg1 parameters:(*id)arg2 parameterCurves:(*id)arg3 ;
-(id)_internal_createEventsForLegacyFeedbackData:(id)arg0 ;
-(id)_internal_createEventsForTransientHapticData:(id)arg0 ;
-(id)_internal_createFixedParameterForParameters:(id)arg0 withKey:(id)arg1 forEventType:(id)arg2 ;
-(id)_internal_createPatternForFeedbackData:(id)arg0 feedback:(id)arg1 engine:(id)arg2 ;
-(id)_internal_createPlayerWithPattern:(id)arg0 ;
-(id)initWithEngine:(id)arg0 ;
-(void)_internal_stopFeedbackData:(id)arg0 forFeedback:(id)arg1 ;
-(void)_internal_updateValueForParameters:(id)arg0 withKey:(id)arg1 ;
-(void)_playFeedback:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)_stopFeedback:(id)arg0 ;
-(void)_updateValueForParameters:(id)arg0 withKey:(id)arg1 ;


@end


#endif