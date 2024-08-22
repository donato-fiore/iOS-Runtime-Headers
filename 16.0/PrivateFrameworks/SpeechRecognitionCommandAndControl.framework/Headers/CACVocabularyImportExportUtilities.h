// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACVOCABULARYIMPORTEXPORTUTILITIES_H
#define CACVOCABULARYIMPORTEXPORTUTILITIES_H


#import <Foundation/Foundation.h>


@interface CACVocabularyImportExportUtilities : NSObject



+(NSUInteger)_importVocabularyEntries:(id)arg0 didFindOverflow:(*BOOL)arg1 ;
+(NSUInteger)maximumNumberOfAllowedEntries;
+(id)_localeIdentifiersRepresentedByVocabularyEntries:(id)arg0 ;
+(id)_vocabularyEntriesFromSimpleTextListString:(id)arg0 usingLocaleIdentifier:(id)arg1 ;
+(id)defaultExportURL;
+(id)exportToURL:(id)arg0 ;
+(id)importFromURL:(id)arg0 ;


@end


#endif