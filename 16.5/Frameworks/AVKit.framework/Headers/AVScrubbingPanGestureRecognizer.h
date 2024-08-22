// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSCRUBBINGPANGESTURERECOGNIZER_H
#define AVSCRUBBINGPANGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSMutableArray;


#import "AVPanGestureIncrement.h"

@interface AVScrubbingPanGestureRecognizer : UIGestureRecognizer {
    NSMutableArray *_candidateGestureIncrements;
    AVPanGestureIncrement *_lastPanGestureIncrement;
}


@property (readonly, nonatomic) CGPoint translation;
@property (readonly, nonatomic) CGPoint velocity;


-(void)_debugLogGestureIncrements:(id)arg0 withPrefix:(id)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif