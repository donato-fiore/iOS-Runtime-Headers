// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTUISTRINGSHELPER_H
#define VTUISTRINGSHELPER_H

@class NSDictionary, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface VTUIStringsHelper : NSObject {
    NSDictionary *_localizedStringTable;
    NSMutableDictionary *_languageLocalizedStringTables;
    NSString *_siriLanguageCode;
}


@property (readonly, nonatomic) NSString *heySiriTriggerPhrase; // ivar: _heySiriTriggerPhrase


+(id)sharedStringsHelper;
+(void)initialize;
-(id)_bundleStringTableForAllValidLanguages:(id)arg0 inLocalizedStringsFileName:(id)arg1 ;
-(id)_bundleStringTableForLanguages:(id)arg0 inLocalizedStringsFileName:(id)arg1 ;
-(id)_siriLanguageSubstitutedString:(id)arg0 ;
-(id)init;
-(id)localizedAudioStringForKey:(id)arg0 ;
-(id)siriLanguageStringForKey:(id)arg0 ;
-(id)uiLocalizedStringForKey:(id)arg0 ;
-(id)uiLocalizedStringForKey:(id)arg0 languageCode:(id)arg1 ;
-(void)localeDidChange:(id)arg0 ;
-(void)setSiriLanguage:(id)arg0 ;
-(void)setupForCurrentLocaleAndSiriLanguage;


@end


#endif