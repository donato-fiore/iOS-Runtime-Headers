// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRSRANKINGUTILITIES_H
#define PRSRANKINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface PRSRankingUtilities : NSObject



+(BOOL)aToZInString:(id)arg0 ;
+(BOOL)caseAndDiacriticInsensitiveLocalizedString:(id)arg0 containsString:(id)arg1 locale:(id)arg2 ;
+(BOOL)caseAndDiacriticInsensitiveLocalizedString:(id)arg0 hasPrefix:(id)arg1 locale:(id)arg2 ;
+(BOOL)caseAndDiacriticInsensitiveLocalizedString:(id)arg0 isEqualToString:(id)arg1 ;
+(BOOL)digitInString:(id)arg0 ;
+(BOOL)multiWordString:(id)arg0 hasPrefix:(id)arg1 ;
+(BOOL)somePotentialPhoneNumbersInString:(id)arg0 ;
+(BOOL)userQueryHasOnlySingleCharacterTerms:(id)arg0 ;
+(BOOL)userQueryTermsHasOnlySingleCharacterTerms:(id)arg0 ;
+(float)floatValue:(float)arg0 withSigFigs:(NSInteger)arg1 ;
+(id)bundleIDForCategory:(id)arg0 ;
+(id)categoryForBundleID:(id)arg0 ;
+(id)onlyPotentialPhoneNumbersInString:(id)arg0 ;
+(void)computeDateCountsForDates:(id)arg0 countLastYear:(*NSUInteger)arg1 countLastMonth:(*NSUInteger)arg2 countLastWeek:(*NSUInteger)arg3 countLastDay:(*NSUInteger)arg4 currentTime:(CGFloat)arg5 ;


@end


#endif