// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFUNIFIEDBARITEMVIEW_H
#define SFUNIFIEDBARITEMVIEW_H

@class UIButton, _UIVisualEffectBackdropView, UIVisualEffectView, NSArray, UIView, NSString, UIDragPreviewParameters;


#import "SFUnifiedBarItemPlatterView.h"
#import "SFUnifiedBarMetrics.h"
#import "SFUnifiedBarTheme.h"
#import "SFUnifiedBarItem.h"

@interface SFUnifiedBarItemView : UIButton {
    _UIVisualEffectBackdropView *_cutoutBorderCopyView;
    SFUnifiedBarItemPlatterView *_cutoutBorderPlatterView;
    SFUnifiedBarItemPlatterView *_platterView;
    UIVisualEffectView *_platterFillView;
    NSArray *_platterViewConstraints;
    NSInteger _lastAppliedPlatterStyle;
}


@property (nonatomic) CGFloat barBackgroundAlpha; // ivar: _barBackgroundAlpha
@property (retain, nonatomic) SFUnifiedBarMetrics *barMetrics; // ivar: _barMetrics
@property (retain, nonatomic) SFUnifiedBarTheme *barTheme; // ivar: _barTheme
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (copy, nonatomic) NSString *cutoutBorderCopyGroupName; // ivar: _cutoutBorderCopyGroupName
@property (nonatomic, getter=isHovering) BOOL hovering; // ivar: _hovering
@property (weak) SFUnifiedBarItem *item; // ivar: _item
@property (nonatomic, getter=isOccluded) BOOL occluded; // ivar: _occluded
@property (nonatomic) NSInteger platterStyle; // ivar: _platterStyle
@property (readonly, nonatomic) CGFloat preferredWidth;
@property (readonly, nonatomic) UIDragPreviewParameters *previewParameters;
@property (nonatomic) BOOL showsPlatter; // ivar: _showsPlatter
@property (nonatomic) CGFloat squishTransformFactor; // ivar: _squishTransformFactor
@property (nonatomic) CGFloat squishedInset; // ivar: _squishedInset
@property (nonatomic) CGFloat themeColorVisibility; // ivar: _themeColorVisibility
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(BOOL)_needsCopyCutoutBorder;
-(BOOL)_needsPlatterCutoutBorder;
-(BOOL)_needsPlatterView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_applyPlatterColor:(id)arg0 ;
-(void)_applyThemeToPlatterView:(id)arg0 ;
-(void)_buttonShapesEnabledDidChange;
-(void)_disableVibrancyIfNeededForTheme:(id)arg0 ;
-(void)_updateBackgroundAlpha;
-(void)_updateContentAlpha;
-(void)_updateOverrideUserInterfaceStyle;
-(void)_updatePlatterEffect;
-(void)applyTheme;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)updateConstraints;
-(void)updateCornerRadius;


@end


#endif