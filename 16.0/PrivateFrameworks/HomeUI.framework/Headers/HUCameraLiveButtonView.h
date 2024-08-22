// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCAMERALIVEBUTTONVIEW_H
#define HUCAMERALIVEBUTTONVIEW_H

@class UIView, AVBackgroundView, UIButton;



@interface HUCameraLiveButtonView : UIView

@property (retain, nonatomic) AVBackgroundView *avBackground; // ivar: _avBackground
@property (retain, nonatomic) UIButton *liveButton; // ivar: _liveButton


-(void)didMoveToSuperview;
-(void)updateConstraints;
-(void)updateDisplayForStreaming:(BOOL)arg0 ;


@end


#endif