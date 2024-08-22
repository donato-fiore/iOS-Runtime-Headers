// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMSEMANTICSTYLECONTROL_H
#define CAMSEMANTICSTYLECONTROL_H

@class UIControl, UILabel, CEKEdgeGradientView, UIView, UIButton, NSString;
@protocol UIGestureRecognizerDelegate, CAMSemanticStyleSliderDelegate;


#import "CAMSemanticStyleSlider.h"
#import "CAMSemanticStyle.h"

@interface CAMSemanticStyleControl : UIControl <UIGestureRecognizerDelegate, CAMSemanticStyleSliderDelegate>



@property (readonly, nonatomic) UILabel *_descriptionLabel; // ivar: __descriptionLabel
@property (readonly, nonatomic) CEKEdgeGradientView *_edgeGradients; // ivar: __edgeGradients
@property (readonly, nonatomic) UIView *_gradientContainer; // ivar: __gradientContainer
@property (readonly, nonatomic) UIButton *_resetButton; // ivar: __resetButton
@property (readonly, nonatomic) CAMSemanticStyleSlider *_toneSlider; // ivar: __toneSlider
@property (readonly, nonatomic) CAMSemanticStyleSlider *_warmthSlider; // ivar: __warmthSlider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) ? gradientInsets; // ivar: _gradientInsets
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CAMSemanticStyle *semanticStyle; // ivar: _semanticStyle
@property (readonly) Class superclass;


-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleResetButtonReleased:(id)arg0 ;
-(void)_handleResetMenuItem:(id)arg0 ;
-(void)_handleSliderDidChangeValue:(id)arg0 ;
-(void)_updateResetButtonImage;
-(void)_updateSubviewsVisibilityWithDuration:(CGFloat)arg0 delay:(CGFloat)arg1 ;
-(void)layoutSubviews;
-(void)sliderWillCollapse:(id)arg0 ;
-(void)sliderWillExpand:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif