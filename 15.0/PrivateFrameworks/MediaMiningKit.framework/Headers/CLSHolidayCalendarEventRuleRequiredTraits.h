// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSHOLIDAYCALENDAREVENTRULEREQUIREDTRAITS_H
#define CLSHOLIDAYCALENDAREVENTRULEREQUIREDTRAITS_H

@class NSDictionary;


#import "CLSHolidayCalendarEventRuleTraits.h"

@interface CLSHolidayCalendarEventRuleRequiredTraits : CLSHolidayCalendarEventRuleTraits

@property (readonly, nonatomic) BOOL allowApproximateDateCalculation; // ivar: _allowApproximateDateCalculation
@property (retain, nonatomic) NSDictionary *defaultScenesWithImportanceString; // ivar: _defaultScenesWithImportanceString
@property (nonatomic) NSUInteger eventCategory; // ivar: _eventCategory
@property (readonly, nonatomic) BOOL isCelebration;
@property (nonatomic) NSUInteger minimumPeopleCount; // ivar: _minimumPeopleCount
@property (nonatomic) BOOL mustContainMePerson; // ivar: _mustContainMePerson
@property (nonatomic) NSUInteger type; // ivar: _type


+(NSUInteger)importanceEnumForImportanceString:(id)arg0 ;
+(id)_locationTraitDebugStringForTrait:(NSUInteger)arg0 ;
+(id)_peopleTraitDebugStringForTrait:(NSUInteger)arg0 ;
-(BOOL)evaluateWithTraits:(id)arg0 evaluateLocationTraits:(BOOL)arg1 ;
-(BOOL)peopleCountRangeIsRequired;
-(NSUInteger)importanceForScene:(id)arg0 ;
-(id)description;
-(id)initWithDescription:(id)arg0 ;


@end


#endif