// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLMODELTRAINER_H
#define NLMODELTRAINER_H

@class NSDictionary, NSError;
@protocol NLModelTrainerDelegate;

#import <Foundation/Foundation.h>

#import "NLModelConfiguration.h"
#import "NLDataSet.h"
#import "NLModel.h"

@interface NLModelTrainer : NSObject {
    NLModelConfiguration *_configuration;
    NLDataSet *_dataSet;
    NSDictionary *_options;
    NLModel *_model;
    NSError *_trainingError;
    id<NLModelTrainerDelegate> *_delegate;
    BOOL _delegateRespondsToLogMessage;
    BOOL _delegateRespondsToShouldStop;
}


@property (readonly, copy) NLModelConfiguration *configuration;
@property (readonly) NLDataSet *dataSet;
@property (readonly) NSObject<NLModelTrainerDelegate> *delegate;
@property (readonly, copy) NSDictionary *options;
@property (readonly, copy) NSDictionary *testResults;
@property (readonly, copy) NLModel *trainedModel;
@property (readonly, copy) NSError *trainingError;


+(id)modelTrainerWithConfiguration:(id)arg0 dataSet:(id)arg1 options:(id)arg2 delegate:(id)arg3 ;
-(BOOL)shouldStop;
-(BOOL)trainerShouldStop:(id)arg0 ;
-(Class)modelImplClass;
-(id)initWithConfiguration:(id)arg0 dataSet:(id)arg1 options:(id)arg2 delegate:(id)arg3 ;
-(id)model;
-(void)logMessage:(id)arg0 ;
-(void)setModel:(id)arg0 ;
-(void)trainModel;
-(void)trainer:(id)arg0 logMessage:(id)arg1 ;


@end


#endif