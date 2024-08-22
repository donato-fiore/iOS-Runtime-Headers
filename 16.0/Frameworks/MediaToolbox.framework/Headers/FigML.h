// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGML_H
#define FIGML_H

@class NSString, NSURL, MLModel, BMStoreStream, BPSPublisher, NSFileManager, MLModelConfiguration;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FigML : NSObject {
    NSString *modelName;
    NSURL *modelPath;
    NSObject<OS_dispatch_queue> *stateQueue;
    MLModel *mlModel;
    BMStoreStream *biomeStream;
    BPSPublisher *biomePublisher;
    NSFileManager *fileManager;
    MLModelConfiguration *modelConfiguration;
    unsigned char isMLModelEligibleForExecution;
    unsigned char didSetupTrial;
    unsigned char initialized;
}


@property (readonly, nonatomic) NSURL *defaultCompiledModelPath; // ivar: defaultCompiledModelPath


-(BOOL)ensureModel:(*id)arg0 ;
-(BOOL)loadModelFromPath:(id)arg0 failedWithError:(*id)arg1 ;
-(BOOL)setupBiomeStream:(id)arg0 failedWithError:(*id)arg1 ;
-(BOOL)setupTrialAndRetrieveConfigWithError:(*id)arg0 ;
-(BOOL)trainMLModelWithData:(id)arg0 progressHandlers:(id)arg1 failedWithError:(*id)arg2 ;
-(id)getPredictionWithDictionary:(id)arg0 failedWithError:(*id)arg1 ;
-(id)initWithModelName:(id)arg0 modelConfiguration:(id)arg1 failedWithError:(*id)arg2 ;
-(id)readTrainingDataWithError:(*id)arg0 ;
-(void)dealloc;
-(void)ensureInternalState;
-(void)writeTrainingData:(id)arg0 ;


@end


#endif