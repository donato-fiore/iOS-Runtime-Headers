// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCIRCULARPROGRESSVIEW_H
#define HUCIRCULARPROGRESSVIEW_H

@class UIView, CAShapeLayer, UIColor;



@interface HUCircularProgressView : UIView

@property (nonatomic) CGFloat avatarDiameter; // ivar: _avatarDiameter
@property (retain, nonatomic) CAShapeLayer *baseLayer; // ivar: _baseLayer
@property (retain, nonatomic) UIColor *baseLayerStrokeLineColor; // ivar: _baseLayerStrokeLineColor
@property (nonatomic) CGFloat baseLayerStrokeLineWidth; // ivar: _baseLayerStrokeLineWidth
@property (nonatomic) CGFloat endAngle; // ivar: _endAngle
@property (nonatomic) CGFloat fromValue; // ivar: _fromValue
@property (nonatomic) NSUInteger lineCapStyle; // ivar: _lineCapStyle
@property (nonatomic) NSUInteger progressBarFillDirection; // ivar: _progressBarFillDirection
@property (nonatomic) BOOL progressFillCounterClockwise; // ivar: _progressFillCounterClockwise
@property (retain, nonatomic) UIColor *progressLayerStrokeLineColor; // ivar: _progressLayerStrokeLineColor
@property (nonatomic) CGFloat progressLayerStrokeLineWidth; // ivar: _progressLayerStrokeLineWidth
@property (retain, nonatomic) CAShapeLayer *progressShapeLayer; // ivar: _progressShapeLayer
@property (nonatomic) CGFloat radius; // ivar: _radius
@property (nonatomic) BOOL removeProgressBarOnCompletion; // ivar: _removeProgressBarOnCompletion
@property (nonatomic) CGFloat startAngle; // ivar: _startAngle


-(id)initWithRadius:(CGFloat)arg0 ;
-(id)initWithRadius:(CGFloat)arg0 startAngle:(CGFloat)arg1 endAngle:(CGFloat)arg2 progress:(CGFloat)arg3 ;
-(void)layoutSubviews;
-(void)updateProgressBy:(CGFloat)arg0 animationDuration:(float)arg1 ;
-(void)updateProgressTo:(CGFloat)arg0 animationDuration:(float)arg1 ;


@end


#endif