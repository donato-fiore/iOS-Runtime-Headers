// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLTAGGER_H
#define NLTAGGER_H

@class NSArray, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NLTagger : NSObject {
    NSArray *_schemes;
    NSString *_string;
    *void _tagger;
    NSMutableDictionary *_customModels;
    NSMutableDictionary *_customModelDictionaries;
    NSMutableDictionary *_classifierCaches;
    NSMutableDictionary *_sequenceCaches;
    NSMutableDictionary *_customGazetteers;
    NSMutableDictionary *_customGazetteerDictionaries;
}


@property (readonly, copy, nonatomic) NSString *dominantLanguage;
@property (retain, nonatomic) NSString *string;
@property (readonly, copy, nonatomic) NSArray *tagSchemes;


+(id)availableTagSchemesForLanguage:(id)arg0 ;
+(id)availableTagSchemesForUnit:(NSInteger)arg0 language:(id)arg1 ;
+(void)registerForAssetNotifications;
+(void)requestAssetsForLanguage:(id)arg0 tagScheme:(id)arg1 completionHandler:(id)arg2 ;
-(id)_customGazetteerAtIndex:(NSUInteger)arg0 unit:(NSInteger)arg1 gazetteerDictionary:(id)arg2 ;
-(id)_customHypothesesAtIndex:(NSUInteger)arg0 fromHypothesisDictionary:(id)arg1 ;
-(id)_customHypothesesAtIndex:(NSUInteger)arg0 unit:(NSInteger)arg1 scheme:(id)arg2 maximumCount:(NSUInteger)arg3 options:(NSUInteger)arg4 modelDictionary:(id)arg5 gazetteerDictionary:(id)arg6 ;
-(id)_customHypothesisDictionaryForSentence:(id)arg0 options:(NSUInteger)arg1 model:(id)arg2 gazetteer:(id)arg3 maximumCount:(NSUInteger)arg4 ;
-(id)_customModelAtIndex:(NSUInteger)arg0 unit:(NSInteger)arg1 modelDictionary:(id)arg2 ;
-(id)_customTagAtIndex:(NSUInteger)arg0 fromTagDictionary:(id)arg1 ;
-(id)_customTagAtIndex:(NSUInteger)arg0 unit:(NSInteger)arg1 scheme:(id)arg2 options:(NSUInteger)arg3 modelDictionary:(id)arg4 gazetteerDictionary:(id)arg5 ;
-(id)_customTagDictionaryForSentence:(id)arg0 options:(NSUInteger)arg1 model:(id)arg2 gazetteer:(id)arg3 ;
-(id)_tagSchemeForScheme:(id)arg0 ;
-(id)description;
-(id)gazetteersForTagScheme:(id)arg0 ;
-(id)initWithTagSchemes:(id)arg0 ;
-(id)modelsForTagScheme:(id)arg0 ;
-(id)tagAtIndex:(NSUInteger)arg0 unit:(NSInteger)arg1 scheme:(id)arg2 tokenRange:(struct _NSRange *)arg3 ;
-(id)tagHypothesesAtIndex:(NSUInteger)arg0 unit:(NSInteger)arg1 scheme:(id)arg2 maximumCount:(NSUInteger)arg3 tokenRange:(struct _NSRange *)arg4 ;
-(id)tagsInRange:(struct _NSRange )arg0 unit:(NSInteger)arg1 scheme:(id)arg2 options:(NSUInteger)arg3 tokenRanges:(*id)arg4 ;
-(struct _NSRange )sentenceRangeForRange:(struct _NSRange )arg0 ;
-(struct _NSRange )tokenRangeAtIndex:(NSUInteger)arg0 unit:(NSInteger)arg1 ;
-(struct _NSRange )tokenRangeForRange:(struct _NSRange )arg0 unit:(NSInteger)arg1 ;
-(void)dealloc;
-(void)enumerateTagsInRange:(struct _NSRange )arg0 unit:(NSInteger)arg1 scheme:(id)arg2 options:(NSUInteger)arg3 usingBlock:(id)arg4 ;
-(void)setGazetteers:(id)arg0 forTagScheme:(id)arg1 ;
-(void)setLanguage:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)setModels:(id)arg0 forTagScheme:(id)arg1 ;
-(void)setOrthography:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)stringEditedInRange:(struct _NSRange )arg0 changeInLength:(NSInteger)arg1 ;


@end


#endif