// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBCADENCEMONITOR_H
#define UIKBCADENCEMONITOR_H

@protocol _UIKBRTRecognizerAveragingRuleProtocol;

#import <Foundation/Foundation.h>

#import "UIDelayedAction.h"

@interface UIKBCadenceMonitor : NSObject <_UIKBRTRecognizerAveragingRuleProtocol>



@property (nonatomic) float cadence; // ivar: _cadence
@property (nonatomic) float confidence; // ivar: _confidence
@property (nonatomic) CGFloat gapAvg; // ivar: _gapAvg
@property (nonatomic) BOOL isUserTyping; // ivar: _isUserTyping
@property (nonatomic) CGFloat prevTouchDown; // ivar: _prevTouchDown
@property (nonatomic) int touchCount; // ivar: _touchCount
@property (retain, nonatomic) UIDelayedAction *touchLogTimer; // ivar: _touchLogTimer
@property (nonatomic) float typingAvg; // ivar: _typingAvg


-(id)init;
-(id)recognizer:(id)arg0 confidenceWhenPendingTouchInfo:(id)arg1 ;
-(id)recognizer:(id)arg0 confidenceWhenSettingTouchInfo:(id)arg1 ;
-(void)addTypingTouchTime:(CGFloat)arg0 ;
-(void)logUserTyping:(id)arg0 ;
-(void)reset;
-(void)typingCadence:(CGFloat)arg0 ;
-(void)updateConfidenceWithGap:(CGFloat)arg0 ;


@end


#endif