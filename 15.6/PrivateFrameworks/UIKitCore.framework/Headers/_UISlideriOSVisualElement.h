// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISLIDERIOSVISUALELEMENT_H
#define _UISLIDERIOSVISUALELEMENT_H

@class NSArray, NSString;
@protocol UIPointerInteractionDelegate, _UISliderVisualElement;


#import "UIView.h"
#import "UIImageView.h"
#import "UISliderDataModel.h"
#import "UISlider.h"

@interface _UISlideriOSVisualElement : UIView <UIPointerInteractionDelegate, _UISliderVisualElement>

 {
    UIImageView *_innerThumbView;
    UIImageView *_minValueImageView;
    UIImageView *_maxValueImageView;
    UIImageView *_thumbView;
    UIImageView *_minTrackView;
    UIImageView *_maxTrackView;
    UIView *_minTrackClipView;
    UIView *_maxTrackClipView;
    ? _sliderFlags;
    CGFloat _hitOffset;
    UIView *_thumbViewNeue;
    NSArray *_trackColors;
    BOOL _trackIsArtworkBased;
    BOOL _thumbIsArtworkBased;
    BOOL _maxColorIsValid;
}


@property (retain, nonatomic) UISliderDataModel *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UISlider *slider; // ivar: _slider
@property (readonly) Class superclass;


+(id)_modernThumbImageWithTraitCollection:(id)arg0 tintColor:(id)arg1 ;
+(struct ? )drawingMetricsForPlatform;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_shouldBeginTrackingAtPoint:(struct CGPoint )arg0 pointInKnob:(struct CGPoint *)arg1 inKnob:(*BOOL)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)cancelMouseTracking;
-(BOOL)cancelTouchTracking;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isAnimatingValueChange;
-(CGFloat)_cornerRadiusForRect:(struct CGRect )arg0 ;
-(CGFloat)thumbDimensionNeue;
-(NSUInteger)state;
-(id)createThumbView;
-(id)createThumbViewNeue;
-(id)currentMaximumTrackImage;
-(id)currentMinimumTrackImage;
-(id)currentThumbImage;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)maxTrackView;
-(id)maxValueImageView;
-(id)maximumValueImage;
-(id)minTrackView;
-(id)minValueImageView;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)thumbTintColor;
-(id)thumbView;
-(id)thumbViewNeue;
-(struct CGRect )maximumValueImageRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )minimumValueImageRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )thumbRectForBounds:(struct CGRect )arg0 trackRect:(struct CGRect )arg1 value:(float)arg2 ;
-(struct CGRect )trackRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )valueTextRectForBounds:(struct CGRect )arg0 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(struct UIEdgeInsets )thumbHitEdgeInsets;
-(void)_buildTrackArtwork;
-(void)_contentSizeCategoryChanged:(id)arg0 ;
-(void)_controlTouchBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)_controlTouchEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)_controlTouchMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)_initImages;
-(void)_initSubviews;
-(void)_layoutSubviewsForBoundsChange:(BOOL)arg0 ;
-(void)_listenForContentSizeCategoryChangesIfNecessary;
-(void)_rebuildControlThumb:(BOOL)arg0 track:(BOOL)arg1 ;
-(void)_setValue:(float)arg0 andSendAction:(BOOL)arg1 ;
-(void)_setupFeedback;
-(void)_sliderAnimationDidStop:(BOOL)arg0 ;
-(void)_traitCollectionDidChangeInternal:(struct _UITraitCollectionChangeDescription *)arg0 ;
-(void)_updateAppearanceForEnabled:(BOOL)arg0 ;
-(void)_updateMaxTrackColorForInitialization:(BOOL)arg0 ;
-(void)_updateMinimumTrackTintColor;
-(void)dealloc;
-(void)didChangeMinimumTrackVisibleWithDuration:(CGFloat)arg0 ;
-(void)didPerformLayout;
-(void)didSetContinuous;
-(void)didSetEnabled;
-(void)didSetHighlighted;
-(void)didSetMaximumTrackImageForState:(NSUInteger)arg0 ;
-(void)didSetMaximumTrackImageForStates;
-(void)didSetMaximumTrackTintColor;
-(void)didSetMaximumValueImage;
-(void)didSetMinimumTrackImageForState:(NSUInteger)arg0 ;
-(void)didSetMinimumTrackImageForStates;
-(void)didSetMinimumTrackTintColor;
-(void)didSetMinimumValueImage;
-(void)didSetSelected;
-(void)didSetShowValue;
-(void)didSetThumbEnabled;
-(void)didSetThumbImageForState:(NSUInteger)arg0 ;
-(void)didSetThumbImageForStates;
-(void)didSetThumbTintColor;
-(void)didSetValues;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setValue:(float)arg0 animated:(BOOL)arg1 ;
-(void)showValueDidChange;
-(void)tintColorDidChange;


@end


#endif