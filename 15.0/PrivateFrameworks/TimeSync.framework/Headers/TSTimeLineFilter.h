// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTIMELINEFILTER_H
#define TSTIMELINEFILTER_H


#import <Foundation/Foundation.h>


@interface TSTimeLineFilter : NSObject

@property (readonly, nonatomic) BOOL canConvertTime;
@property (readonly, nonatomic) ? rateRatio;


-(NSUInteger)domainAIntervalFromDomainBInterval:(NSUInteger)arg0 ;
-(NSUInteger)domainATimeFromDomainBTime:(NSUInteger)arg0 ;
-(NSUInteger)domainBIntervalFromDomainAInterval:(NSUInteger)arg0 ;
-(NSUInteger)domainBTimeFromDomainATime:(NSUInteger)arg0 ;
-(void)addTimestamps:(struct ? )arg0 ;
-(void)getAnchors:(struct ? *)arg0 andRateRatio:(struct ? *)arg1 ;
-(void)resetFilter;


@end


#endif