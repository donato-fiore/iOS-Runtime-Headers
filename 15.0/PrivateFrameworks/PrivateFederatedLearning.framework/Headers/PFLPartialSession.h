// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFLPARTIALSESSION_H
#define PFLPARTIALSESSION_H

@class NSString, NSURL;
@protocol PFLResumable, PFLTaskStateProvider, PFLTaskState, MLBatchProvider;

#import <Foundation/Foundation.h>

#import "PFLUpdateConfiguration.h"

@interface PFLPartialSession : NSObject <PFLResumable, PFLTaskStateProvider>



@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) PFLUpdateConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<PFLTaskState> *currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *modelURL; // ivar: _modelURL
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<MLBatchProvider> *trainingData; // ivar: _trainingData


-(CGFloat)privatizationNormMax;
-(CGFloat)validationSplit;
-(NSUInteger)privatizationNormBinCount;
-(id)compiledModelURL;
-(id)dataProvider;
-(id)initWithModelAtURL:(id)arg0 trainingData:(id)arg1 configuration:(id)arg2 completionHandler:(id)arg3 ;
-(id)layerNames;
-(id)modelConfiguration;
-(void)resume;
-(void)resumeWithState:(id)arg0 ;
-(void)suspend;


@end


#endif