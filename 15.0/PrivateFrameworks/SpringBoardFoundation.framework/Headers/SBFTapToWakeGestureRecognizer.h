// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFTAPTOWAKEGESTURERECOGNIZER_H
#define SBFTAPTOWAKEGESTURERECOGNIZER_H

@class UIGestureRecognizer;



@interface SBFTapToWakeGestureRecognizer : UIGestureRecognizer



-(BOOL)_isTapEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_succesfullyRecognizeFromEvent:(struct __IOHIDEvent *)arg0 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif