// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSPROMINENTDISPLAYVIEW_H
#define CSPROMINENTDISPLAYVIEW_H

@class UIView, NSMutableArray, BSUIVibrancyEffectView, BSUIVibrancyShadowView;


#import "CSProminentEmptyElementView.h"
#import "CSProminentTextElementView.h"
#import "CSProminentLayoutController.h"
#import "CSProminentTimeView.h"

@interface CSProminentDisplayView : UIView

@property (nonatomic) BOOL animatingTransientSubtitleTransition; // ivar: _animatingTransientSubtitleTransition
@property (nonatomic) BOOL animatingTransientSubtitleTransitionToTransient; // ivar: _animatingTransientSubtitleTransitionToTransient
@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) CSProminentEmptyElementView *complicationRowView; // ivar: _complicationRowView
@property (retain, nonatomic) CSProminentTextElementView *customSubtitleView; // ivar: _customSubtitleView
@property (nonatomic) BOOL hasClearedSinceLastAddedTransient; // ivar: _hasClearedSinceLastAddedTransient
@property (readonly, nonatomic) CSProminentLayoutController *layoutController; // ivar: _layoutController
@property (retain, nonatomic) NSMutableArray *pendedTransientSubtitleViews; // ivar: _pendedTransientSubtitleViews
@property (nonatomic) BOOL shouldApplyVibrancyToComplications; // ivar: _shouldApplyVibrancyToComplications
@property (nonatomic) CGFloat subtitleAlpha; // ivar: _subtitleAlpha
@property (retain, nonatomic) CSProminentEmptyElementView *subtitleComplicationView; // ivar: _subtitleComplicationView
@property (retain, nonatomic) CSProminentTextElementView *subtitleView; // ivar: _subtitleView
@property (retain, nonatomic) CSProminentTimeView *timeView; // ivar: _timeView
@property (retain, nonatomic) CSProminentTextElementView *transientSubtitleView; // ivar: _transientSubtitleView
@property (nonatomic) BOOL usesEditingLayout; // ivar: _usesEditingLayout
@property (readonly, nonatomic) BSUIVibrancyEffectView *vibrancyEffectView; // ivar: _vibrancyEffectView
@property (retain, nonatomic) BSUIVibrancyShadowView *vibrancyShadowView; // ivar: _vibrancyShadowView


-(id)_complicationsSuperview;
-(id)_contentView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_addComplicationSubview:(id)arg0 ;
-(void)_applyAlphaToNonTransientSubtitleViews:(CGFloat)arg0 ;
-(void)_showTransientSubtitleView:(id)arg0 ;
-(void)_showTransientSubtitleView:(id)arg0 withDelay:(CGFloat)arg1 ;
-(void)_transitionToNextPendedSubtitleIfNecessary;
-(void)_transitionToNextPendedSubtitleIfNecessaryWithDelay:(CGFloat)arg0 ;
-(void)_updateAlphaForNonTransientSubtitleViews;
-(void)_updateVisibilityForNonTransientSubtitleViews;
-(void)layoutSubviews;
-(void)setDisplayDate:(id)arg0 ;


@end


#endif