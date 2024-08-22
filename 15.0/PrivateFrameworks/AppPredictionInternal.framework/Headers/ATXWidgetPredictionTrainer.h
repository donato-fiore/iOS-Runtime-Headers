// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXWIDGETPREDICTIONTRAINER_H
#define ATXWIDGETPREDICTIONTRAINER_H

@class ATXInformationStore, NSUserDefaults;

#import <Foundation/Foundation.h>

#import "ATXWidgetPredictionTrainingDatasetBuilder.h"

@interface ATXWidgetPredictionTrainer : NSObject {
    ATXWidgetPredictionTrainingDatasetBuilder *_datasetBuilder;
    ATXInformationStore *_informationStore;
    NSUserDefaults *_defaults;
}




+(BOOL)shouldTrainModelOnDeviceWithTimeOfLatestTraining:(id)arg0 ;
+(id)compiledModelURLForModelName:(id)arg0 ;
+(void)moveOriginalModelToWriteablePath:(id)arg0 ;
-(id)_timeOfLatestTraining;
-(id)initWithInformationStore:(id)arg0 distinctScoreCounts:(id)arg1 ;
-(void)_updateTimeOfLatestTrainingTo:(id)arg0 ;
-(void)modelPredictionWithSampleDictionaryFeatureProvider:(id)arg0 withMLModel:(id)arg1 ;
-(void)trainWidgetPredictionModelWithActivity:(id)arg0 ;
-(void)trainWidgetPredictionModelWithMLArrayBatchProvider:(id)arg0 modelURL:(id)arg1 andSaveToURL:(id)arg2 withActivity:(id)arg3 ;


@end


#endif