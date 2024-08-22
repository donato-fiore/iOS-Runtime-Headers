// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSLEEPDAYSUMMARYQUERYCONFIGURATION_H
#define HKSLEEPDAYSUMMARYQUERYCONFIGURATION_H



#import "HKQueryServerConfiguration.h"

@interface HKSleepDaySummaryQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) BOOL ascending; // ivar: _ascending
@property (nonatomic) NSInteger limit; // ivar: _limit
@property (nonatomic) ? morningIndexRange; // ivar: _morningIndexRange
@property (nonatomic) BOOL onlySleepAnalysis; // ivar: _onlySleepAnalysis
@property (nonatomic) BOOL requireSleepAnalysis; // ivar: _requireSleepAnalysis


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif