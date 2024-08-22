// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLCONSTRAINEDDATAPROVIDER_H
#define NLCONSTRAINEDDATAPROVIDER_H

@class NSArray, NSDictionary;


#import "NLDataProvider.h"

@interface NLConstrainedDataProvider : NLDataProvider {
    NLDataProvider *_dataProvider;
    _NLConstraintParameters _parameters;
    NSArray *_locators;
    NSDictionary *_labelMap;
    NSDictionary *_inverseLabelMap;
    NSDictionary *_vocabularyMap;
    NSDictionary *_documentFrequencyMap;
    NSUInteger _numberOfLabels;
    NSUInteger _numberOfVocabularyEntries;
}




-(NSUInteger)numberOfInstances;
-(NSUInteger)numberOfLabels;
-(NSUInteger)numberOfVocabularyEntries;
-(id)configuration;
-(id)documentFrequencyMap;
-(id)initWithDataProvider:(id)arg0 parameters:(struct _NLConstraintParameters )arg1 modelTrainer:(id)arg2 ;
-(id)instanceAtIndex:(NSUInteger)arg0 ;
-(id)inverseLabelMap;
-(id)labelMap;
-(id)vocabularyMap;
-(struct __CFStringTokenizer *)tokenizer;
-(void)_generateMaps;


@end


#endif