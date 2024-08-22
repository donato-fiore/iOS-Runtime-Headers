// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMUTABLEVALUETIMING_H
#define AVMUTABLEVALUETIMING_H



#import "AVValueTiming.h"

@interface AVMutableValueTiming : AVValueTiming

@property (nonatomic) CGFloat anchorTimeStamp;
@property (nonatomic) CGFloat anchorValue;
@property (nonatomic) CGFloat rate;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(Class)classForCoder;
-(void)setValueTiming:(id)arg0 ;


@end


#endif