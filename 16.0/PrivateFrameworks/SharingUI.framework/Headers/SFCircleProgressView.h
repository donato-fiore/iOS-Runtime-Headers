// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCIRCLEPROGRESSVIEW_H
#define SFCIRCLEPROGRESSVIEW_H

@class UIView, UIColor;



@interface SFCircleProgressView : UIView

@property (nonatomic) CGFloat progress;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (retain, nonatomic) UIColor *progressColor;
@property (nonatomic) CGFloat progressLineWidth;
@property (nonatomic) NSInteger progressStartPoint;
@property (nonatomic) BOOL showProgressTray;
@property (nonatomic) BOOL usesRoundedLineCap;


+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)animateProgressCompletedWithCompletion:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif