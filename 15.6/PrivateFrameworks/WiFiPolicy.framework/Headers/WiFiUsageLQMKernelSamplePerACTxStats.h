// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIUSAGELQMKERNELSAMPLEPERACTXSTATS_H
#define WIFIUSAGELQMKERNELSAMPLEPERACTXSTATS_H

@class NSDate;


#import "WiFiUsageLQMSample.h"

@interface WiFiUsageLQMKernelSamplePerACTxStats : WiFiUsageLQMSample

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(id)sampleWithTimestamp:(id)arg0 ;
-(id)description;
-(id)initWithTimestamp:(id)arg0 ;
-(void)populateTXStats:(int)arg0 With:(unsigned int)arg1 ForQueue:(int)arg2 ;
-(void)transformTXStats;


@end


#endif