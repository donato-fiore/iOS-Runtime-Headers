// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIUSAGELQMKERNELSAMPLECCA_H
#define WIFIUSAGELQMKERNELSAMPLECCA_H

@class NSDate;


#import "WiFiUsageLQMSample.h"

@interface WiFiUsageLQMKernelSampleCCA : WiFiUsageLQMSample

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSUInteger interference; // ivar: _interference
@property (readonly, nonatomic) NSUInteger interferenceSleepPerc; // ivar: _interferenceSleepPerc
@property (readonly, nonatomic) NSUInteger interferenceWakePerc; // ivar: _interferenceWakePerc
@property (readonly, nonatomic) NSUInteger otherCca; // ivar: _otherCca
@property (readonly, nonatomic) NSUInteger otherCcaSleepPerc; // ivar: _otherCcaSleepPerc
@property (readonly, nonatomic) NSUInteger otherCcaWakePerc; // ivar: _otherCcaWakePerc
@property (readonly, nonatomic) NSUInteger selfCca; // ivar: _selfCca
@property (readonly, nonatomic) NSUInteger selfCcaSleepPerc; // ivar: _selfCcaSleepPerc
@property (readonly, nonatomic) NSUInteger selfCcaWakePerc; // ivar: _selfCcaWakePerc
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(id)sampleWithStruct:(struct ccaStats *)arg0 andTimestamp:(id)arg1 ;
-(id)initWithStruct:(struct ccaStats *)arg0 andTimestamp:(id)arg1 ;


@end


#endif