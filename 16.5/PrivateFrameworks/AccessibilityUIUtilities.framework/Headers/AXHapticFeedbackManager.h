// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXHAPTICFEEDBACKMANAGER_H
#define AXHAPTICFEEDBACKMANAGER_H


#import <Foundation/Foundation.h>


@interface AXHapticFeedbackManager : NSObject



+(id)sharedManager;
-(void)_playCancelPatternFeedback;
-(void)_playDiscreteFeedbackForType:(NSInteger)arg0 ;
-(void)_playFeedback:(id)arg0 ;
-(void)_playFeedbackImpactBehaviorWithIntensity:(CGFloat)arg0 ;
-(void)_playPatternFeedback:(NSInteger)arg0 numberOfRepetitions:(NSInteger)arg1 atInterval:(CGFloat)arg2 ;
-(void)playHapticFeedbackForType:(NSInteger)arg0 ;


@end


#endif