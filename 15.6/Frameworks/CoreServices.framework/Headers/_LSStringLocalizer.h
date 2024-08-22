// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LSSTRINGLOCALIZER_H
#define _LSSTRINGLOCALIZER_H

@class NSString, NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "_LSLazyPropertyList.h"

@interface _LSStringLocalizer : NSObject {
    *__CFBundle _bundle;
    NSString *_stringsFile;
    NSMutableDictionary *_stringsFileContent;
    _LSLazyPropertyList *_unlocalizedInfoPlistStrings;
    NSArray *_bundleLocalizations;
    NSArray *_bundleLocalizationsWithDefaultPrefLocs;
}




+(id)IOQueue;
+(id)coreTypesLocalizer;
+(id)frameworkBundleLocalizer;
+(id)localizedStringForCanonicalString:(id)arg0 preferredLocalizations:(id)arg1 context:(struct LSContext *)arg2 ;
+(id)localizedStringsForCanonicalString:(id)arg0 context:(struct LSContext *)arg1 ;
+(id)missingLocalizationPlaceholder;
+(id)preferredLocalizationsForXCTests;
+(void)findKeysToLocalizeInInfoDictionary:(id)arg0 forArrayKey:(struct __CFString *)arg1 stringKey:(struct __CFString *)arg2 localizedKeys:(id)arg3 ;
+(void)gatherLocalizedStringsForCFBundle:(struct __CFBundle *)arg0 infoDictionary:(id)arg1 nameOnly:(BOOL)arg2 ;
+(void)gatherLocalizedStringsForCFBundle:(struct __CFBundle *)arg0 infoDictionary:(id)arg1 nameOnly:(BOOL)arg2 delegatesMightBeMainBundle:(BOOL)arg3 ;
+(void)setPreferredLocalizationsForXCTests:(id)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithBundleURL:(id)arg0 stringsFile:(id)arg1 ;
-(id)initWithBundleURL:(id)arg0 stringsFile:(id)arg1 checkMainBundle:(BOOL)arg2 ;
-(id)initWithCFBundle:(struct __CFBundle *)arg0 stringsFile:(id)arg1 ;
-(id)initWithDatabase:(id)arg0 bundleUnit:(unsigned int)arg1 delegate:(unsigned int)arg2 ;
-(id)initWithDatabase:(id)arg0 pluginUnit:(unsigned int)arg1 ;
-(id)localizedStringDictionaryWithString:(id)arg0 defaultValue:(id)arg1 ;
-(id)localizedStringWithString:(id)arg0 inBundle:(struct __CFBundle *)arg1 localeCode:(id)arg2 ;
-(id)localizedStringWithString:(id)arg0 inBundle:(struct __CFBundle *)arg1 preferredLocalizations:(id)arg2 ;
-(id)localizedStringWithString:(id)arg0 preferredLocalizations:(id)arg1 ;
-(id)localizedStringsWithStrings:(id)arg0 preferredLocalizations:(id)arg1 ;
-(id)stringsFileContentInBundle:(struct __CFBundle *)arg0 withLocaleCode:(id)arg1 ;
-(void)dealloc;
-(void)enumerateLocalizedStringsForKeys:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateLocalizedStringsUsingBlock:(id)arg0 ;


@end


#endif