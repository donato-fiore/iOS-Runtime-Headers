// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACTIONNATURALLANGUAGEUTILITIES_H
#define HFACTIONNATURALLANGUAGEUTILITIES_H


#import <Foundation/Foundation.h>


@interface HFActionNaturalLanguageUtilities : NSObject



+(BOOL)_shouldIgnoreActions:(id)arg0 withCharacteristicType:(id)arg1 execution:(id)arg2 ;
+(BOOL)actionTypesMissingDescriptionShouldCauseFailure:(id)arg0 ;
+(id)_actionTypeDescriptionPriority;
+(id)_actionTypeForAction:(id)arg0 ;
+(id)_actionValue:(id)arg0 forCharacteristicType:(id)arg1 ;
+(id)_characteristicTypesFailingMismatch;
+(id)_relativePercentValueInActions:(id)arg0 characteristics:(id)arg1 characteristicType:(id)arg2 ;
+(id)_valueForAction:(id)arg0 withActionType:(id)arg1 ;
+(id)actionValuesByTypeForActions:(id)arg0 execution:(id)arg1 ;
+(id)genericStringKeyWithNumberOfAccessories:(NSUInteger)arg0 named:(BOOL)arg1 inContext:(BOOL)arg2 options:(id)arg3 ;
+(id)hf_naturalLanguageDescriptionForActions:(id)arg0 withOptions:(id)arg1 ;
+(id)lightbulbStringKeyWithExecution:(id)arg0 ;
+(id)selectHighestPriorityStringsFromStrings:(id)arg0 ;
+(id)shortcutsStringKeyWithExecution:(id)arg0 ;
+(id)stringKeyForCharacteristicType:(id)arg0 targetValue:(id)arg1 named:(BOOL)arg2 options:(id)arg3 ;
+(id)stringKeyForMediaPlaybackAction:(id)arg0 named:(BOOL)arg1 options:(id)arg2 ;
+(id)stringKeyForSpecialCasesWithValuesByType:(id)arg0 execution:(id)arg1 characteristics:(id)arg2 ;
+(id)stringKeyWithType:(id)arg0 values:(id)arg1 execution:(id)arg2 ;
+(id)stringKeysForActions:(id)arg0 withServiceType:(id)arg1 execution:(id)arg2 ;
+(id)temperatureStringKeyForActions:(id)arg0 execution:(id)arg1 characteristics:(id)arg2 ;
+(void)characteristicCaseClassification:(*id)arg0 valueKey:(*id)arg1 argumentKeys:(*id)arg2 fromCharacteristicType:(id)arg3 targetValue:(id)arg4 ;


@end


#endif