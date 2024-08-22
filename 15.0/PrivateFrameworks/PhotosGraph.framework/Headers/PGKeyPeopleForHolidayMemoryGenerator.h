// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGKEYPEOPLEFORHOLIDAYMEMORYGENERATOR_H
#define PGKEYPEOPLEFORHOLIDAYMEMORYGENERATOR_H

@class NSArray;


#import "PGFeaturedMemoryGenerator.h"

@interface PGKeyPeopleForHolidayMemoryGenerator : PGFeaturedMemoryGenerator

@property (retain, nonatomic) NSArray *holidayRules; // ivar: _holidayRules


-(id)_potentialMemoriesForDryTesting;
-(id)generateMemories:(NSUInteger)arg0 ;


@end


#endif