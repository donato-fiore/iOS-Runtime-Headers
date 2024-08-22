// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UILOCALIZEDINDEXEDCOLLATION_H
#define UILOCALIZEDINDEXEDCOLLATION_H

@class NSLocale, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface UILocalizedIndexedCollation : NSObject {
    NSLocale *_locale;
    NSArray *_sectionTitles;
    NSArray *_sectionStartStrings;
    NSArray *_sectionIndexTitles;
    NSArray *_sectionIndexMapping;
    NSString *_transform;
    NSString *_firstSectionStartString;
    NSString *_lastSectionStartString;
    *__CFStringTokenizer _tokenizer;
    BOOL _primaryLanguageIsJapanese;
    BOOL _preferJapaneseRomajiTranscriptions;
}


@property (readonly, nonatomic) NSArray *sectionIndexTitles;
@property (readonly, nonatomic) NSArray *sectionTitles;


+(id)collationWithDictionary:(id)arg0 ;
+(id)currentCollation;
-(NSInteger)sectionForObject:(id)arg0 collationStringSelector:(SEL)arg1 ;
-(NSInteger)sectionForSectionIndexTitleAtIndex:(NSInteger)arg0 ;
-(id)_kanaTranscriptionForString:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)sortedArrayFromArray:(id)arg0 collationStringSelector:(SEL)arg1 ;
-(id)transformedCollationStringForString:(id)arg0 ;
-(struct __CFStringTokenizer *)tokenizer;
-(void)dealloc;


@end


#endif