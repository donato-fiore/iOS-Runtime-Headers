// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHOMEGESTUREPANGESTURERECOGNIZER_H
#define SBHOMEGESTUREPANGESTURERECOGNIZER_H

@class NSString, UIView;
@protocol PTSettingsKeyObserver, SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding, SBHomeGesturePanGestureRecognizerInterfaceDelegate;


#import "SBScreenEdgePanGestureRecognizer.h"
#import "SBHomeGestureSettings.h"
#import "SBFluidSwitcherGestureExclusionTrapezoid.h"
#import "SBTouchHistory.h"

@interface SBHomeGesturePanGestureRecognizer : SBScreenEdgePanGestureRecognizer <PTSettingsKeyObserver, SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHomeGestureSettings *homeGestureSettings; // ivar: _homeGestureSettings
@property (nonatomic) BOOL installedAsSystemGesture; // ivar: _installedAsSystemGesture
@property (weak, nonatomic) NSObject<SBHomeGesturePanGestureRecognizerInterfaceDelegate> *interfaceDelegate; // ivar: _interfaceDelegate
@property (retain, nonatomic) SBFluidSwitcherGestureExclusionTrapezoid *landscapeExclusionTrapezoid; // ivar: _landscapeExclusionTrapezoid
@property (retain, nonatomic) SBFluidSwitcherGestureExclusionTrapezoid *portraitExclusionTrapezoid; // ivar: _portraitExclusionTrapezoid
@property (nonatomic) BOOL preventHorizontalSwipesOutsideTrapezoid; // ivar: _preventHorizontalSwipesOutsideTrapezoid
@property (readonly) Class superclass;
@property (retain, nonatomic) SBTouchHistory *touchHistory; // ivar: _touchHistory
@property (readonly, weak, nonatomic) UIView *viewForTouchHistory;


+(id)homeGesturePanGestureRecognizerWithTarget:(id)arg0 action:(SEL)arg1 ;
-(BOOL)_isOutsideOfExclusionTrapezoid;
-(BOOL)_shouldBegin;
-(BOOL)_shouldBlockHomeGestureForKeyboardInputMode:(id)arg0 ;
-(CGFloat)averageTouchPathAngleOverTimeDuration:(CGFloat)arg0 ;
-(CGFloat)peakSpeed;
-(NSInteger)_touchInterfaceOrientation;
-(id)_currentExclusionShapeForEdge:(NSUInteger)arg0 ;
-(id)_currentKeyboardExclusionCompositeShape;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 type:(NSInteger)arg2 options:(NSUInteger)arg3 ;
-(struct CGPoint )averageTouchVelocityOverTimeDuration:(CGFloat)arg0 ;
-(void)_SBLogTouchesWithMethodName:(id)arg0 withMethodName:(id)arg1 ;
-(void)_setUpExclusionTrapezoids;
-(void)_updateHomeGestureParameters;
-(void)conformsToSBGestureRecognizerTouchHistoryProviding;
-(void)reset;
-(void)sb_commonInitHomeGesturePanGestureRecognizer;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif