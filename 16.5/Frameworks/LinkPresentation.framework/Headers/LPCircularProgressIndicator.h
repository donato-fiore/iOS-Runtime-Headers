// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPCIRCULARPROGRESSINDICATOR_H
#define LPCIRCULARPROGRESSINDICATOR_H

@class UIView, CAShapeLayer;



@interface LPCircularProgressIndicator : UIView

@property (retain, nonatomic) CAShapeLayer *borderLayer; // ivar: _borderLayer
@property (retain, nonatomic) CAShapeLayer *progressLayer; // ivar: _progressLayer


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setProgress:(CGFloat)arg0 ;


@end


#endif