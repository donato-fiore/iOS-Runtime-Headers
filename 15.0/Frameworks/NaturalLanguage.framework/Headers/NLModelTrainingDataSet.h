// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLMODELTRAININGDATASET_H
#define NLMODELTRAININGDATASET_H



#import "NLDataSet.h"
#import "NLDataProvider.h"

@interface NLModelTrainingDataSet : NLDataSet {
    NLDataProvider *_modelTrainingDataProvider;
    NLDataProvider *_modelValidationDataProvider;
}




-(id)dataProviderOfType:(NSInteger)arg0 ;
-(id)initWithConfiguration:(id)arg0 numberOfTrainingInstances:(NSUInteger)arg1 numberOfValidationInstances:(NSUInteger)arg2 trainingDataSource:(*void)arg3 validationDataSource:(*void)arg4 instanceDataProvider:(id)arg5 ;


@end


#endif