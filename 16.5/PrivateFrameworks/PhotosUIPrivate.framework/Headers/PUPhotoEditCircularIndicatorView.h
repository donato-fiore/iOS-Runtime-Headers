// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOEDITCIRCULARINDICATORVIEW_H
#define PUPHOTOEDITCIRCULARINDICATORVIEW_H

@class UIView, CAShapeLayer, UIColor;



@interface PUPhotoEditCircularIndicatorView : UIView

@property (retain, nonatomic) CAShapeLayer *backgroundLayer; // ivar: _backgroundLayer
@property (nonatomic) CGFloat currentValue; // ivar: _currentValue
@property (nonatomic) CGFloat maxValue; // ivar: _maxValue
@property (nonatomic) CGFloat minValue; // ivar: _minValue
@property (retain, nonatomic) CAShapeLayer *progressLayer; // ivar: _progressLayer
@property (retain, nonatomic) UIColor *ringColor;
@property (nonatomic) CGFloat thickness; // ivar: _thickness


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_layoutSubLayers;
-(void)_setupLayers;
-(void)_updateProgressLayer;
-(void)layoutSubviews;
-(void)resetToDefaults;


@end


#endif