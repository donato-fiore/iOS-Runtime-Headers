// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSPEECHLANGUAGEMODEL_H
#define SFSPEECHLANGUAGEMODEL_H

@class _EARAppLmData, NSString, _EARLmModel, NSMutableDictionary, NSLocale, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface SFSpeechLanguageModel : NSObject {
    _EARAppLmData *_appLmData;
    NSString *_recognizerConfigFilePath;
    _EARLmModel *_model;
    NSMutableDictionary *_oovDict;
}


@property (readonly, copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, copy, nonatomic) NSArray *outOfVocabularyWords;
@property (readonly, copy, nonatomic) NSDictionary *outOfVocabularyWordsAndFrequencies;


+(id)supportedLocales;
+(void)initialize;
+(void)trainAppLmFromNgramsSerializedDataFile:(id)arg0 customPronsFile:(id)arg1 language:(id)arg2 writeToDirectory:(id)arg3 modelOverride:(id)arg4 completion:(id)arg5 ;
-(BOOL)addProns:(id)arg0 forWord:(id)arg1 ;
-(BOOL)trainFromPlainTextAndWriteToDirectory:(id)arg0 ;
-(NSInteger)lmeThreshold;
-(id)addOovsFromSentence:(id)arg0 ;
-(id)deserializeModelData:(id)arg0 ;
-(id)init;
-(id)initWithAssetPath:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(id)metrics;
-(void)addPronsFromFile:(id)arg0 ;
-(void)addSentence:(id)arg0 ;
-(void)addSentences:(id)arg0 ;
-(void)generateNgramsSerializeDataAndWriteToFile:(id)arg0 ;
-(void)trainFromPlainTextAndWriteToDirectory:(id)arg0 completion:(id)arg1 ;


@end


#endif