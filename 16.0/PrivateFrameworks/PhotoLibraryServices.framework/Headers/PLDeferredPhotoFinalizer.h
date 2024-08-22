// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLDEFERREDPHOTOFINALIZER_H
#define PLDEFERREDPHOTOFINALIZER_H

@class NSMutableDictionary, AVCaptureDeferredPhotoProcessor, NSMutableSet, PAImageConversionServiceClient, NSString;
@protocol AVCaptureDeferredPhotoProcessorDelegate;

#import <Foundation/Foundation.h>


@interface PLDeferredPhotoFinalizer : NSObject <AVCaptureDeferredPhotoProcessorDelegate>

 {
    NSMutableDictionary *_identifierToAssetMap;
    NSMutableDictionary *_identifierToCompletionHandler;
    AVCaptureDeferredPhotoProcessor *_finalizer;
    os_unfair_lock_s _identifierToAssetMapLock;
    NSMutableSet *_taskIdentifiersToFinalize;
    os_unfair_lock_s _taskIdentifiersToFinalizeLock;
    PAImageConversionServiceClient *_imageConversionServiceClient;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)errorIsRecoverable:(id)arg0 ;
// -(NSInteger)_requestFrameDropRecoveryForAssetURL:(id)arg0 withOptions:(id)arg1 progressHandler:(id)arg2 andCompletionHandler:(unk)arg3  ;
-(id)_createAssetAdjustmentsForAsset:(id)arg0 error:(*id)arg1 ;
-(id)_imageConversionOptionsForAsset:(id)arg0 adjustments:(id)arg1 isBackgroundPriority:(BOOL)arg2 reason:(id)arg3 ;
-(id)init;
-(id)requestFrameDropRecoveryForAsset:(id)arg0 completionHandler:(id)arg1 ;
-(int)deleteIntermediatesExcludingDeferredIdentifiers:(id)arg0 ;
-(void)_callCompletionHandlersWithPhotoProxy:(id)arg0 processor:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)_copyFrameRecoveredVideoComplementToFinalSlot:(id)arg0 libraryServicesManager:(id)arg1 resultURL:(id)arg2 completionHandler:(id)arg3 ;
-(void)_copyOriginalVideoComplementToDiagnosticPath:(id)arg0 ;
-(void)_prepareFinalizedAssetForSemanticDevelopment:(id)arg0 finalizedPhotoData:(id)arg1 ;
-(void)_promoteProxyAndRecoverErrors:(id)arg0 libraryServicesManager:(id)arg1 inError:(id)arg2 completionHandler:(id)arg3 ;
-(void)_repushOriginalVideoComplementIfNeeded:(id)arg0 ;
-(void)_setupMediaConversionSourceCollections:(id)arg0 destinationCollection:(id)arg1 forAsset:(id)arg2 ;
-(void)_writeDebugFileFromProxyMetadata:(id)arg0 forAsset:(id)arg1 isWide:(BOOL)arg2 ;
-(void)cancelFinalizationForTaskIdentifier:(id)arg0 ;
-(void)cancelOutstandingFrameDropRecoveryRequests;
-(void)performSemanticEnhanceForAsset:(id)arg0 isBackgroundPriority:(BOOL)arg1 reason:(id)arg2 completionHandler:(id)arg3 ;
-(void)processor:(id)arg0 didFinishProcessingPhotoProxy:(id)arg1 finalPhoto:(id)arg2 error:(id)arg3 ;
-(void)requestCancellationOfAsset:(id)arg0 ;
-(void)requestFinalizationOfAsset:(id)arg0 forWide:(BOOL)arg1 isBackgroundPriority:(BOOL)arg2 reason:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif