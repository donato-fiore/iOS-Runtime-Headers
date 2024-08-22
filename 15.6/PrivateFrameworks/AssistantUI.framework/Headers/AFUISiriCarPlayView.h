// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFUISIRICARPLAYVIEW_H
#define AFUISIRICARPLAYVIEW_H

@class UIView, SUICOrbView, CRSUIStatusBarStyleAssertion, NSString;
@protocol AFUISiriCarPlayBackgroundViewDelegate, AFUISiriContent, SUICOrbViewControlling, AFUISiriContentDelegate;


#import "AFUISiriCarPlayBackgroundView.h"

@interface AFUISiriCarPlayView : UIView <AFUISiriCarPlayBackgroundViewDelegate, AFUISiriContent, SUICOrbViewControlling>

 {
    id<AFUISiriContentDelegate> *_siriContentDelegate;
    AFUISiriCarPlayBackgroundView *_backgroundView;
    SUICOrbView *_orbView;
    UIView *_orbContainerView;
    CRSUIStatusBarStyleAssertion *_statusBarStyleAssertion;
    UIView *_siriXIndicatorView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) UIView *remoteContentView; // ivar: _remoteContentView
@property (nonatomic) NSInteger siriSessionState; // ivar: _siriSessionState
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)siriXIndicatorView;
-(struct CGRect )orbViewRectInCarplayView;
-(void)_orbHeldWithGestureRecognizer:(id)arg0 ;
-(void)_orbTappedWithGestureRecognizer:(id)arg0 ;
-(void)_setupContentViews;
-(void)animateOrbViewToOffWithCompletion:(id)arg0 ;
-(void)backgroundView:(id)arg0 requestsCarPlayStatusBarOverride:(BOOL)arg1 animationSettings:(id)arg2 ;
-(void)dealloc;
-(void)resetOrbViewToSiriSessionState;
-(void)setAuxiliaryViewsHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setContentViewsAlpha:(CGFloat)arg0 ;
-(void)setInputPowerLevel:(float)arg0 ;
-(void)setOutputPowerLevel:(float)arg0 ;
-(void)setRequestHandlingStatus:(NSUInteger)arg0 ;
-(void)setSiriContentDelegate:(id)arg0 ;
-(void)updateBackgroundViewMode:(NSInteger)arg0 ;
-(void)updateBackgroundVisibility:(BOOL)arg0 ;
-(void)updateOrbViewState;


@end


#endif