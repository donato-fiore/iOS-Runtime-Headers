// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INTLUTILITY_H
#define INTLUTILITY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface IntlUtility : NSObject {
    NSMutableArray *mBidiLanguagesArray;
    NSMutableArray *mBidiTestedLanguagesArray;
}




+(BOOL)forceCapitalizationInLanguageLists;
+(BOOL)isLunarCalendarDefaultOn;
+(BOOL)isLunarCalendarDefaultOnForLanguage:(id)arg0 locale:(id)arg1 ;
+(BOOL)isYearlessDate:(id)arg0 forCalendar:(id)arg1 ;
+(BOOL)upgradeAppleLanguagesFrom:(id)arg0 to:(id)arg1 ;
+(NSInteger)formattingContextFromIUDisplayNameContext:(NSUInteger)arg0 ;
+(NSInteger)yearlessYearForMonth:(NSInteger)arg0 withCalendar:(id)arg1 ;
+(id)_getXPCConnectionForLocalizationSwitcher;
+(id)_preferredLanguagesForBundleID:(id)arg0 ;
+(id)_preferredLanguagesForBundleID:(id)arg0 withAppRecord:(id)arg1 ;
+(id)_preferredLanguagesForBundleID:(id)arg0 withBundleRecord:(id)arg1 ;
+(id)_proposedOverrideLanguageFromLanguage:(id)arg0 forLocalizations:(id)arg1 preferredLanguages:(id)arg2 regionCode:(id)arg3 ;
+(id)alternateContinentOfRegion:(id)arg0 ;
+(id)baseLanguageIdentifierFromIdentifier:(id)arg0 ;
+(id)baseSystemLanguages;
+(id)capitalizeFirstWordOfName:(id)arg0 accordingToLanguage:(id)arg1 ;
+(id)defaultCalendarForLocaleID:(id)arg0 ;
+(id)defaultNumberingSystemForLocaleID:(id)arg0 ;
+(id)displayNameForNumberingSystemWithIdentifier:(id)arg0 localeIdentifier:(id)arg1 ;
+(id)displayNameForNumberingSystemWithIdentifier:(id)arg0 localeIdentifier:(id)arg1 short:(BOOL)arg2 ;
+(id)filterLanguageList:(id)arg0 forRegion:(id)arg1 fromLanguages:(id)arg2 ;
+(id)languageIdentifierFromIdentifier:(id)arg0 withRegion:(id)arg1 ;
+(id)localeForCalendarID:(id)arg0 ;
+(id)localeForCalendarID:(id)arg0 andLocale:(id)arg1 ;
+(id)lunarCalendarsForLocaleID:(id)arg0 ;
+(id)normalizedLanguageIDFromString:(id)arg0 ;
+(id)numberingSystemForLocaleID:(id)arg0 ;
+(id)numberingSystemsForLocaleID:(id)arg0 ;
+(id)numberingSystemsFromArray:(id)arg0 forLocaleID:(id)arg1 ;
+(id)parentLocaleIdentifierForIdentifier:(id)arg0 ;
+(id)perAppLanguageSelectionBundleIdentifiers;
+(id)preferredLanguageForBundleID:(id)arg0 ;
+(id)preferredLanguagesForBundleIDs:(id)arg0 ;
+(id)preferredLanguagesForRegion:(id)arg0 ;
+(id)preferredLanguagesForRegionWithoutFiltering:(id)arg0 ;
+(id)preferredLanguagesFromLanguages:(id)arg0 byAddingFallbacksForRegion:(id)arg1 ;
+(id)preferredLunarCalendarForLocaleID:(id)arg0 ;
+(id)restrictedCountryCodes;
+(id)sharedIntlUtility;
+(id)shortDisplayNameForNumberingSystemWithIdentifier:(id)arg0 localeIdentifier:(id)arg1 ;
+(id)stdLanguageIDs;
+(id)supportedCalendars;
+(int)UDisplayContextForIUDisplayNameContext:(NSUInteger)arg0 ;
+(void)_setPreferredLanguage:(id)arg0 forBundleID:(id)arg1 ;
+(void)enumeratePreferredCalendarsForLocaleID:(id)arg0 usingBlock:(id)arg1 ;
+(void)preferredLanguagesForBundleID:(id)arg0 reply:(id)arg1 ;
+(void)preferredLanguagesForBundleIDs:(id)arg0 reply:(id)arg1 ;
+(void)setPreferredLanguage:(id)arg0 forBundleID:(id)arg1 ;
+(void)setPreferredLanguage:(id)arg0 forBundleID:(id)arg1 andRelaunchWithCompletion:(id)arg2 ;
+(void)setYearlessYear:(id)arg0 forCalendar:(id)arg1 ;
+(void)subscribeToAppLanguageChanges:(id)arg0 ;
+(void)unsubscribeFromAppLanguageChanges;
-(BOOL)canRenderLanguage:(id)arg0 ;
-(id)ICUdisplayNameForLanguage:(id)arg0 capitalization:(struct ULocaleDisplayNames *)arg1 ;
-(id)displayNameForDialect:(id)arg0 context:(NSUInteger)arg1 displayLanguage:(id)arg2 ;
-(id)displayNameForLabelForLunarCalendarID:(id)arg0 displayLanguage:(id)arg1 ;
-(id)displayNameForLanguage:(id)arg0 context:(NSUInteger)arg1 displayLanguage:(id)arg2 ;
-(id)displayNameForLocale:(id)arg0 displayLanguage:(id)arg1 capitalization:(NSUInteger)arg2 short:(BOOL)arg3 ;
-(id)displayNameForNormalizedLanguage:(id)arg0 context:(NSUInteger)arg1 displayLanguage:(id)arg2 ;
-(id)displayNameForRegion:(id)arg0 displayLanguage:(id)arg1 capitalization:(NSUInteger)arg2 ;
-(id)displayNameForRegion:(id)arg0 displayLanguage:(id)arg1 capitalization:(NSUInteger)arg2 short:(BOOL)arg3 ;
-(id)languageList;
-(id)localizedLanguageForLanguage:(id)arg0 ;
-(id)localizedNameForScript:(short)arg0 ;


@end


#endif