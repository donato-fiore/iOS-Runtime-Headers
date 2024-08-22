// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSINTERVALTIMELINEFILTER_H
#define TSINTERVALTIMELINEFILTER_H

@protocol OS_dispatch_queue;


#import "TSTimeLineFilter.h"
#import "TSIntervalFilter.h"

@interface TSIntervalTimeLineFilter : TSTimeLineFilter {
    NSUInteger _AAnchor;
    NSUInteger _BAnchor;
    NSInteger _AEntries;
    NSInteger _BEntries;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSInteger _validIndex;
    TSIntervalFilter *_aIntervalFilter;
    TSIntervalFilter *_bIntervalFilter;
}




-(BOOL)canConvertTime;
-(NSUInteger)domainAIntervalFromDomainBInterval:(NSUInteger)arg0 ;
-(NSUInteger)domainATimeFromDomainBTime:(NSUInteger)arg0 ;
-(NSUInteger)domainBIntervalFromDomainAInterval:(NSUInteger)arg0 ;
-(NSUInteger)domainBTimeFromDomainATime:(NSUInteger)arg0 ;
-(id)initWithExpectedDomainAInterval:(NSUInteger)arg0 expectedDomainBInterval:(NSUInteger)arg1 filterSize:(unsigned char)arg2 ;
-(struct ? )rateRatio;
-(void)addTimestamps:(struct ? )arg0 ;
-(void)changeToNewFilterSize:(unsigned char)arg0 ;
-(void)getAnchors:(struct ? *)arg0 andRateRatio:(struct ? *)arg1 ;
-(void)resetFilter;
-(void)resetFilterWithNewExpectedDomainAInterval:(NSUInteger)arg0 expectedDomainBInterval:(NSUInteger)arg1 ;
-(void)resetFilterWithNewExpectedDomainAInterval:(NSUInteger)arg0 expectedDomainBInterval:(NSUInteger)arg1 multiIntervalCount:(unsigned int)arg2 ;


@end


#endif