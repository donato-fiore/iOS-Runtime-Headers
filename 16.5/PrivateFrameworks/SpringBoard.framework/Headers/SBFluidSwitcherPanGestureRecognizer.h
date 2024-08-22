// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFLUIDSWITCHERPANGESTURERECOGNIZER_H
#define SBFLUIDSWITCHERPANGESTURERECOGNIZER_H

@class NSString;
@protocol SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding;


#import "SBPanSystemGestureRecognizer.h"
#import "SBAppLayout.h"
#import "SBFluidSwitcherViewController.h"
#import "SBTouchHistory.h"

@interface SBFluidSwitcherPanGestureRecognizer : SBPanSystemGestureRecognizer <SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBAppLayout *initialTouchLeafAppLayout; // ivar: _initialTouchLeafAppLayout
@property (readonly, nonatomic) CGPoint initialTouchLocation; // ivar: _initialTouchLocation
@property (nonatomic) BOOL installedAsSystemGesture; // ivar: _installedAsSystemGesture
@property (readonly) Class superclass;
@property (weak, nonatomic) SBFluidSwitcherViewController *switcherViewController; // ivar: _switcherViewController
@property (retain, nonatomic) SBTouchHistory *touchHistory; // ivar: _touchHistory


-(CGFloat)averageTouchPathAngleOverTimeDuration:(CGFloat)arg0 ;
-(CGFloat)peakSpeed;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )averageTouchVelocityOverTimeDuration:(CGFloat)arg0 ;
-(void)conformsToSBGestureRecognizerTouchHistoryProviding;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif