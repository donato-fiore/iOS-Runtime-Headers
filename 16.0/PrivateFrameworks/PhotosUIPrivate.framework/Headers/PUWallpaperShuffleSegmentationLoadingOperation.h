// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUWALLPAPERSHUFFLESEGMENTATIONLOADINGOPERATION_H
#define PUWALLPAPERSHUFFLESEGMENTATIONLOADINGOPERATION_H

@class PXAsyncOperation, NSURL, NSError, PISegmentationLoader, NSString, PHPhotoLibrary, PFPosterMedia;
@protocol PISegmentationItem;



@interface PUWallpaperShuffleSegmentationLoadingOperation : PXAsyncOperation

@property (readonly, nonatomic) NSURL *assetDirectory; // ivar: _assetDirectory
@property (copy, nonatomic) id *downloadProgressHandler; // ivar: _downloadProgressHandler
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL isPreloading; // ivar: _isPreloading
@property (retain, nonatomic) PISegmentationLoader *loader; // ivar: _loader
@property (readonly, copy, nonatomic) NSString *operationType; // ivar: _operationType
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) PFPosterMedia *posterMedia; // ivar: _posterMedia
@property (retain, nonatomic) NSObject<PISegmentationItem> *segmentationItem; // ivar: _segmentationItem


-(BOOL)px_shouldWaitForCancel;
-(BOOL)tryLoadSegmentationFromDirectory;
-(id)initWithPosterMedia:(id)arg0 assetDirectory:(id)arg1 photoLibrary:(id)arg2 isPreloading:(BOOL)arg3 ;
-(void)_handleSegmentationResult:(id)arg0 forAssetUUID:(id)arg1 loadingError:(id)arg2 ;
-(void)cancel;
-(void)px_finishIfPossible;
-(void)px_start;


@end


#endif