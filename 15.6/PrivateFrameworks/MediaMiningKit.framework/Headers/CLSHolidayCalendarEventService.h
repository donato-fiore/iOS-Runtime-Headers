// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSHOLIDAYCALENDAREVENTSERVICE_H
#define CLSHOLIDAYCALENDAREVENTSERVICE_H

@class NSString, NSArray, NSLocale;
@protocol CLSHolidayCalendarEventDateRuleDelegate;

#import <Foundation/Foundation.h>


@interface CLSHolidayCalendarEventService : NSObject <CLSHolidayCalendarEventDateRuleDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *eventRules; // ivar: _eventRules
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly) Class superclass;


-(NSUInteger)peopleTraitForHolidayName:(id)arg0 ;
-(id)_ruleWithUUID:(id)arg0 countryCode:(*id)arg1 ;
-(id)dateForRuleWithUUID:(id)arg0 byEvaluatingForYear:(NSInteger)arg1 ;
-(id)eventRuleForHolidayName:(id)arg0 ;
-(id)eventRuleForHolidayName:(id)arg0 localDate:(id)arg1 ;
-(id)eventRulesForLocalDate:(id)arg0 ;
-(id)initWithEventRules:(id)arg0 locale:(id)arg1 ;
-(id)initWithLocale:(id)arg0 ;
-(id)initWithLocale:(id)arg0 calendarSourcesURL:(id)arg1 ;
-(id)sceneNamesForHolidayName:(id)arg0 ;
-(id)supportedLanguageCodes;
-(id)triggerHolidaysForCountryCode:(id)arg0 ;
-(void)_enumerateEventRulesWithNames:(id)arg0 betweenLocalDate:(id)arg1 andLocalDate:(id)arg2 supportedCountryCode:(id)arg3 usingBlock:(id)arg4 ;
-(void)enumerateEventRulesBetweenLocalDate:(id)arg0 andLocalDate:(id)arg1 supportedCountryCode:(id)arg2 usingBlock:(id)arg3 ;
-(void)enumerateEventRulesForAllCountriesBetweenLocalDate:(id)arg0 andLocalDate:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateEventRulesForAllCountriesWithNames:(id)arg0 betweenLocalDate:(id)arg1 andLocalDate:(id)arg2 usingBlock:(id)arg3 ;
-(void)enumerateEventRulesWithNames:(id)arg0 betweenLocalDate:(id)arg1 andLocalDate:(id)arg2 supportedCountryCode:(id)arg3 usingBlock:(id)arg4 ;
-(void)enumerateEventRulesWithNames:(id)arg0 betweenLocalDate:(id)arg1 andLocalDate:(id)arg2 usingBlock:(id)arg3 ;


@end


#endif