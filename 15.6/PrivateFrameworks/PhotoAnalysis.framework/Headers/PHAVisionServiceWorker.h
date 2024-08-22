// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAVISIONSERVICEWORKER_H
#define PHAVISIONSERVICEWORKER_H

@class NSOperationQueue, NSMapTable, NSMutableDictionary, NSNumber, NSString;
@protocol PHAVisionServiceAssetsAnalyzingOperationDelegate, PVVisionIntegrating, OS_dispatch_queue;


#import "PHAWorker.h"

@interface PHAVisionServiceWorker : PHAWorker <PHAVisionServiceAssetsAnalyzingOperationDelegate, PVVisionIntegrating>

 {
    NSOperationQueue *_assetAnalysisOperationQueue;
    NSObject<OS_dispatch_queue> *_commandDispatchQueue;
    NSMapTable *_jobToAssetsAnalyzingOperationMapTable;
    NSMutableDictionary *_coalescedAnalysisResultsByAssetLocalIdentifier;
    NSMutableDictionary *_coalescedJobResultsByAssetLocalIdentifier;
    NSNumber *_lastRecordedDarkWakeState;
    uint8_t _lastPerformedJobScenario;
}


@property BOOL analysisJobCancelled; // ivar: _analysisJobCancelled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int visionAlgorithmUmbrellaVersion; // ivar: _visionAlgorithmUmbrellaVersion


+(id)analysisLog;
+(id)assetResourceLargestToSmallestComparator:(SEL)arg0 ;
+(id)assetResourceSmallestToLargestComparator:(SEL)arg0 ;
+(id)defaultImageCreationOptions;
+(id)preferredAssetResourcesForAnalyzingAsset:(id)arg0 ;
+(void)disableANEForRequest:(id)arg0 ;
+(void)initialize;
-(BOOL)canProvideAnalysisJobResultInformation:(id)arg0 withoutRequiringAssetResourceForAsset:(id)arg1 ;
-(BOOL)getLocallyAvailableAssetResource:(*id)arg0 forAnalyzingAsset:(id)arg1 error:(*id)arg2 ;
-(BOOL)isExecutingDuringDarkWake;
-(BOOL)processAsset:(id)arg0 error:(*id)arg1 ;
-(BOOL)startAnalysisJob:(id)arg0 error:(*id)arg1 ;
-(BOOL)stopAnalysisJob:(id)arg0 error:(*id)arg1 ;
-(BOOL)supportsCoalescingResults;
-(Class)assetsAnalyzingOperationClass;
-(NSUInteger)analyzeAssetResourceFileAtURL:(id)arg0 forAsset:(id)arg1 withAttributes:(id)arg2 error:(*id)arg3 ;
// -(NSUInteger)analyzeAssetWithLocalIdentifier:(id)arg0 dataLoadingOptions:(id)arg1 usingBlock:(id)arg2 error:(unk)arg3  ;
-(NSUInteger)analyzeAssetWithLocalIdentifier:(id)arg0 workerJob:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)analyzeImageData:(id)arg0 forAsset:(id)arg1 withAttributes:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)lastPerformedJobScenario;
-(id)assetResourcesForAsset:(id)arg0 fromDesiredTypes:(*NSInteger)arg1 count:(NSUInteger)arg2 ;
-(id)assetWithLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)imageDataForAssetResource:(id)arg0 error:(*id)arg1 ;
-(id)initWithPhotoAnalysisManager:(id)arg0 dataLoader:(id)arg1 ;
-(id)localFileURLForAssetResource:(id)arg0 error:(*id)arg1 ;
-(struct CGImage *)_createCGImageFromImageSource:(struct CGImageSource *)arg0 imageOptions:(id)arg1 orientation:(*NSUInteger)arg2 error:(*id)arg3 ;
-(struct CGImage *)createCGImageForAssetResource:(id)arg0 imageOptions:(id)arg1 orientation:(*NSUInteger)arg2 error:(*id)arg3 ;
-(struct CGImage *)createCGImageFromImageFileURL:(id)arg0 imageOptions:(id)arg1 orientation:(*NSUInteger)arg2 error:(*id)arg3 ;
-(void)_checkForDarkWakeStateTransition;
-(void)coalesceJobResult:(NSUInteger)arg0 forAssetLocalIdentifier:(id)arg1 ;
-(void)coalesceResultsDictionary:(id)arg0 forAssetLocalIdentifier:(id)arg1 ;
-(void)configureRequest:(id)arg0 algorithmUmbrellaVersion:(unsigned int)arg1 ;
-(void)didPerformJob:(id)arg0 ;
-(void)insidePhotoLibraryTransactionPersistResultsDictionary:(id)arg0 forAsset:(id)arg1 ;
-(void)performVisionForcedCleanup;
-(void)performVisionForcedCleanupWithOptions:(id)arg0 ;
-(void)shutdown;
-(void)startup;
-(void)visionServiceAssetsProcessingOperation:(id)arg0 didExecuteToCompletion:(BOOL)arg1 ;
-(void)willCompleteJob:(id)arg0 ;
-(void)willPerformJob:(id)arg0 ;


@end


#endif