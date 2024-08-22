// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBDOCKVIEW_H
#define SBDOCKVIEW_H

@class UIView, UIImageView, UIColor, NSString, _UILegibilitySettings;
@protocol SBUICoronaAnimationControllerParticipant, SBDockViewDelegate;


#import "SBHighlightView.h"
#import "SBDockIconListView.h"

@interface SBDockView : UIView <SBUICoronaAnimationControllerParticipant>

 {
    SBHighlightView *_highlightView;
    UIImageView *_backgroundImageView;
    UIView *_accessibilityBackgroundView;
    BOOL _forSnapshot;
}


@property (readonly, nonatomic) UIColor *accessibilityBackgroundColor;
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBDockViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger dockEdge; // ivar: _dockEdge
@property (readonly, nonatomic) CGFloat dockHeight;
@property (readonly, nonatomic) CGFloat dockHeightPadding;
@property (readonly, nonatomic, getter=isDockInset) BOOL dockInset;
@property (nonatomic) CGFloat dockListOffset; // ivar: _dockListOffset
@property (readonly, nonatomic) SBDockIconListView *dockListView; // ivar: _iconListView
@property (readonly, nonatomic) CGRect dockListViewFrame;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly) Class superclass;


-(CGFloat)_layoutScale;
-(CGFloat)_minimumHomeScreenScale;
-(id)_listLayout;
-(id)_visualConfiguration;
-(id)initWithDockListView:(id)arg0 forSnapshot:(BOOL)arg1 ;
-(id)traitCollection;
-(struct UIEdgeInsets )_dockOverhangInsets;
-(void)_backgroundContrastDidChange:(id)arg0 ;
-(void)_updateCornerRadii;
-(void)coronaAnimationController:(id)arg0 willAnimateCoronaTransitionWithAnimator:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)getDockViewMetrics:(struct ? *)arg0 ;
-(void)layoutSubviews;
-(void)minimumHomeScreenScaleDidChange;
-(void)setBackgroundAlpha:(CGFloat)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAccessibilityTintColor;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif