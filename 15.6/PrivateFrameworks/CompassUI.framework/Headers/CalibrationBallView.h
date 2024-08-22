// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALIBRATIONBALLVIEW_H
#define CALIBRATIONBALLVIEW_H

@class UIView;



@interface CalibrationBallView : UIView {
    UIView *_ballView;
}


@property (nonatomic) CGFloat ballRadius; // ivar: _ballRadius
@property (nonatomic, setter=setAngle:) CGFloat currentAngle; // ivar: _currentAngle
@property (nonatomic) CGFloat trackRadius; // ivar: _trackRadius


-(id)ballView;
-(id)initWithFrame:(struct CGRect )arg0 ballRadius:(CGFloat)arg1 ;
-(void)layoutSubviews;


@end


#endif