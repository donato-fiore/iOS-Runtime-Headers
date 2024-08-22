// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLCONCATENATEDDATAPROVIDER_H
#define NLCONCATENATEDDATAPROVIDER_H

@class NSArray;


#import "NLDataProvider.h"

@interface NLConcatenatedDataProvider : NLDataProvider {
    NSArray *_dataProviders;
}




-(NSUInteger)numberOfInstances;
-(NSUInteger)numberOfLabels;
-(NSUInteger)numberOfVocabularyEntries;
-(id)configuration;
-(id)documentFrequencyMap;
-(id)initWithDataProviders:(id)arg0 ;
-(id)instanceAtIndex:(NSUInteger)arg0 ;
-(id)inverseLabelMap;
-(id)labelMap;
-(id)vocabularyMap;
-(struct __CFStringTokenizer *)tokenizer;
-(void)_generateMaps;


@end


#endif