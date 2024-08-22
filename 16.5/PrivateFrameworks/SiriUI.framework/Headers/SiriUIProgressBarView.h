// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUIPROGRESSBARVIEW_H
#define SIRIUIPROGRESSBARVIEW_H

@class UIView;



@interface SiriUIProgressBarView : UIView {
    UIView *_progressBar;
    NSUInteger _progressState;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)beginProgressAnimationWithDuration:(CGFloat)arg0 ;
-(void)layoutSubviews;


@end


#endif