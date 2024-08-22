// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLSPLITDATAPROVIDER_H
#define NLSPLITDATAPROVIDER_H

@class NSArray;


#import "NLDataProvider.h"

@interface NLSplitDataProvider : NLDataProvider {
    NLDataProvider *_dataProvider;
    NSArray *_indexes;
}




-(NSUInteger)numberOfInstances;
-(NSUInteger)numberOfLabels;
-(NSUInteger)numberOfVocabularyEntries;
-(id)configuration;
-(id)documentFrequencyMap;
-(id)initWithDataProvider:(id)arg0 indexes:(id)arg1 ;
-(id)instanceAtIndex:(NSUInteger)arg0 ;
-(id)inverseLabelMap;
-(id)labelMap;
-(id)vocabularyMap;
-(struct __CFStringTokenizer *)tokenizer;
-(void)_generateMaps;


@end


#endif