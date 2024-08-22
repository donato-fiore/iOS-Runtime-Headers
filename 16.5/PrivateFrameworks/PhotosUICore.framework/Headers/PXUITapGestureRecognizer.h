// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXUITAPGESTURERECOGNIZER_H
#define PXUITAPGESTURERECOGNIZER_H

@class UITapGestureRecognizer, NSNumber;



@interface PXUITapGestureRecognizer : UITapGestureRecognizer {
    NSNumber *_initialEventType;
}




-(struct CGPoint )locationInView:(id)arg0 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;


@end


#endif