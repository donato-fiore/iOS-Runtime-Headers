// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETSSAVER_H
#define PLASSETSSAVER_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface PLAssetsSaver : NSObject {
    NSMutableDictionary *_inProgressAvalancheFds;
}


@property (retain, nonatomic) NSMutableArray *_pendingSaveAssetJobs; // ivar: __pendingSaveAssetJobs


+(id)createWriteImageCompletionBlockWithImage:(SEL)arg0 target:(id)arg1 selector:(id)arg2 contextInfo:(SEL)arg3 ;
+(id)createWriteVideoCompletionBlockWithVideoPath:(SEL)arg0 target:(id)arg1 selector:(id)arg2 contextInfo:(SEL)arg3 ;
+(id)publicAssetsLibraryErrorFromPrivateDomain:(id)arg0 withPrivateCode:(NSInteger)arg1 ;
+(id)publicAssetsLibraryErrorFromPrivateError:(id)arg0 ;
+(id)sharedAssetsSaver;
-(id)_addCameraAssetToLibraryWithPath:(id)arg0 thumbnailImage:(id)arg1 assetUUID:(id)arg2 metadata:(id)arg3 assetType:(short)arg4 kind:(short)arg5 kindSubtype:(short)arg6 avalancheUUID:(id)arg7 completionHandler:(id)arg8 ;
-(id)_assetsdClientForJobDictionary:(id)arg0 ;
-(id)_photoLibrary;
-(id)_saveIsolationQueue;
-(id)init;
-(id)requestSynchronousImageForAssetOID:(id)arg0 withFormat:(int)arg1 allowPlaceholder:(BOOL)arg2 wantURLOnly:(BOOL)arg3 networkAccessAllowed:(BOOL)arg4 trackCPLDownload:(BOOL)arg5 outImageDataInfo:(*id)arg6 outCPLDownloadContext:(*id)arg7 ;
-(id)saveCameraImage:(id)arg0 metadata:(id)arg1 additionalProperties:(id)arg2 diagnostics:(id)arg3 previouslyPendingAsset:(id)arg4 requestEnqueuedBlock:(id)arg5 ;
-(id)validateAvalanches:(id)arg0 inLibraryWithURL:(id)arg1 ;
// -(void)_queueJobDictionary:(id)arg0 asset:(id)arg1 requestEnqueuedBlock:(id)arg2 completionBlock:(unk)arg3 imageSurface:(id)arg4 previewImageSurface:(unk)arg5  ;
-(void)_queueJobDictionary:(id)arg0 completionBlock:(id)arg1 ;
-(void)_saveImage:(id)arg0 imageData:(id)arg1 properties:(id)arg2 completionBlock:(id)arg3 ;
-(void)_saveVideoAtPath:(id)arg0 properties:(id)arg1 completionBlock:(id)arg2 ;
-(void)_setIsTakingPhoto:(BOOL)arg0 ;
-(void)dealloc;
-(void)deletePhotoStreamAssetsWithUUIDs:(id)arg0 streamID:(id)arg1 ;
-(void)deletePhotoStreamDataForStreamID:(id)arg0 ;
-(void)queuePhotoStreamJobDictionary:(id)arg0 ;
-(void)reenqueueAssetUUIDsForPhotoStreamPublication:(id)arg0 ;
-(void)regenerateVideoThumbnailsForVideo:(id)arg0 withCreationDate:(id)arg1 progressStack:(id)arg2 completionBlock:(id)arg3 ;
-(void)requestAsynchronousImageForAssetOID:(id)arg0 withFormat:(int)arg1 allowPlaceholder:(BOOL)arg2 wantURLOnly:(BOOL)arg3 networkAccessAllowed:(BOOL)arg4 trackCPLDownload:(BOOL)arg5 completionBlock:(id)arg6 ;
-(void)saveCameraAvalancheWithUUID:(id)arg0 allAssetUUIDs:(id)arg1 allAssets:(id)arg2 stackAsset:(id)arg3 completionBlock:(id)arg4 ;
-(void)saveCameraImage:(id)arg0 metadata:(id)arg1 additionalProperties:(id)arg2 requestEnqueuedBlock:(id)arg3 ;
// -(void)saveCameraVideoAtPath:(id)arg0 withMetadata:(id)arg1 thumbnailImage:(id)arg2 createPreviewWellImage:(BOOL)arg3 progressStack:(id)arg4 isSlalom:(BOOL)arg5 assetAdjustments:(id)arg6 videoHandler:(id)arg7 requestEnqueuedBlock:(unk)arg8 completionBlock:(id)arg9  ;
-(void)saveImageRef:(struct CGImage *)arg0 orientation:(NSInteger)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(id)arg4 ;
-(void)savePhotoStreamImage:(id)arg0 imageData:(id)arg1 properties:(id)arg2 completionBlock:(id)arg3 ;
-(void)saveSyncedAssets:(id)arg0 completionBlock:(id)arg1 ;
-(void)saveVideoAtPath:(id)arg0 properties:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif