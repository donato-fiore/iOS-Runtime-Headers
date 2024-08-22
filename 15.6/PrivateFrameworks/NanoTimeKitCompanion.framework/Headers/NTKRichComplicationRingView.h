// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONRINGVIEW_H
#define NTKRICHCOMPLICATIONRINGVIEW_H

@class UIView, CAShapeLayer, NSString;
@protocol CLKMonochromeComplicationView, CLKMonochromeFilterProvider;


#import "NTKRichComplicationShapeView.h"

@interface NTKRichComplicationRingView : NTKRichComplicationShapeView <CLKMonochromeComplicationView>

 {
    CGFloat _curveWidth;
    CGFloat _padding;
    UIView *_foregroundView;
    CAShapeLayer *_headLayer;
    CAShapeLayer *_tailLayer;
    CAShapeLayer *_tailStrokeLayer;
}


@property (nonatomic) BOOL clockwise; // ivar: _clockwise
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_disabledLayerActions;
-(BOOL)_shouldReverseGradient;
-(CGFloat)_shapeLineWidth;
-(id)_createHeadTailViewWithStartAngle:(CGFloat)arg0 endAngle:(CGFloat)arg1 clockwise:(BOOL)arg2 additionalWidth:(CGFloat)arg3 ;
-(id)_normalizeGradientLocations:(id)arg0 ;
-(id)initWithCurveWidth:(CGFloat)arg0 padding:(CGFloat)arg1 forDevice:(id)arg2 withFilterStyle:(NSInteger)arg3 ;
-(struct CGPath *)_generatePath;
-(struct CGPoint )_pointAtProgress:(float)arg0 ;
-(void)_layoutHeadTailView:(id)arg0 forProgress:(CGFloat)arg1 ;
-(void)_setupGradientLayer:(id)arg0 ;
-(void)_updateGradient;
-(void)layoutSubviews;
-(void)setProgress:(CGFloat)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif