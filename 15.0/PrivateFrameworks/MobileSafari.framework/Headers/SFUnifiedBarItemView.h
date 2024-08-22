// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFUNIFIEDBARITEMVIEW_H
#define SFUNIFIEDBARITEMVIEW_H

@class UIButton, UIVisualEffectView, UIView, UIPreviewParameters;


#import "SFUnifiedBarMetrics.h"
#import "SFUnifiedBarTheme.h"
#import "SFUnifiedBarItem.h"
#import "SFUnifiedBarItemView.h"

@interface SFUnifiedBarItemView : UIButton {
    UIVisualEffectView *_platterView;
    UIVisualEffectView *_platterFillView;
    UIView *_cutoutView;
}


@property (nonatomic) CGFloat barBackgroundAlpha; // ivar: _barBackgroundAlpha
@property (retain, nonatomic) SFUnifiedBarMetrics *barMetrics; // ivar: _barMetrics
@property (retain, nonatomic) SFUnifiedBarTheme *barTheme; // ivar: _barTheme
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic, getter=isHovering) BOOL hovering; // ivar: _hovering
@property (nonatomic) CGRect initialFrame; // ivar: _initialFrame
@property (weak) SFUnifiedBarItem *item; // ivar: _item
@property (nonatomic, getter=isOccluded) BOOL occluded; // ivar: _occluded
@property (nonatomic) NSUInteger occludingItemIndex; // ivar: _occludingItemIndex
@property (weak, nonatomic) SFUnifiedBarItemView *occludingView; // ivar: _occludingView
@property (nonatomic) NSInteger platterStyle; // ivar: _platterStyle
@property (readonly, nonatomic) CGFloat preferredWidth;
@property (readonly, nonatomic) UIPreviewParameters *previewParameters;
@property (nonatomic) BOOL showsPlatter; // ivar: _showsPlatter
@property (nonatomic) CGFloat squishTransformFactor; // ivar: _squishTransformFactor
@property (nonatomic) CGFloat squishedInset; // ivar: _squishedInset
@property (nonatomic) CGFloat themeColorVisibility; // ivar: _themeColorVisibility
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_applyPlatterColor:(id)arg0 ;
-(void)_disableVibrancyIfNeededForTheme:(id)arg0 ;
-(void)_layOutCutoutUsingPresentationFrames:(BOOL)arg0 ;
-(void)_updateBackgroundAlpha;
-(void)_updateContentAlpha;
-(void)_updatePlatterEffect;
-(void)didEndDragging;
-(void)layOutCutout;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)willBeginDragging;


@end


#endif