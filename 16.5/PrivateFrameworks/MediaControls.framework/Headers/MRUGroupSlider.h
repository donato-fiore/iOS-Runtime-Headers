// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUGROUPSLIDER_H
#define MRUGROUPSLIDER_H

@class NSString;
@protocol UIGestureRecognizerDelegate, MRUGroupSliderDelegate;


#import "MRUSlider.h"
#import "MRULongPressGestureRecognizer.h"

@interface MRUGroupSlider : MRUSlider <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUGroupSliderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLongPressEnabled) BOOL longPressEnabled; // ivar: _longPressEnabled
@property (nonatomic) BOOL longPressFeedbackEnabled; // ivar: _longPressFeedbackEnabled
@property (retain, nonatomic) MRULongPressGestureRecognizer *longPressFeedbackGestureRecognizer; // ivar: _longPressFeedbackGestureRecognizer
@property (retain, nonatomic) MRULongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)handleLongPressCancelled;
-(void)sliderLongPress:(id)arg0 ;
-(void)sliderLongPressFeedback:(id)arg0 ;


@end


#endif