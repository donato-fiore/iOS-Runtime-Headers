// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIUSAGELQMKERNELSAMPLERC1COEX_H
#define WIFIUSAGELQMKERNELSAMPLERC1COEX_H

@class NSDate;


#import "WiFiUsageLQMSample.h"

@interface WiFiUsageLQMKernelSampleRC1Coex : WiFiUsageLQMSample

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSUInteger rc1DurationPerc; // ivar: _rc1DurationPerc
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(id)sampleWithStruct:(struct rc1Coex *)arg0 andTimestamp:(id)arg1 ;
-(id)initWithStruct:(struct rc1Coex *)arg0 andTimestamp:(id)arg1 ;


@end


#endif