// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPUSERDEFAULTS_H
#define TSWPUSERDEFAULTS_H


#import <Foundation/Foundation.h>


@interface TSWPUserDefaults : NSObject



+(BOOL)allowsFontSmoothing;
+(BOOL)automaticDashSubstitution;
+(BOOL)automaticQuoteSubstitution;
+(BOOL)automaticTextReplacement;
+(BOOL)automaticallyDetectLinks;
+(BOOL)automaticallyDetectLists;
+(BOOL)automaticallyDetectPhoneLinks;
+(BOOL)automaticallyFormatFractions;
+(BOOL)p_UserDefaultSet:(id)arg0 force:(BOOL)arg1 ;
+(BOOL)p_cachedBoolForKey:(id)arg0 ;
+(BOOL)shouldShowInvisibles;
+(BOOL)showsQuickFormatBar;
+(BOOL)spellCheckingAllowed;
+(BOOL)spellCheckingEnabled;
+(BOOL)superscriptNumericalSuffixes;
+(BOOL)underlineLinks;
+(NSUInteger)maximumFontSize;
+(NSUInteger)minimumFontSize;
+(id)appReplacementsDictionary;
+(id)invisiblesColor;
+(id)p_caseInsensitiveDictionary:(id)arg0 mergedWithDictionary:(id)arg1 ;
+(id)quotesArrayForLanguage:(id)arg0 ;
+(id)replacementsDictionaryAllowingFractions:(BOOL)arg0 ;
+(void)initialize;
+(void)p_defaultsChanged:(id)arg0 ;
+(void)registerUserDefaults:(BOOL)arg0 ;
+(void)setAutomaticDashSubstitution:(BOOL)arg0 ;
+(void)setAutomaticQuoteSubstitution:(BOOL)arg0 ;
+(void)setAutomaticTextReplacement:(BOOL)arg0 ;
+(void)setAutomaticallyDetectLinks:(BOOL)arg0 ;
+(void)setAutomaticallyDetectLists:(BOOL)arg0 ;
+(void)setAutomaticallyDetectPhoneLinks:(BOOL)arg0 ;
+(void)setAutomaticallyFormatFractions:(BOOL)arg0 ;
+(void)setInvisiblesColor:(id)arg0 ;
+(void)setReplacementsDictionary:(id)arg0 ;
+(void)setShowsQuickFormatBar:(BOOL)arg0 ;
+(void)setSpellCheckingEnabled:(BOOL)arg0 ;
+(void)setSuperscriptNumericalSuffixes:(BOOL)arg0 ;
+(void)setUnderlineLinks:(BOOL)arg0 ;


@end


#endif