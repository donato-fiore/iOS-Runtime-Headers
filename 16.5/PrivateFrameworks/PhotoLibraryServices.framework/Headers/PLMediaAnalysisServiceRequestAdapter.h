// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLMEDIAANALYSISSERVICEREQUESTADAPTER_H
#define PLMEDIAANALYSISSERVICEREQUESTADAPTER_H


#import <Foundation/Foundation.h>


@interface PLMediaAnalysisServiceRequestAdapter : NSObject



+(NSInteger)invalidRequestID;
// +(NSInteger)requestClusterCacheValidationWithPhotoLibraryURL:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
// +(NSInteger)requestFaceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg0 photoLibraryURL:(id)arg1 progessHandler:(id)arg2 completionHandler:(unk)arg3  ;
// +(NSInteger)requestPersonPromoterStatusWithAdvancedFlag:(BOOL)arg0 photoLibraryURL:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
// +(NSInteger)requestPetsAnalysisForAssets:(id)arg0 withOptions:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
// +(NSInteger)requestProcessingTypes:(NSUInteger)arg0 forAssetsWithLocalIdentifiers:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 progressHandler:(id)arg3 completionHandler:(unk)arg4  ;
+(NSInteger)requestQuickFaceIdentificationForPhotoLibraryURL:(id)arg0 withOptions:(id)arg1 andCompletionHandler:(id)arg2 ;
// +(NSInteger)requestRebuildPersonsWithLocalIdentifiers:(id)arg0 photoLibraryURL:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
// +(NSInteger)requestReclusterFacesWithPhotoLibraryURL:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
// +(NSInteger)requestResetFaceClassificationModelForPhotoLibraryURL:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
// +(NSInteger)requestResetFaceClusteringStateWithPhotoLibraryURL:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
// +(NSInteger)requestSceneProcessingForAssets:(id)arg0 withOptions:(id)arg1 progressHandler:(id)arg2 andCompletionHandler:(unk)arg3  ;
// +(NSInteger)requestSuggestedMePersonIdentifierWithContext:(id)arg0 photoLibraryURL:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
// +(NSInteger)requestSuggestedPersonsForPersonWithLocalIdentifier:(id)arg0 toBeConfirmedPersonSuggestions:(id)arg1 toBeRejectedPersonSuggestions:(id)arg2 photoLibraryURL:(id)arg3 progessHandler:(id)arg4 completionHandler:(unk)arg5  ;
// +(NSInteger)requestUpdateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg0 forceUpdate:(BOOL)arg1 photoLibraryURL:(id)arg2 progessHandler:(id)arg3 completionHandler:(unk)arg4  ;
+(NSInteger)requestVIPModelFilepathForPhotoLibraryURL:(id)arg0 forModelType:(NSUInteger)arg1 andCompletionHandler:(id)arg2 ;
+(NSUInteger)faceAnalysisTaskID;
+(NSUInteger)petVIPModelType;
+(int)queryProgressDetail:(*id)arg0 forPhotoLibraryURL:(id)arg1 andTaskID:(NSUInteger)arg2 ;
+(void)cancelRequest:(NSInteger)arg0 ;


@end


#endif