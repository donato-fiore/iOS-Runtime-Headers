// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLONGPRESSGESTURERECOGNIZER_H
#define SBLONGPRESSGESTURERECOGNIZER_H



#import "SBClickGestureRecognizer.h"

@interface SBLongPressGestureRecognizer : SBClickGestureRecognizer {
    BOOL _firstEventAfterClicksWasReceived;
}


@property (nonatomic) CGFloat minimumPressDuration; // ivar: _minimumPressDuration
@property (nonatomic) NSUInteger numberOfClicksRequired;


-(id)gestureStateInfoForUnbalancedPressBeganCount:(NSInteger)arg0 previousCount:(NSInteger)arg1 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)reset;


@end


#endif