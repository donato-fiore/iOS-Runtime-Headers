// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _KSTEXTREPLACEMENTHELPER_H
#define _KSTEXTREPLACEMENTHELPER_H


#import <Foundation/Foundation.h>


@interface _KSTextReplacementHelper : NSObject



+(NSInteger)validateTextReplacement:(id)arg0 ;
+(id)aggdPrefix;
+(id)appleLanguagesPreference;
+(id)errorStringForCode:(NSInteger)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 description:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 failedAdds:(id)arg1 failedDeletes:(id)arg2 ;
+(id)errorWithCode:(NSInteger)arg0 forEntry:(id)arg1 ;
+(id)fetchConfigurationPlist;
+(id)multipleAddErrors:(id)arg0 removeErrors:(id)arg1 ;
+(id)sampleShortcut;
+(id)textReplaceEntryFromTIDictionaryValue:(id)arg0 ;
+(id)transactionFromTextReplacementEntry:(id)arg0 forDelete:(BOOL)arg1 ;
+(void)extractAggdMetricsForTextReplacement:(id)arg0 ;
+(void)fetchConfigurationPlistIfNeeded;
+(void)logAggdValueForSyncIsPull:(BOOL)arg0 success:(BOOL)arg1 ;
+(void)logPhraseWordCount:(NSInteger)arg0 ;


@end


#endif