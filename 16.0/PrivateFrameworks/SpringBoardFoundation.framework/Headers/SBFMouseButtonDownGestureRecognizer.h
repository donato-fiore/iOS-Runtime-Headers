// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFMOUSEBUTTONDOWNGESTURERECOGNIZER_H
#define SBFMOUSEBUTTONDOWNGESTURERECOGNIZER_H

@class UIGestureRecognizer;



@interface SBFMouseButtonDownGestureRecognizer : UIGestureRecognizer



-(BOOL)_isMouseButtonClickEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_succesfullyRecognizeFromEvent:(struct __IOHIDEvent *)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif