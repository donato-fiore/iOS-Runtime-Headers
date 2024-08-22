// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXASSETVARIATIONRENDERPROVIDER_H
#define PXASSETVARIATIONRENDERPROVIDER_H

@class NSMutableDictionary, NSProgress, NSOperation, NSDate, NSNumber, NSDictionary, NSIndexSet, NSError, NSString;
@protocol OS_dispatch_queue, PXEditSourceLoader;


#import "PXObservable.h"
#import "PXUpdater.h"

@interface PXAssetVariationRenderProvider : PXObservable {
    PXUpdater *_updater;
    NSMutableDictionary *_resultsByVariationType;
    NSMutableDictionary *_progressesByVariationType;
    NSProgress *_recipeGenerationProgress;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _hasBegunRendering;
    NSProgress *_observedEditSourceLoaderProgress;
    unsigned char _signpostID;
}


@property (retain, nonatomic, setter=_setAnalysisOperation:) NSOperation *_analysisOperation; // ivar: __analysisOperation
@property (retain, nonatomic, setter=_setBeginRenderingDate:) NSDate *_beginRenderingDate; // ivar: __beginRenderingDate
@property (retain, nonatomic, setter=_setEditSourceDuration:) NSNumber *_editSourceDuration; // ivar: __editSourceDuration
@property (readonly, nonatomic) BOOL _hasAllResults;
@property (retain, nonatomic, setter=_setRecipeGenerationDuration:) NSNumber *_recipeGenerationDuration; // ivar: __recipeGenerationDuration
@property (readonly, nonatomic) NSMutableDictionary *_renderingDurationByVariationType; // ivar: __renderingDurationByVariationType
@property (readonly, nonatomic) NSMutableDictionary *_renderingOperationsByVariationType; // ivar: __renderingOperationsByVariationType
@property (copy, nonatomic) NSDictionary *analysisResult; // ivar: _analysisResult
@property (readonly, copy, nonatomic) NSIndexSet *desiredVariationTypes; // ivar: _desiredVariationTypes
@property (readonly, nonatomic) NSObject<PXEditSourceLoader> *editSourceLoader; // ivar: _editSourceLoader
@property (retain, nonatomic, setter=_setError:) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSProgress *initialLoadingProgress; // ivar: _initialLoadingProgress
@property (nonatomic) BOOL renderAllResources; // ivar: _renderAllResources
@property (nonatomic, setter=_setStatus:) NSInteger status; // ivar: _status
@property (copy, nonatomic, setter=_setStatusDescription:) NSString *statusDescription; // ivar: _statusDescription
@property (nonatomic) CGSize targetSize; // ivar: _targetSize
@property (retain, nonatomic) NSNumber *totalRenderingDuration; // ivar: _totalRenderingDuration


+(id)_renderingLog;
+(id)sharedOperationQueue;
+(id)supportedVariationTypes;
+(void)_performSimulatedWorkWithProgress:(id)arg0 ;
-(NSInteger)_variationSourceType;
-(id)debugDescription;
-(id)init;
-(id)initWithEditSourceLoader:(id)arg0 targetSize:(struct CGSize )arg1 desiredVariationTypes:(id)arg2 ;
-(id)mutableChangeObject;
-(id)progressForVariationType:(NSInteger)arg0 ;
-(id)renderResultForVariationType:(NSInteger)arg0 ;
-(void)_handleAnalysisOperationCompleted:(id)arg0 ;
-(void)_handleCachedAnalysisResult:(id)arg0 ;
-(void)_handleRenderingOperationCompleted:(id)arg0 ;
-(void)_handleRenderingOperationStarted:(id)arg0 ;
-(void)_invalidateAnalysisResult;
-(void)_invalidateCachedAnalysisResult;
-(void)_invalidateRenders;
-(void)_invalidateStatus;
-(void)_removeAllResults;
-(void)_setProgress:(id)arg0 forVariationType:(NSInteger)arg1 ;
-(void)_setResult:(id)arg0 forVariationType:(NSInteger)arg1 ;
-(void)_updateAnalysisResult;
-(void)_updateCachedAnalysisResult;
-(void)_updateRenders;
-(void)_updateStatus;
-(void)beginRendering;
-(void)cancelRendering;
-(void)dealloc;
-(void)didPerformChanges;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)unloadResults;


@end


#endif