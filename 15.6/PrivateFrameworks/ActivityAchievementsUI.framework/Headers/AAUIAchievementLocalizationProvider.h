// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUIACHIEVEMENTLOCALIZATIONPROVIDER_H
#define AAUIACHIEVEMENTLOCALIZATIONPROVIDER_H

@class NSDate, NSCalendar, NSString, FIUIUnitManager;

#import <Foundation/Foundation.h>


@interface AAUIAchievementLocalizationProvider : NSObject

@property (nonatomic) NSInteger activityMoveMode; // ivar: _activityMoveMode
@property (retain, nonatomic) NSDate *currentDateOverride; // ivar: _currentDateOverride
@property (retain, nonatomic) NSCalendar *gregorianCalendar; // ivar: _gregorianCalendar
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) FIUIUnitManager *unitManager; // ivar: _unitManager
@property (nonatomic) BOOL wheelchairUser; // ivar: _wheelchairUser


-(id)_achievementValueWithAchievement:(id)arg0 ;
-(id)_allStringCombinationsWithPrefix:(id)arg0 andSuffixes:(id)arg1 ;
-(id)_backDateStringForDate:(id)arg0 achievement:(id)arg1 dateStyle:(NSUInteger)arg2 ;
-(id)_buildKeyWithKeyBaseString:(id)arg0 ;
-(id)_buildKeyWithKeyBaseString:(id)arg0 andSuffixes:(id)arg1 ;
-(id)_calculateSuffixCombinations:(id)arg0 ;
-(id)_formatValue:(id)arg0 usingFormatterNamed:(id)arg1 template:(id)arg2 ;
-(id)_formattedEnergyValue:(id)arg0 canonicalUnit:(id)arg1 ;
-(id)_formattedEnergyValueWithoutUnit:(id)arg0 canonicalUnit:(id)arg1 ;
-(id)_formattedMoveGoal:(id)arg0 template:(id)arg1 ;
-(id)_formattedMoveTimeValue:(id)arg0 ;
-(id)_goalValueWithAchievement:(id)arg0 ;
-(id)_localizedStringWithKey:(id)arg0 withAchievement:(id)arg1 experienceType:(NSUInteger)arg2 ;
-(id)_localizedStringWithKey:(id)arg0 withAchievement:(id)arg1 localizationBundleURL:(id)arg2 experienceType:(NSUInteger)arg3 ;
-(id)_pluralizeLocalizedString:(id)arg0 withAchievement:(id)arg1 ;
-(id)_progressValueWithAchievement:(id)arg0 ;
-(id)_quantityToGoalValueWithAchievement:(id)arg0 ;
-(id)_remainingProgressValueWithUnit:(id)arg0 achievement:(id)arg1 ;
-(id)_replacePlaceholdersInString:(id)arg0 withAchievement:(id)arg1 ;
-(id)_stringByTrimmingPlaceholderMarkersFromString:(id)arg0 ;
-(id)_suffixesForLocalizedStringLookup;
-(id)_userEnergyUnitSuffix;
-(id)_valueFromPlaceholder:(id)arg0 withAchievement:(id)arg1 ;
-(id)achievedAlertBackDescriptionForAchievement:(id)arg0 sizeVariant:(NSInteger)arg1 dateSizeVariant:(NSInteger)arg2 ;
-(id)achievedAlertDescriptionForAchievement:(id)arg0 experienceType:(NSUInteger)arg1 ;
-(id)achievedDescriptionForAchievement:(id)arg0 ;
-(id)achievedShortDescriptionForAchievement:(id)arg0 ;
-(id)currentDate;
-(id)friendAchievedDescriptionForAchievement:(id)arg0 ;
-(id)friendAchievedTitleForAchievement:(id)arg0 ;
-(id)init;
-(id)localizedStringForKey:(id)arg0 withAchievement:(id)arg1 experienceType:(NSUInteger)arg2 ;
-(id)shareDescriptionForAchievement:(id)arg0 ;
-(id)titleForAchievement:(id)arg0 ;
-(id)unachievedAlertBackDescriptionForAchievement:(id)arg0 ;
-(id)unachievedAlertDescriptionForAchievement:(id)arg0 experienceType:(NSUInteger)arg1 ;
-(id)unachievedDescriptionForAchievement:(id)arg0 ;
-(id)unachievedShortDescriptionForAchievement:(id)arg0 ;


@end


#endif