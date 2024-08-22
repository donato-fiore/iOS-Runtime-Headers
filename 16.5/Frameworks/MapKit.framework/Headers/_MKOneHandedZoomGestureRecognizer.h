// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKONEHANDEDZOOMGESTURERECOGNIZER_H
#define _MKONEHANDEDZOOMGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSString, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate, MKZoomingGestureControlConfiguration;


#import "_MKZoomingPanGestureRecognizer.h"

@interface _MKOneHandedZoomGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>

 {
    BOOL _didReceive1stTap;
    BOOL _timerOn;
}


@property (copy, nonatomic) NSObject<MKZoomingGestureControlConfiguration> *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGPoint locationOfTapGesture; // ivar: _locationOfTapGesture
@property (readonly, nonatomic) _MKZoomingPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (readonly, nonatomic) CGFloat scale;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (readonly, nonatomic) CGFloat velocity;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_clearTapTimer;
-(void)_panGestureRecognizerStateDidChange:(id)arg0 ;
-(void)_startTapTimer:(CGFloat)arg0 ;
-(void)_tapGestureRecognizerStateDidChange:(id)arg0 ;
-(void)_tooSlow:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reset;
-(void)setAllowedPressTypes:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif