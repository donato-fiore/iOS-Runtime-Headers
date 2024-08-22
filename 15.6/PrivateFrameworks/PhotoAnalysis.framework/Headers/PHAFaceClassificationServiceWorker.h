// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAFACECLASSIFICATIONSERVICEWORKER_H
#define PHAFACECLASSIFICATIONSERVICEWORKER_H

@class NSMutableArray, PVVisionAnalyzer, NSString, VNPersonsModel;
@protocol PVVisionIntegrating, OS_dispatch_queue;


#import "PHAWorker.h"
#import "PHAAnalysisWorkerJob.h"

@interface PHAFaceClassificationServiceWorker : PHAWorker <PVVisionIntegrating>

 {
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableArray *_pendingAssetIdentifiers;
    PHAAnalysisWorkerJob *_currentJob;
}


@property (retain) PVVisionAnalyzer *analyzer; // ivar: _analyzer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSUInteger numberOfAssetsToProcess; // ivar: _numberOfAssetsToProcess
@property (retain) VNPersonsModel *personsModel; // ivar: _personsModel
@property (readonly) Class superclass;


+(BOOL)persistsState;
+(NSInteger)applicationDataFolderIdentifier;
+(short)workerType;
-(BOOL)startAnalysisJob:(id)arg0 error:(*id)arg1 ;
-(BOOL)stopAnalysisJob:(id)arg0 error:(*id)arg1 ;
-(id)initWithPhotoAnalysisManager:(id)arg0 dataLoader:(id)arg1 ;
-(void)_cleanup;
-(void)analyzeAsset:(id)arg0 withImageProvider:(id)arg1 ;
-(void)configureRequest:(id)arg0 algorithmUmbrellaVersion:(unsigned int)arg1 ;
-(void)cooldown;
-(void)loadPersonsModel;
-(void)processAsset:(id)arg0 ;
-(void)processPendingAssetIdentifiers;
-(void)warmupWithProgressBlock:(id)arg0 ;


@end


#endif