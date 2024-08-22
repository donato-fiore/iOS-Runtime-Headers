// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUNOWPLAYINGVOLUMESLIDER_H
#define MRUNOWPLAYINGVOLUMESLIDER_H

@class NSString, UIView, UILongPressGestureRecognizer, UINotificationFeedbackGenerator, UIImpactFeedbackGenerator;
@protocol UIGestureRecognizerDelegate, MRUNowPlayingVolumeSliderDelegate;


#import "MRUVolumeSlider.h"

@interface MRUNowPlayingVolumeSlider : MRUVolumeSlider <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUNowPlayingVolumeSliderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat forcePercent; // ivar: _forcePercent
@property (retain, nonatomic) UIView *growingThumbView; // ivar: _growingThumbView
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialX; // ivar: _initialX
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