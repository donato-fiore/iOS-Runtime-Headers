// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLMEDIASCRUBBERGESTURE_H
#define QLMEDIASCRUBBERGESTURE_H

@class UIPanGestureRecognizer, AVPlayer;
@protocol QLMediaScrubberGestureDelegate;



@interface QLMediaScrubberGesture : UIPanGestureRecognizer {
    CGPoint _previousTouchLocationInView;
    CGPoint _startTouchLocationInView;
    BOOL _shouldRecoverFromPrecisionScrubbingIfNeeded;
    CGFloat _estimatedFrameRate;
    AVPlayer *_player;
}


@property (nonatomic) float maximumValue; // ivar: _maximumValue
@property (nonatomic) float minimumValue; // ivar: _minimumValue
@property (weak, nonatomic) NSObject<QLMediaScrubberGestureDelegate> *scrubberDelegate; // ivar: _scrubberDelegate
@property (nonatomic) float value; // ivar: _value


-(float)clampedEstimatedFrameRate;
-(float)nominalFrameRate;
-(id)initWithPlayer:(id)arg0 ;
-(void)scrubbGestureDidChange:(id)arg0 ;


@end


#endif