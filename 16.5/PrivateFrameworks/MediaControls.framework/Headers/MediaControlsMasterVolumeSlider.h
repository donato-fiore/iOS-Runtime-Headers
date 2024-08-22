// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEDIACONTROLSMASTERVOLUMESLIDER_H
#define MEDIACONTROLSMASTERVOLUMESLIDER_H

@class UIView, NSString, UILongPressGestureRecognizer, UINotificationFeedbackGenerator, UIImpactFeedbackGenerator;
@protocol UIGestureRecognizerDelegate, MediaControlsMasterVolumeSliderDelegate;


#import "MediaControlsVolumeSlider.h"

@interface MediaControlsMasterVolumeSlider : MediaControlsVolumeSlider <UIGestureRecognizerDelegate>

 {
    UIView *_growingThumbView;
    CGFloat _forcePercent;
    float _initialX;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MediaControlsMasterVolumeSliderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // ivar: _longPressRecognizer
@property (retain, nonatomic) UINotificationFeedbackGenerator *negativeFeedbackGenerator; // ivar: _negativeFeedbackGenerator
@property (retain, nonatomic) UIImpactFeedbackGenerator *positiveFeedbackGenerator; // ivar: _positiveFeedbackGenerator
@property (readonly) Class superclass;
@property (nonatomic) NSInteger syncState; // ivar: _syncState
@property (nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled; // ivar: _syncingEnabled


-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)createThumbView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)handleLongPress:(id)arg0 ;
-(void)layoutSubviews;
-(void)shrinkThumbAfterDelay:(CGFloat)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif