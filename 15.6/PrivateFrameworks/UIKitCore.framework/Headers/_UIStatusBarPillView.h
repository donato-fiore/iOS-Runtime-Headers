// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARPILLVIEW_H
#define _UISTATUSBARPILLVIEW_H

@class UIStatusBarRoundedCornerView, NSString, CALayer;
@protocol _UIStatusBarDisplayable, _UIStatusBarPersistentAnimation;


#import "UIAccessibilityHUDItem.h"
#import "UIColor.h"
#import "UIView.h"
#import "UIVisualEffect.h"
#import "UIVisualEffectView.h"

@interface _UIStatusBarPillView : UIStatusBarRoundedCornerView <_UIStatusBarDisplayable, _UIStatusBarPersistentAnimation>



@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic) UIEdgeInsets alignmentRectInsets; // ivar: _alignmentRectInsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger overriddenVerticalAlignment;
@property (retain, nonatomic) UIColor *pillColor; // ivar: _pillColor
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (retain, nonatomic) CALayer *pulseLayer; // ivar: _pulseLayer
@property (nonatomic) BOOL pulsing; // ivar: _pulsing
@property (weak, nonatomic) UIView *subviewForBaselineAlignment; // ivar: _subviewForBaselineAlignment
@property (readonly) Class superclass;
@property (retain, nonatomic) UIVisualEffect *visualEffect; // ivar: _visualEffect
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView
@property (readonly, nonatomic) BOOL wantsCrossfade;


-(BOOL)canBecomeFocused;
-(BOOL)isUserInteractionEnabled;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForLastBaselineLayout;
-(void)_updateBackgroundColor;
-(void)applyStyleAttributes:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)resumePersistentAnimation;


@end


#endif