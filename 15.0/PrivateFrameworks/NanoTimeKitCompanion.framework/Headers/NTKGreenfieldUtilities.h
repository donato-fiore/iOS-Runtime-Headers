// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKGREENFIELDUTILITIES_H
#define NTKGREENFIELDUTILITIES_H


#import <Foundation/Foundation.h>


@interface NTKGreenfieldUtilities : NSObject



+(BOOL)shouldAutoDismissViewControllerForAddFaceFlow:(id)arg0 ;
+(BOOL)shouldPresentUnreleasedFeaturesInternalWarningForFace:(id)arg0 ;
+(BOOL)validateFaceType:(id)arg0 faceBundleId:(id)arg1 ;
+(id)_addGenericDeviceBorderToWatchFaceImage:(id)arg0 includesTransparentPadding:(BOOL)arg1 ;
+(id)_addGreyBorderToWatchFaceImage:(id)arg0 ;
+(id)_companionAppIdFromWatchAppBundleId:(id)arg0 ;
+(id)_decodeFaceFromDataPath:(id)arg0 ;
+(id)_greenfieldWatchFaceJsonForFace:(id)arg0 ;
+(id)_metadataDictForWatchFace:(id)arg0 slotToSampleTemplateMapping:(id)arg1 slotToItemIdMapping:(id)arg2 slotToBundleIdMapping:(id)arg3 watchFaceDataPath:(id)arg4 ;
+(id)_queue_encodeDraftRecipe:(id)arg0 ;
+(id)_queue_greenfieldPreviewFromUrl:(id)arg0 ;
+(id)_queue_snapshotFace:(id)arg0 borderType:(NSUInteger)arg1 ;
+(id)addBorder:(NSUInteger)arg0 toWatchFaceImage:(id)arg1 ;
+(id)createXPCServiceConnection;
+(id)encodeQueue;
+(id)temporaryGreenfieldDirectory;
+(id)temporaryGreenfieldNoBordersSnapshotPath;
+(id)unzipWatchFaceFileAtUrl:(id)arg0 ;
+(void)_updateSystemDeletableAppItemIdForSlotToItemIdMapping:(id)arg0 face:(id)arg1 ;
+(void)decodeWatchFaceFromUrl:(id)arg0 completionBlock:(id)arg1 ;
+(void)encodeRecipeFromDraftRecipe:(id)arg0 completionBlock:(id)arg1 ;
+(void)generateFacePreviewImageFromDraftRecipe:(id)arg0 borderType:(NSUInteger)arg1 completionBlock:(id)arg2 ;
+(void)generateFacePreviewImageFromDraftRecipe:(id)arg0 completionBlock:(id)arg1 ;
+(void)generateFacePreviewImageFromUrl:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif