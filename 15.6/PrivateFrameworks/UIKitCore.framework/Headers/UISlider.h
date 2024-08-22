// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISLIDER_H
#define UISLIDER_H

@class UIView<_UISliderVisualElement>, NSArray;
@protocol NSCoding;


#import "UIControl.h"
#import "UISliderDataModel.h"
#import "UIImage.h"
#import "_UIEdgeFeedbackGenerator.h"
#import "UIColor.h"
#import "_UIModulationFeedbackGenerator.h"

@interface UISlider : UIControl <NSCoding>

 {
    UIView<_UISliderVisualElement> *_visualElement;
    UISliderDataModel *_data;
    NSArray *_dummyViews;
    NSUInteger _preferredBehavioralStyle;
}


@property (nonatomic, setter=_setTrackEnabled:) BOOL _trackEnabled;
@property (readonly, nonatomic) NSUInteger behavioralStyle;
@property (nonatomic, getter=isContinuous) BOOL continuous;
@property (readonly, nonatomic) UIImage *currentMaximumTrackImage;
@property (readonly, nonatomic) UIImage *currentMinimumTrackImage;
@property (readonly, nonatomic) UIImage *currentThumbImage;
@property (retain, nonatomic, getter=_edgeFeedbackBehavior, setter=_setEdgeFeedbackBehavior:) _UIEdgeFeedbackGenerator *edgeFeedbackBehavior;
@property (retain, nonatomic, getter=_edgeFeedbackGenerator, setter=_setEdgeFeedbackGenerator:) _UIEdgeFeedbackGenerator *edgeFeedbackGenerator;
@property (retain, nonatomic) UIColor *maximumTrackTintColor;
@property (nonatomic) float maximumValue;
@property (retain, nonatomic) UIImage *maximumValueImage;
@property (retain, nonatomic) UIColor *minimumTrackTintColor;
@property (nonatomic) float minimumValue;
@property (retain, nonatomic) UIImage *minimumValueImage;
@property (retain, nonatomic, getter=_modulationFeedbackGenerator, setter=_setModulationFeedbackGenerator:) _UIModulationFeedbackGenerator *modulationFeedbackGenerator;
@property (nonatomic) NSUInteger preferredBehavioralStyle;
@property (retain, nonatomic) UIColor *thumbTintColor;
@property (nonatomic) float value;


+(BOOL)_allowActionsToQueue;
+(BOOL)_allowsUnsupportedMacIdiomBehavior;
+(void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)arg0 ;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_isThumbEnabled;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)cancelMouseTracking;
-(BOOL)cancelTouchTracking;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isAnimatingValueChange;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)isTracking;
-(NSUInteger)_controlEventsForActionTriggered;
-(id)_maxTrackView;
-(id)_maxValueView;
-(id)_minTrackView;
-(id)_minValueView;
-(id)_thumbView;
-(id)_thumbViewNeue;
-(id)createThumbView;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)maximumTrackImageForState:(NSUInteger)arg0 ;
-(id)minimumTrackImageForState:(NSUInteger)arg0 ;
-(id)thumbImageForState:(NSUInteger)arg0 ;
-(struct CGRect )maximumValueImageRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )minimumValueImageRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )thumbRectForBounds:(struct CGRect )arg0 trackRect:(struct CGRect )arg1 value:(float)arg2 ;
-(struct CGRect )trackRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )valueTextRectForBounds:(struct CGRect )arg0 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_thumbHitEdgeInsets;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_controlTouchBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)_controlTouchEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)_controlTouchMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)_installVisualElement;
-(void)_installVisualElement:(id)arg0 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_setMaxValue:(float)arg0 ;
-(void)_setMinValue:(float)arg0 ;
-(void)_setMinimumTrackVisible:(BOOL)arg0 withDuration:(CGFloat)arg1 ;
-(void)_setThumbEnabled:(BOOL)arg0 ;
-(void)_setUseLookNeue:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setMaximumTrackImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setMaximumTrackImage:(id)arg0 forStates:(NSUInteger)arg1 ;
-(void)setMinimumTrackImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setMinimumTrackImage:(id)arg0 forStates:(NSUInteger)arg1 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setShowValue:(BOOL)arg0 ;
-(void)setThumbImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setThumbImage:(id)arg0 forStates:(NSUInteger)arg1 ;
-(void)setTracking:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif