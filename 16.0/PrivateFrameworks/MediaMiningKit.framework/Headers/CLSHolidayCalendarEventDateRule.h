// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSHOLIDAYCALENDAREVENTDATERULE_H
#define CLSHOLIDAYCALENDAREVENTDATERULE_H

@class NSString, NSDateComponents;
@protocol CLSHolidayCalendarEventDateRuleDelegate;

#import <Foundation/Foundation.h>


@interface CLSHolidayCalendarEventDateRule : NSObject

@property (weak, nonatomic) NSObject<CLSHolidayCalendarEventDateRuleDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger endYear; // ivar: _endYear
@property (nonatomic) NSInteger offsetDays; // ivar: _offsetDays
@property (copy, nonatomic) NSString *relativeToRuleUUID; // ivar: _relativeToRuleUUID
@property (copy, nonatomic) NSDateComponents *simpleRuleComponents; // ivar: _simpleRuleComponents
@property (nonatomic) NSInteger startYear; // ivar: _startYear


-(BOOL)hasEndYear;
-(BOOL)hasExplicitYear;
-(BOOL)hasStartYear;
-(BOOL)matchesExplicitYear:(NSInteger)arg0 ;
-(id)_stringDescriptionForDateRuleComponentValue:(NSInteger)arg0 ;
-(id)description;
-(id)initWithEventDescription:(id)arg0 ;
-(id)localDateByEvaluatingRuleForYear:(NSInteger)arg0 ;


@end


#endif