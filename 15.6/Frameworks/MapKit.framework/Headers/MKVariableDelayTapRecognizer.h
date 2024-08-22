// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKVARIABLEDELAYTAPRECOGNIZER_H
#define MKVARIABLEDELAYTAPRECOGNIZER_H

@class UITapGestureRecognizer;
@protocol MKVariableDelayTapRecognizerDelegate;



@interface MKVariableDelayTapRecognizer : UITapGestureRecognizer {
    CGFloat originalMaximumIntervalBetweenSuccessiveTaps;
}


@property (weak, nonatomic) NSObject<MKVariableDelayTapRecognizerDelegate> *tapDelayDelegate; // ivar: tapDelayDelegate


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)reset;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif