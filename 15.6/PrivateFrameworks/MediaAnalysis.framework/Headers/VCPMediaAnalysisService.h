// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPMEDIAANALYSISSERVICE_H
#define VCPMEDIAANALYSISSERVICE_H

@class NSXPCConnection, NSMutableDictionary;
@protocol VCPMediaAnalysisClientProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCPMediaAnalysisService : NSObject <VCPMediaAnalysisClientProtocol>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_managementQueue;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSMutableDictionary *_progressBlocks;
    int _nextRequestID;
}




+(id)analysisService;
+(id)errorWithDescription:(id)arg0 ;
+(id)sharedAnalysisService;
+(int)queryCachedFaceAnalysisProgress:(*id)arg0 forPhotoLibrary:(id)arg1 ;
+(int)queryCachedFaceAnalysisProgress:(*id)arg0 forPhotoLibrary:(id)arg1 withExtendTimeoutBlock:(id)arg2 ;
+(int)queryProgress:(*float)arg0 forPhotoLibrary:(id)arg1 andTaskID:(NSUInteger)arg2 ;
+(int)queryProgress:(*float)arg0 forPhotoLibrary:(id)arg1 andTaskID:(NSUInteger)arg2 withExtendTimeoutBlock:(id)arg3 ;
+(int)queryProgressDetail:(*id)arg0 forPhotoLibrary:(id)arg1 andTaskID:(NSUInteger)arg2 ;
+(int)queryProgressDetail:(*id)arg0 forPhotoLibrary:(id)arg1 andTaskID:(NSUInteger)arg2 withExtendTimeoutBlock:(id)arg3 ;
+(int)queryProgressDetail:(*id)arg0 forPhotoLibraryURL:(id)arg1 andTaskID:(NSUInteger)arg2 ;
+(int)queryProgressDetail:(*id)arg0 forPhotoLibraryURL:(id)arg1 andTaskID:(NSUInteger)arg2 withExtendTimeoutBlock:(id)arg3 ;
-(id)connection;
-(id)init;
-(int)queryAutoCounterOptInStatusForPhotoLibraryURL:(id)arg0 withPersonLocalIdentifiers:(id)arg1 completionHandler:(id)arg2 ;
// -(int)requestAnalysisTypes:(NSUInteger)arg0 forAssetWithResourceURLs:(id)arg1 withOptions:(id)arg2 progressHandler:(id)arg3 andCompletionHandler:(unk)arg4  ;
-(int)requestAutoCounterAccuracyCalculationForPhotoLibraryURL:(id)arg0 clusterStateURL:(id)arg1 groundTruthURL:(id)arg2 completionHandler:(id)arg3 ;
-(int)requestAutoCounterAccuracyCalculationForPhotoLibraryURL:(id)arg0 completionHandler:(id)arg1 ;
-(int)requestAutoCounterSIMLValidationForPhotoLibraryURL:(id)arg0 simlGroundTruthURL:(id)arg1 completionHandler:(id)arg2 ;
// -(int)requestBackgroundAnalysisForAssets:(id)arg0 fromPhotoLibraryWithURL:(id)arg1 realTime:(BOOL)arg2 progessHandler:(id)arg3 completionHandler:(unk)arg4  ;
// -(int)requestBackgroundAnalysisForAssets:(id)arg0 realTime:(BOOL)arg1 progessHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(int)requestBackgroundProcessingWithTaskID:(NSUInteger)arg0 forPhotoLibrary:(id)arg1 progessHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(int)requestClusterCacheValidationWithPhotoLibraryURL:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(int)requestDumpAutoCounterForPhotoLibraryURL:(id)arg0 completionHandler:(id)arg1 ;
// -(int)requestFRCForAssetURL:(id)arg0 withOptions:(id)arg1 progressHandler:(id)arg2 andCompletionHandler:(unk)arg3  ;
// -(int)requestFaceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg0 photoLibraryURL:(id)arg1 progessHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(int)requestFaceProcessingForAssets:(id)arg0 withOptions:(id)arg1 progressHandler:(id)arg2 andCompletionHandler:(unk)arg3  ;
// -(int)requestFaceProcessingForPhotoLibrary:(id)arg0 withOptions:(id)arg1 progressHandler:(id)arg2 andCompletionHandler:(unk)arg3  ;
// -(int)requestFullProcessingForPhotoLibrary:(id)arg0 withOptions:(id)arg1 progressHandler:(id)arg2 andCompletionHandler:(unk)arg3  ;
-(int)requestIdentificationOfFaces:(id)arg0 withCompletionHandler:(id)arg1 ;
// -(int)requestLivePhotoEffectsForAssets:(id)arg0 withOptions:(id)arg1 progressHandler:(id)arg2 andCompletionHandler:(unk)arg3  ;
-(int)requestMediaAnalysisDatabaseBackupForPhotoLibraryURL:(id)arg0 withCompletionHandler:(id)arg1 ;
// -(int)requestMultiWorkerProcessingForPhotoLibrary:(id)arg0 withOptions:(id)arg1 progressHandler:(id)arg2 andCompletionHandler:(unk)arg3  ;
-(int)requestOptInAutoCounterForPhotoLibraryURL:(id)arg0 withPersons:(id)arg1 completionHandler:(id)arg2 ;
-(int)requestPersonPreferenceForPhotoLibraryURL:(id)arg0 completionHandler:(id)arg1 ;
// -(int)requestPersonProcessingForPhotoLibraryURL:(id)arg0 options:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(int)requestPersonPromoterStatusWithAdvancedFlag:(BOOL)arg0 photoLibraryURL:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(int)requestProcessingTypes:(NSUInteger)arg0 forAssetsWithLocalIdentifiers:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 progressHandler:(id)arg3 completionHandler:(unk)arg4  ;
// -(int)requestProcessingWithTaskID:(NSUInteger)arg0 forAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(id)arg3 andCompletionHandler:(unk)arg4  ;
// -(int)requestProcessingWithTaskID:(NSUInteger)arg0 forPhotoLibrary:(id)arg1 withOptions:(id)arg2 progessHandler:(id)arg3 andCompletionHandler:(unk)arg4  ;
-(int)requestQuickFaceIdentificationForPhotoLibraryURL:(id)arg0 withOptions:(id)arg1 andCompletionHandler:(id)arg2 ;
// -(int)requestRebuildPersonsWithLocalIdentifiers:(id)arg0 photoLibraryURL:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(int)requestReclusterFacesWithPhotoLibraryURL:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
// -(int)requestResetFaceClassificationModelForPhotoLibraryURL:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
// -(int)requestResetFaceClusteringStateWithPhotoLibraryURL:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
// -(int)requestResetPetClassificationModelForPhotoLibraryURL:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
// -(int)requestSceneProcessingForAssets:(id)arg0 withOptions:(id)arg1 progressHandler:(id)arg2 andCompletionHandler:(unk)arg3  ;
// -(int)requestSceneProcessingForPhotoLibrary:(id)arg0 withOptions:(id)arg1 progressHandler:(id)arg2 andCompletionHandler:(unk)arg3  ;
// -(int)requestSceneprintProcessingForAssets:(id)arg0 withOptions:(id)arg1 progressHandler:(id)arg2 andCompletionHandler:(unk)arg3  ;
// -(int)requestSuggestedMePersonIdentifierWithContext:(id)arg0 photoLibraryURL:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(int)requestSuggestedPersonsForPersonWithLocalIdentifier:(id)arg0 toBeConfirmedPersonSuggestions:(id)arg1 toBeRejectedPersonSuggestions:(id)arg2 photoLibraryURL:(id)arg3 progessHandler:(id)arg4 completionHandler:(unk)arg5  ;
// -(int)requestUpdateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg0 forceUpdate:(BOOL)arg1 photoLibraryURL:(id)arg2 progessHandler:(id)arg3 completionHandler:(unk)arg4  ;
-(int)requestVIPModelFilepathForPhotoLibraryURL:(id)arg0 forModelType:(NSUInteger)arg1 completionHandler:(id)arg2 ;
// -(int)requestVideoStabilizationForAssets:(id)arg0 withOptions:(id)arg1 progressHandler:(id)arg2 andCompletionHandler:(unk)arg3  ;
-(void)cancelAllRequests;
-(void)cancelBackgroundActivity;
-(void)cancelRequest:(int)arg0 ;
-(void)invalidate;
-(void)notifyLibraryAvailableAtURL:(id)arg0 ;
-(void)reportProgress:(CGFloat)arg0 forRequest:(int)arg1 ;


@end


#endif