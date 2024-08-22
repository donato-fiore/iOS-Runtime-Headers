// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTSFORCEGESTURERECOGNIZER_H
#define DTSFORCEGESTURERECOGNIZER_H

@class UILongPressGestureRecognizer;



@interface DTSForceGestureRecognizer : UILongPressGestureRecognizer {
    CGFloat _startTime;
    BOOL _hasSufficientForce;
}




-(void)reset;
-(void)setState:(NSInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif