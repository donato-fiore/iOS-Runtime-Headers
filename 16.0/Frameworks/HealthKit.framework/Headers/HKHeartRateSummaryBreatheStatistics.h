// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHEARTRATESUMMARYBREATHESTATISTICS_H
#define HKHEARTRATESUMMARYBREATHESTATISTICS_H



#import "HKHeartRateSummaryStatistics.h"
#import "HKHeartRateSummaryReading.h"

@interface HKHeartRateSummaryBreatheStatistics : HKHeartRateSummaryStatistics

@property (retain, nonatomic, setter=_setFinalReading:) HKHeartRateSummaryReading *finalReading; // ivar: _finalReading


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initFromStatistics:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif