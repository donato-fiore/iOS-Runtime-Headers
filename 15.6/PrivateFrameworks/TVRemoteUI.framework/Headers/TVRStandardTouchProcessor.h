// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRSTANDARDTOUCHPROCESSOR_H
#define TVRSTANDARDTOUCHPROCESSOR_H

@class UITapGestureRecognizer, NSTimer;


#import "TVRTouchProcessor.h"

@interface TVRStandardTouchProcessor : TVRTouchProcessor {
    NSInteger _clickVirtualizerState;
    CGPoint _touchBeganLocation;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSTimer *_clickVirtualizerTimer;
}




-(void)_tap:(id)arg0 ;
-(void)_touchpadClickVirtualizerTimerFired:(id)arg0 ;
-(void)setTouchpadView:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif