// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMCUSTOMSLIDER_H
#define IMCUSTOMSLIDER_H

@class UISlider, CALayer, UIImage, NSMutableDictionary;
@protocol IMCustomSliderDelegate;



@interface IMCustomSlider : UISlider {
    CGPoint _previousLocation;
    CGPoint _beginLocation;
    CGFloat _factor;
}


@property (retain, nonatomic) CALayer *breadcrumbLayer; // ivar: _breadcrumbLayer
@property (nonatomic) float breadcrumbValue; // ivar: _breadcrumbValue
@property (weak, nonatomic) NSObject<IMCustomSliderDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL fineScrubbing; // ivar: _fineScrubbing
@property (nonatomic) CGFloat fineScrubbingVerticalRange; // ivar: _fineScrubbingVerticalRange
@property (retain, nonatomic) UIImage *highlightedThumb; // ivar: _highlightedThumb
@property (nonatomic) CGPoint offset; // ivar: _offset
@property (retain, nonatomic) NSMutableDictionary *perStateContent; // ivar: _perStateContent
@property (nonatomic) int speed; // ivar: _speed
@property (retain, nonatomic) UIImage *thumb; // ivar: _thumb


-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(float)_scaleForIdealValueForVerticalPosition:(CGFloat)arg0 ;
-(float)_scaleForVerticalPosition:(CGFloat)arg0 ;
-(id)_imageForKey:(id)arg0 forState:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)trackBreadcrumbImageForState:(NSUInteger)arg0 ;
-(struct CGRect )thumbRectForBounds:(struct CGRect )arg0 trackRect:(struct CGRect )arg1 value:(float)arg2 ;
-(void)_setImage:(id)arg0 key:(id)arg1 forState:(NSUInteger)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)dealloc;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTrackBreadcrumbImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)updateFactor:(CGFloat)arg0 ;


@end


#endif