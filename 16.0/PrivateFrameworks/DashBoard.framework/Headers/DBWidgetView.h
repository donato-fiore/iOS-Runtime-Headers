// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBWIDGETVIEW_H
#define DBWIDGETVIEW_H

@class UIView, NSString, NSTimer, MTShadowView;
@protocol CARSessionCommandObserving, DBWidgetViewFocusEnabledProviding;


#import "DBEnvironmentConfiguration.h"
#import "DBWidgetFocusRingView.h"
#import "_TtC9DashBoard22DBDashboardPlatterView.h"

@interface DBWidgetView : UIView <CARSessionCommandObserving>



@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration; // ivar: _environmentConfiguration
@property (weak, nonatomic) NSObject<DBWidgetViewFocusEnabledProviding> *focusEnabledProvider; // ivar: _focusEnabledProvider
@property (retain, nonatomic) NSTimer *focusFadeTimer; // ivar: _focusFadeTimer
@property (nonatomic) BOOL focusFaded; // ivar: _focusFaded
@property (retain, nonatomic) DBWidgetFocusRingView *focusRingView; // ivar: _focusRingView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *highContrastBackgroundColorView; // ivar: _highContrastBackgroundColorView
@property (retain, nonatomic) _TtC9DashBoard22DBDashboardPlatterView *platterView; // ivar: _platterView
@property (retain, nonatomic) MTShadowView *shadowView; // ivar: _shadowView
@property (readonly) Class superclass;


-(BOOL)_canFade;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canBecomeFocused;
-(id)initWithFrame:(struct CGRect )arg0 focusEnabledProvider:(id)arg1 environmentConfiguration:(id)arg2 ;
-(void)_evaluateFocusFade;
-(void)_fadeFocusRing;
-(void)_startFadeTimerIfNecessary;
-(void)_unfadeFocusRing;
-(void)_wheelChangedWithEvent:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)session:(id)arg0 didUpdateNightMode:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAppearanceForWallpaper;


@end


#endif