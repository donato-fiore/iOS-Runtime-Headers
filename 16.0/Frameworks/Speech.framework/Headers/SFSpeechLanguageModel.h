// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSPEECHLANGUAGEMODEL_H
#define SFSPEECHLANGUAGEMODEL_H

@class NSLocale, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "SFLocalSpeechRecognitionClient.h"

@interface SFSpeechLanguageModel : NSObject {
    SFLocalSpeechRecognitionClient *_lsrClient;
}


@property (readonly, copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, copy, nonatomic) NSArray *outOfVocabularyWords;
@property (readonly, copy, nonatomic) NSDictionary *outOfVocabularyWordsAndFrequencies;


+(id)supportedLocales;
+(void)initialize;
+(void)trainAppLmFromNgramCountsArtifact:(id)arg0 language:(id)arg1 writeToDirectory:(id)arg2 modelOverride:(id)arg3 completion:(id)arg4 ;
+(void)trainAppLmFromNgramsSerializedDataFile:(id)arg0 customPronsFile:(id)arg1 language:(id)arg2 writeToDirectory:(id)arg3 modelOverride:(id)arg4 completion:(id)arg5 ;
-(BOOL)addProns:(id)arg0 forWord:(id)arg1 ;
-(BOOL)trainFromPlainTextAndWriteToDirectory:(id)arg0 ;
-(NSInteger)lmeThreshold;
-(id)addOovsFromSentence:(id)arg0 ;
-(id)createNgramCountsArtifactFromPhraseCountArtifact:(id)arg0 writeDirectory:(id)arg1 ;
-(id)createNgramCountsArtifactWithIdentifier:(id)arg0 rawPhraseCountsPath:(id)arg1 customPronunciationsPath:(id)arg2 writeDirectory:(id)arg3 ;
-(id)createPhraseCountsArtifactWithIdentifier:(id)arg0 rawPhraseCountsPath:(id)arg1 customPronunciationsPath:(id)arg2 writeDirectory:(id)arg3 ;
-(id)deserializeModelData:(id)arg0 ;
-(id)init;
-(id)initWithAssetPath:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(id)metrics;
-(void)addPronsFromFile:(id)arg0 ;
-(void)addSentence:(id)arg0 ;
-(void)addSentences:(id)arg0 ;
-(void)dealloc;
-(void)generateNgramsSerializeDataAndWriteToFile:(id)arg0 ;
-(void)trainFromPlainTextAndWriteToDirectory:(id)arg0 completion:(id)arg1 ;


@end


#endif