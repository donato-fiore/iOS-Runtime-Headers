// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIUSAGELQMKERNELSAMPLEAWDLCOEX_H
#define WIFIUSAGELQMKERNELSAMPLEAWDLCOEX_H

@class NSDate;


#import "WiFiUsageLQMSample.h"

@interface WiFiUsageLQMKernelSampleAWDLCoex : WiFiUsageLQMSample

@property (nonatomic) NSUInteger awdlActiveDurationPerc; // ivar: _awdlActiveDurationPerc
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(id)sampleWithStruct:(struct awdlInfo *)arg0 andTimestamp:(id)arg1 ;
-(id)initWithStruct:(struct awdlInfo *)arg0 andTimestamp:(id)arg1 ;


@end


#endif