// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLLIBRARYSCOPECONDITIONDATERANGE_H
#define PLLIBRARYSCOPECONDITIONDATERANGE_H

@class NSDate;


#import "PLLibraryScopeCondition.h"

@interface PLLibraryScopeConditionDateRange : PLLibraryScopeCondition

@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsQueryKey:(int)arg0 ;
+(id)conditionWithSingleQueries:(id)arg0 criteria:(unsigned char)arg1 ;
-(id)conditionQuery;
-(id)description;
-(unsigned char)type;


@end


#endif