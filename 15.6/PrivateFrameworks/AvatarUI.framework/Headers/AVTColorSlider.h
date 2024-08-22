// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTCOLORSLIDER_H
#define AVTCOLORSLIDER_H

@class UISlider, _UIEdgeFeedbackGenerator, UISelectionFeedbackGenerator, CAShapeLayer, CALayer, UIImageView;
@protocol AVTColorSliderDelegate;



@interface AVTColorSlider : UISlider

@property (weak, nonatomic) NSObject<AVTColorSliderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) _UIEdgeFeedbackGenerator *edgeFeedbackGenerator; // ivar: _edgeFeedbackGenerator
@property (nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator; // ivar: _selectionFeedbackGenerator
@property (nonatomic) BOOL shouldTriggerFeedback; // ivar: _shouldTriggerFeedback
@property (retain, nonatomic) CAShapeLayer *thumbBorderLayer; // ivar: _thumbBorderLayer
@property (retain, nonatomic) CAShapeLayer *thumbClippingLayer; // ivar: _thumbClippingLayer
@property (retain, nonatomic) CALayer *thumbContentLayer; // ivar: _thumbContentLayer
@property (readonly, nonatomic) CALayer *thumbLayer;
@property (retain, nonatomic) CALayer *thumbSoftShadowLayer; // ivar: _thumbSoftShadowLayer
@property (retain, nonatomic) UIImageView *thumbView; // ivar: _thumbView
@property (retain, nonatomic) CALayer *trackLayer; // ivar: _trackLayer


-(id)createThumbView;
-(id)currentMaximumTrackImage;
-(id)currentMinimumTrackImage;
-(id)initWithUserInterfaceLayoutDirection:(NSInteger)arg0 ;
-(struct CGColor *)trackBorderColor;
-(struct CGRect )thumbRectForBounds:(struct CGRect )arg0 trackRect:(struct CGRect )arg1 value:(float)arg2 ;
-(struct CGRect )trackRectForBounds:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)relayoutSublayers;
-(void)removeTrackLayer:(id)arg0 animated:(BOOL)arg1 ;
-(void)valueDidChange:(id)arg0 forEvent:(id)arg1 ;


@end


#endif