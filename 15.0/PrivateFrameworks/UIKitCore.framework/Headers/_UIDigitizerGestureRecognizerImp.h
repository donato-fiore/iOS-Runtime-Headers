// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDIGITIZERGESTURERECOGNIZERIMP_H
#define _UIDIGITIZERGESTURERECOGNIZERIMP_H

@class NSTimer;
@protocol _UIDigitizerGestureRecognizerImpDelegate;

#import <Foundation/Foundation.h>


@interface _UIDigitizerGestureRecognizerImp : NSObject

@property (weak, nonatomic) NSObject<_UIDigitizerGestureRecognizerImpDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGPoint digitizerLocation; // ivar: _digitizerLocation
@property (nonatomic) CGFloat lastRecognitionTime; // ivar: _lastRecognitionTime
@property (nonatomic) CGFloat maximumPressDuration; // ivar: _maximumPressDuration
@property (nonatomic) CGFloat minimumPressDuration; // ivar: _minimumPressDuration
@property (weak, nonatomic) NSTimer *minimumPressDurationTimer; // ivar: _minimumPressDurationTimer
@property (nonatomic) NSInteger numberOfActiveTouches; // ivar: _numberOfActiveTouches
@property (nonatomic) CGFloat pressBeginTime; // ivar: _pressBeginTime
@property (nonatomic) CGFloat pressEndTime; // ivar: _pressEndTime
@property (nonatomic) CGFloat pressEndToTouchBeginDuration; // ivar: _pressEndToTouchBeginDuration
@property (nonatomic) CGFloat touchEndTime; // ivar: _touchEndTime
@property (nonatomic) CGFloat touchEndToPressEndDuration; // ivar: _touchEndToPressEndDuration
@property (weak, nonatomic) NSTimer *waitingForTouchesAfterPressTimer; // ivar: _waitingForTouchesAfterPressTimer


-(BOOL)_senderOfPressesHasTouchSurface:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)_senderOfPressesIsSoftwareRemoteWithEvent:(id)arg0 ;
-(BOOL)_shouldReportDigitizerLocation;
-(struct CGPoint )defaultDigitizerLocation;
-(void)_minimumPressDurationTimerFired:(id)arg0 ;
-(void)_waitingForTouchesAfterPressTimerFired:(id)arg0 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif