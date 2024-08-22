// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTIMERCANCELBUTTONVIEW_H
#define HUTIMERCANCELBUTTONVIEW_H

@class UIView, UIButton;
@protocol HUTimerCancelDelegate;



@interface HUTimerCancelButtonView : UIView

@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) UIView *circleBackgroundView; // ivar: _circleBackgroundView
@property (retain, nonatomic) NSObject<HUTimerCancelDelegate> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_cancelTimer:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif