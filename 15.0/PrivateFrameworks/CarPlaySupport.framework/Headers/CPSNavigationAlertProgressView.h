// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSNAVIGATIONALERTPROGRESSVIEW_H
#define CPSNAVIGATIONALERTPROGRESSVIEW_H

@class UIView;



@interface CPSNavigationAlertProgressView : UIView

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL hasStartedAnimating; // ivar: _hasStartedAnimating
@property (retain, nonatomic) UIView *progressView; // ivar: _progressView


-(id)initWithFrame:(struct CGRect )arg0 duration:(CGFloat)arg1 ;
-(void)startAnimating;


@end


#endif