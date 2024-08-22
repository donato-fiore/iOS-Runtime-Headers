// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLDATASET_H
#define NLDATASET_H


#import <Foundation/Foundation.h>

#import "NLModelConfiguration.h"
#import "NLDataProvider.h"

@interface NLDataSet : NSObject {
    NLModelConfiguration *_configuration;
    NLDataProvider *_trainingDataProvider;
    NLDataProvider *_validationDataProvider;
    NLDataProvider *_testDataProvider;
}


@property (readonly, copy) NLModelConfiguration *configuration;
@property (readonly) NSUInteger numberOfTestInstances;
@property (readonly) NSUInteger numberOfTrainingInstances;
@property (readonly) NSUInteger numberOfValidationInstances;


+(id)dataSetWithDataSet:(id)arg0 constraintParameters:(struct _NLConstraintParameters )arg1 modelTrainer:(id)arg2 ;
-(NSUInteger)numberOfLabels;
-(NSUInteger)numberOfVocabularyEntries;
-(id)dataProviderOfType:(NSInteger)arg0 ;
-(id)documentFrequencyMap;
-(id)initWithConfiguration:(id)arg0 dataProvider:(id)arg1 validationSplit:(CGFloat)arg2 testingSplit:(CGFloat)arg3 ;
-(id)initWithConfiguration:(id)arg0 trainingDataProvider:(id)arg1 validationDataProvider:(id)arg2 testDataProvider:(id)arg3 ;
-(id)initWithConfiguration:(id)arg0 trainingDataURL:(id)arg1 validationDataURL:(id)arg2 testDataURL:(id)arg3 ;
-(id)inverseLabelMap;
-(id)labelMap;
-(id)testInstanceAtIndex:(NSUInteger)arg0 ;
-(id)trainingInstanceAtIndex:(NSUInteger)arg0 ;
-(id)validationInstanceAtIndex:(NSUInteger)arg0 ;
-(id)vocabularyMap;


@end


#endif