// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHIMAGEMANAGER_H
#define PHIMAGEMANAGER_H

@class NSMapTable, NSString;
@protocol PHMediaRequestContextDelegate;

#import <Foundation/Foundation.h>

#import "PHPhotoLibrary.h"

@interface PHImageManager : NSObject <PHMediaRequestContextDelegate>

 {
    NSMapTable *_requestContextsByID;
    uint8_t _nextRequestID;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger managerID; // ivar: _managerID
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;


+(BOOL)_allowVideoAccessForAsset:(id)arg0 options:(id)arg1 ;
+(NSUInteger)_nextManagerID;
+(id)_videoAVObjectBuilderFromVideoURL:(id)arg0 info:(id)arg1 options:(id)arg2 playbackOnly:(BOOL)arg3 ;
+(id)defaultManager;
+(void)buildAVAssetFromVideoURL:(id)arg0 infoDictionary:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
+(void)buildAVPlayerItemFromVideoURL:(id)arg0 infoDictionary:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
+(void)buildExportSessionFromVideoURL:(id)arg0 infoDictionary:(id)arg1 options:(id)arg2 exportPreset:(id)arg3 completion:(id)arg4 ;
-(BOOL)_canStreamVideoForAsset:(id)arg0 ;
-(BOOL)_shouldUseRAWResourceAsUnadjustedBaseForAsset:(id)arg0 options:(id)arg1 ;
-(id)init;
-(id)synchronousImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 ;
-(int)_requestImagePropertiesFromFileForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)_requestLiveRenderAVAssetForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)nextID;
-(int)requestAVAssetForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestAVAssetForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestAVProxyForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestAnimatedImageForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestContentEditingInputForAsset:(id)arg0 withOptions:(id)arg1 completionHandler:(id)arg2 ;
-(int)requestExportSessionForVideo:(id)arg0 options:(id)arg1 exportPreset:(id)arg2 resultHandler:(id)arg3 ;
-(int)requestImageDataAndOrientationForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestImageDataForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(int)requestImagePropertiesForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestLivePhotoForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(int)requestNewCGImageForAsset:(id)arg0 targetSize:(struct CGSize )arg1 contentMode:(NSInteger)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(int)requestPlayerItemForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestURLForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)runRequestWithContext:(id)arg0 ;
-(void)_prepareLivePhotoResultWithImage:(struct CGImage *)arg0 uiOrientation:(NSInteger)arg1 shouldIncludeVideo:(BOOL)arg2 videoURL:(id)arg3 info:(id)arg4 photoTime:(struct ? )arg5 asset:(id)arg6 completion:(id)arg7 ;
-(void)_runBlockOnAppropriateResultQueueOrSynchronouslyWithRequest:(id)arg0 options:(id)arg1 block:(id)arg2 ;
-(void)additionalWorkForImageRequestCompletedWithResult:(id)arg0 request:(id)arg1 context:(id)arg2 ;
-(void)cancelImageRequest:(int)arg0 ;
-(void)mediaRequestContext:(id)arg0 isQueryingCacheForRequest:(id)arg1 didWait:(*BOOL)arg2 didFindImage:(*BOOL)arg3 resultHandler:(id)arg4 ;
-(void)mediaRequestContextDidFinish:(id)arg0 ;


@end


#endif