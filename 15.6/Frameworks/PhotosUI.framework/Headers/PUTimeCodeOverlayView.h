// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUTIMECODEOVERLAYVIEW_H
#define PUTIMECODEOVERLAYVIEW_H

@class UIView, UILabel, NSArray;



@interface PUTimeCodeOverlayView : UIView {
    UILabel *_timecodeLabelView;
    UIView *_timecodeBackgroundView;
    UIView *_verticalLineView;
    NSArray *_overlayConstraints;
}


@property (nonatomic) CGFloat displayedTimeInterval; // ivar: _displayedTimeInterval
@property (nonatomic) CGFloat frameRate; // ivar: _frameRate


-(void)didMoveToSuperview;
-(void)updateTimeDisplay;


@end


#endif