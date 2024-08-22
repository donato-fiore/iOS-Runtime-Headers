// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDRICHCOMPLICATIONSHAPEVIEW_H
#define CDRICHCOMPLICATIONSHAPEVIEW_H

@class UIView, CLKDevice, CALayer, CAShapeLayer, CAGradientLayer, NSArray, NSString;
@protocol CLKMonochromeComplicationView, CLKMonochromeFilterProvider;



@interface CDRichComplicationShapeView : UIView <CLKMonochromeComplicationView>

 {
    CLKDevice *_device;
    CGRect _previousBounds;
    BOOL _willUnfreezeForTransaction;
    UIView *_filterView;
    CALayer *_freezeLayer;
    CAShapeLayer *_shapeLayer;
    CAGradientLayer *_gradientLayer;
    NSArray *_filteredGradientColors;
    NSArray *_gradientLocations;
    CGFloat _monochromeFraction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly, nonatomic) NSInteger filterStyle; // ivar: _filterStyle
@property (retain, nonatomic) NSArray *gradientColors; // ivar: _gradientColors
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (readonly) Class superclass;


-(BOOL)_shouldReverseGradient;
-(CGFloat)_shapeLineWidth;
-(id)_normalizeGradientLocations:(id)arg0 ;
-(id)_shapeStrokeColor;
-(id)device;
-(id)gradientLayer;
-(id)initForDevice:(id)arg0 withFilterStyle:(NSInteger)arg1 ;
-(id)shapeLayer;
-(struct CGPath *)_generatePath;
-(struct CGPoint )_pointAtProgress:(float)arg0 ;
-(struct CGPoint )pointAtProgress:(float)arg0 ;
-(void)_setupGradientLayer:(id)arg0 ;
-(void)_setupShapeLayer:(id)arg0 ;
-(void)_updateGradient;
-(void)_updatePath;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)unfreezeForTransaction;
-(void)updateMonochromeColor;


@end


#endif