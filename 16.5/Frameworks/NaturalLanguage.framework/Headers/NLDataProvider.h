// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLDATAPROVIDER_H
#define NLDATAPROVIDER_H

@class NSArray, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "NLModelConfiguration.h"

@interface NLDataProvider : NSObject {
    NLModelConfiguration *_configuration;
    *__CFStringTokenizer _tokenizer;
    NSArray *_instances;
    NSDictionary *_labelMap;
    NSDictionary *_inverseLabelMap;
    NSDictionary *_vocabularyMap;
    NSDictionary *_documentFrequencyMap;
    NSUInteger _numberOfLabels;
    NSUInteger _numberOfVocabularyEntries;
    NSUInteger _numberOfTokens;
    NSString *_recognizedLanguage;
    BOOL _generatedMaps;
    BOOL _performedLanguageRecognition;
}


@property (readonly, copy) NLModelConfiguration *configuration;
@property (readonly) NSUInteger numberOfInstances;
@property (readonly) NSString *recognizedLanguage;


-(NSUInteger)numberOfLabels;
-(NSUInteger)numberOfTokens;
-(NSUInteger)numberOfVocabularyEntries;
-(id)documentFrequencyMap;
-(id)initWithConfiguration:(id)arg0 dataURL:(id)arg1 ;
-(id)instanceAtIndex:(NSUInteger)arg0 ;
-(id)inverseLabelMap;
-(id)labelMap;
-(id)vocabularyMap;
-(struct __CFStringTokenizer *)tokenizer;
-(void)_generateMaps;
-(void)_generateMapsWithModelTrainer:(id)arg0 ;
-(void)_performLanguageRecognition;
-(void)dealloc;
-(void)generateMapsWithModelTrainer:(id)arg0 ;


@end


#endif