// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKROTATIONGESTURERECOGNIZER_H
#define AKROTATIONGESTURERECOGNIZER_H

@class UIRotationGestureRecognizer;


#import "AKController.h"

@interface AKRotationGestureRecognizer : UIRotationGestureRecognizer {
    NSUInteger tries;
}


@property (weak, nonatomic) AKController *annotationController; // ivar: _annotationController


-(void)setState:(NSInteger)arg0 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif