// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGOVERTHEYEARSMEMORYCONFIGURATION_H
#define PGOVERTHEYEARSMEMORYCONFIGURATION_H



#import "PGOverTimeMemoryConfiguration.h"

@interface PGOverTheYearsMemoryConfiguration : PGOverTimeMemoryConfiguration

@property (nonatomic) BOOL allowTwoConsecutiveYears; // ivar: _allowTwoConsecutiveYears
@property (nonatomic) NSUInteger minimumNumberOfMomentsForTwoConsecutiveYears; // ivar: _minimumNumberOfMomentsForTwoConsecutiveYears
@property (nonatomic) NSUInteger minimumNumberOfYears; // ivar: _minimumNumberOfYears


+(id)defaultOverTheYearsMemoryConfiguration;
+(id)strictDefaultOverTheYearsMemoryConfiguration;


@end


#endif