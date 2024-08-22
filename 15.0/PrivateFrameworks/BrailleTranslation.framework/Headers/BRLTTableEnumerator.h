// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRLTTABLEENUMERATOR_H
#define BRLTTABLEENUMERATOR_H

@class NSMutableDictionary, NSSet, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface BRLTTableEnumerator : NSObject

@property (retain, nonatomic) NSMutableDictionary *languageAgnosticIdentifiersToTables; // ivar: _languageAgnosticIdentifiersToTables
@property (readonly, nonatomic) NSSet *languageAgnosticTableIdentifiers;
@property (readonly, nonatomic) NSSet *supportedLanguageLocales; // ivar: _supportedLanguageLocales
@property (readonly, nonatomic) NSSet *supportedLocales; // ivar: _supportedLocales
@property (copy, nonatomic) NSString *translatorBundlePath; // ivar: _translatorBundlePath
@property (readonly, nonatomic) NSArray *translatorBundles; // ivar: _translatorBundles


+(id)defaultTableForLocale:(id)arg0 ;
+(id)localizedNameForLanguage:(id)arg0 ;
+(id)localizedNameForLanguageAgnosticTableIdentifier:(id)arg0 ;
+(id)localizedNameForServiceWithIdentifier:(id)arg0 ;
+(id)systemTranslatorBundle;
+(id)tableEnumeratorWithSystemBundlePath;
-(id)initWithTranslatorBundlesPath:(id)arg0 ;
-(id)languageAgnosticTablesForIdentifier:(id)arg0 inBundle:(id)arg1 ;
-(id)languageAgnosticTablesInBundle:(id)arg0 ;
-(id)tablesForLocale:(id)arg0 inBundle:(id)arg1 ;


@end


#endif