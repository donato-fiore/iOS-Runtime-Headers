// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCONCRETEVALUETIMING_H
#define AVCONCRETEVALUETIMING_H



#import "AVValueTiming.h"

@interface AVConcreteValueTiming : AVValueTiming {
    CGFloat _value;
    CGFloat _timeStamp;
    CGFloat _rate;
}




-(CGFloat)anchorTimeStamp;
-(CGFloat)anchorValue;
-(CGFloat)rate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAnchorValue:(CGFloat)arg0 anchorTimeStamp:(CGFloat)arg1 rate:(CGFloat)arg2 ;
-(struct ? )_timing;


@end


#endif