// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSHOLIDAYCALENDAREVENTRULE_H
#define CLSHOLIDAYCALENDAREVENTRULE_H

@class NSDictionary, NSArray, NSString;
@protocol CLSHolidayCalendarEventDateRuleDelegate;

#import <Foundation/Foundation.h>

#import "CLSHolidayCalendarEventRuleRequiredTraits.h"

@interface CLSHolidayCalendarEventRule : NSObject

@property (readonly, nonatomic) BOOL backfillForAllCountryCodes; // ivar: _backfillForAllCountryCodes
@property (readonly, nonatomic) BOOL backfillForCommonCelebratedCountryCodes; // ivar: _backfillForCommonCelebratedCountryCodes
@property (readonly, nonatomic) BOOL backfillForCommonCelebratedLanguages; // ivar: _backfillForCommonCelebratedLanguages
@property (readonly, nonatomic) NSUInteger category; // ivar: _category
@property (readonly, nonatomic) NSDictionary *commonCelebratedCountryCodes; // ivar: _commonCelebratedCountryCodes
@property (readonly, nonatomic) NSDictionary *commonCelebratedLanguages; // ivar: _commonCelebratedLanguages
@property (weak, nonatomic) NSObject<CLSHolidayCalendarEventDateRuleDelegate> *dateRuleDelegate; // ivar: _dateRuleDelegate
@property (readonly, nonatomic) NSArray *defaultDateRules; // ivar: _defaultDateRules
@property (readonly, nonatomic) CGFloat defaultLocationScore; // ivar: _defaultLocationScore
@property (readonly, nonatomic) BOOL isCelebration;
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CLSHolidayCalendarEventRuleRequiredTraits *requiredTraits; // ivar: _requiredTraits
@property (readonly, nonatomic) BOOL skipSceneCriteriaIfInteresting; // ivar: _skipSceneCriteriaIfInteresting
@property (readonly, nonatomic) BOOL triggerMemoryForAllLocales; // ivar: _triggerMemoryForAllLocales
@property (readonly, nonatomic) BOOL triggerMemoryForCommonCelebratedCountryCodes; // ivar: _triggerMemoryForCommonCelebratedCountryCodes


+(id)localizedNameForName:(id)arg0 ;
-(BOOL)_isMatchingOnlyLocalDate:(id)arg0 countryCode:(id)arg1 ;
-(BOOL)backfillForCountryCode:(id)arg0 ;
-(BOOL)backfillForLanguageCodes:(id)arg0 ;
-(BOOL)evaluateOnlyTraits:(id)arg0 evaluateLocationTraits:(BOOL)arg1 ;
-(BOOL)evaluateWithLocalDate:(id)arg0 traits:(id)arg1 countryCode:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)triggerMemoryForCountryCode:(id)arg0 ;
-(CGFloat)languageScoreForLanguageCode:(id)arg0 ;
-(CGFloat)locationScoreForCountryCode:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)peopleTrait;
-(id)_dateRuleForYear:(NSInteger)arg0 countryCode:(id)arg1 ;
-(id)_dateRuleForYear:(NSInteger)arg0 supportedLocale:(id)arg1 ;
-(id)_localeOverrideForDescription:(id)arg0 uppercaseLocaleCode:(BOOL)arg1 ;
-(id)_scoreForEventOverride:(id)arg0 sceneNames:(id)arg1 ;
-(id)allSceneNames;
-(id)description;
-(id)explicitlySupportedCountryCodes;
-(id)initWithEventDescription:(id)arg0 ;
-(id)localDateByEvaluatingRuleForYear:(NSInteger)arg0 countryCode:(id)arg1 ;
-(id)localDateByEvaluatingRuleForYear:(NSInteger)arg0 languageCode:(id)arg1 ;
-(id)scoreForCountryCode:(id)arg0 sceneNames:(id)arg1 ;
-(id)scoreForLanguageCode:(id)arg0 sceneNames:(id)arg1 ;


@end


#endif