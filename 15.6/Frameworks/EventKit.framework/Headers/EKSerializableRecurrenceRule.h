// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKSERIALIZABLERECURRENCERULE_H
#define EKSERIALIZABLERECURRENCERULE_H

@class NSArray;


#import "EKSerializableObject.h"
#import "EKRecurrenceEnd.h"

@interface EKSerializableRecurrenceRule : EKSerializableObject

@property (readonly, nonatomic) NSArray *daysOfTheMonth; // ivar: _daysOfTheMonth
@property (readonly, nonatomic) NSArray *daysOfTheWeek; // ivar: _daysOfTheWeek
@property (readonly, nonatomic) NSArray *daysOfTheYear; // ivar: _daysOfTheYear
@property (readonly, nonatomic) NSInteger firstDayOfTheWeek; // ivar: _firstDayOfTheWeek
@property (readonly, nonatomic) NSInteger frequency; // ivar: _frequency
@property (readonly, nonatomic) NSInteger interval; // ivar: _interval
@property (readonly, nonatomic) NSArray *monthsOfTheYear; // ivar: _monthsOfTheYear
@property (copy, nonatomic) EKRecurrenceEnd *recurrenceEnd; // ivar: _recurrenceEnd
@property (readonly, nonatomic) NSArray *setPositions; // ivar: _setPositions
@property (readonly, nonatomic) NSArray *weeksOfTheYear; // ivar: _weeksOfTheYear


+(id)classesForKey;
-(id)createRecurrenceRule:(*id)arg0 ;
-(id)initWithRecurrenceRule:(id)arg0 ;


@end


#endif