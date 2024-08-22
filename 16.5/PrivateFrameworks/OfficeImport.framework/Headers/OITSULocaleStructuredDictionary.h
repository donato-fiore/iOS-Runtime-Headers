// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OITSULOCALESTRUCTUREDDICTIONARY_H
#define OITSULOCALESTRUCTUREDDICTIONARY_H

@class NSDictionary, NSMutableDictionary, NSLocale;

#import <Foundation/Foundation.h>


@interface OITSULocaleStructuredDictionary : NSObject {
    NSDictionary *_dictionary;
    NSMutableDictionary *_cldrLanguageScriptRegionForKey;
    NSMutableDictionary *_cldrLanguageScriptForKey;
    NSMutableDictionary *_workingDictionary;
    NSLocale *_workingLocale;
    BOOL _workingLocaleIsAutoUpdating;
    NSUInteger _autoUpdatingCount;
}




+(id)dateFormatterSymbolsFallbackDictionary;
+(id)dictionaryWithContentsOfFileForLocale:(id)arg0 inDirectory:(id)arg1 inBundle:(id)arg2 ;
+(id)numberFormatterSymbolsFallbackDictionary;
-(BOOL)p_extractLanguage:(*id)arg0 script:(*id)arg1 region:(*id)arg2 fromString:(id)arg3 ;
-(id)initWithDictionary:(id)arg0 locale:(id)arg1 ;
-(id)objectForKey:(id)arg0 locale:(id)arg1 ;
-(id)p_makeLocaleIdentifierWithLanguage:(id)arg0 script:(id)arg1 region:(id)arg2 ;
-(void)p_remakeWorkingDictionaryWithLocale:(id)arg0 ;


@end


#endif