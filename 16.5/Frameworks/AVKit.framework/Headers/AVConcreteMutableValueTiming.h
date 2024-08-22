// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCONCRETEMUTABLEVALUETIMING_H
#define AVCONCRETEMUTABLEVALUETIMING_H



#import "AVMutableValueTiming.h"

@interface AVConcreteMutableValueTiming : AVMutableValueTiming {
    CGFloat _value;
    CGFloat _timeStamp;
    CGFloat _rate;
}




-(CGFloat)anchorTimeStamp;
-(CGFloat)anchorValue;
-(CGFloat)rate;
-(id)initWithAnchorValue:(CGFloat)arg0 anchorTimeStamp:(CGFloat)arg1 rate:(CGFloat)arg2 ;
-(struct ? )_timing;
-(void)setAnchorTimeStamp:(CGFloat)arg0 ;
-(void)setAnchorValue:(CGFloat)arg0 ;
-(void)setRate:(CGFloat)arg0 ;


@end


#endif