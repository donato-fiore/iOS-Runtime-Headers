// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ALASSETSLIBRARY_H
#define ALASSETSLIBRARY_H


#import <Foundation/Foundation.h>

#import "ALAssetsLibraryPrivate.h"

@interface ALAssetsLibrary : NSObject

@property (retain, nonatomic) ALAssetsLibraryPrivate *internal; // ivar: _internal


+(BOOL)_linkedBefore7;
+(NSInteger)_estimatedOutputFileLengthForVideoFilePath:(id)arg0 metadata:(id)arg1 exportPreset:(id)arg2 exportProperties:(id)arg3 ;
+(NSInteger)_estimatedOutputFileLengthForVideoURL:(id)arg0 fallbackFilePath:(id)arg1 exportPreset:(id)arg2 exportProperties:(id)arg3 ;
+(NSInteger)authorizationStatus;
+(id)_albumsInLibrary:(id)arg0 ;
+(id)_exportSessionForVideoFilePath:(id)arg0 metadata:(id)arg1 exportPreset:(id)arg2 ;
+(id)_exportSessionForVideoURL:(id)arg0 fallbackFilePath:(id)arg1 exportPreset:(id)arg2 ;
+(id)_filePathForVideoURL:(id)arg0 outMetadata:(*id)arg1 ;
+(id)_library;
+(id)_playerItemForVideoFilePath:(id)arg0 metadata:(id)arg1 ;
+(id)_playerItemForVideoURL:(id)arg0 fallbackFilePath:(id)arg1 ;
+(struct CGImage *)_aspectRatioThumbnailForAssetURL:(id)arg0 ;
+(struct CGImage *)_thumbnailForAssetURL:(id)arg0 ;
+(void)disableSharedPhotoStreamsSupport;
-(BOOL)isValid;
-(BOOL)videoAtPathIsCompatibleWithSavedPhotosAlbum:(id)arg0 ;
-(id)_copyGroupForURL:(id)arg0 ;
-(id)init;
-(id)publicErrorForPrivateDomain:(id)arg0 withPrivateCode:(NSInteger)arg1 ;
-(id)publicErrorFromPrivateError:(id)arg0 ;
-(void)_addGroupForAlbum:(id)arg0 ofType:(NSUInteger)arg1 toArray:(id)arg2 ;
-(void)_performBlock:(id)arg0 ;
-(void)_performBlockAndWait:(id)arg0 ;
-(void)_setBundlePropertiesOnPropertiesDictionary:(id)arg0 ;
-(void)_writeImageToSavedPhotosAlbum:(struct CGImage *)arg0 orientation:(NSInteger)arg1 imageData:(id)arg2 metadata:(id)arg3 internalProperties:(id)arg4 completionBlock:(id)arg5 ;
-(void)_writeVideoAtPathToSavedPhotosAlbum:(id)arg0 internalProperties:(id)arg1 completionBlock:(id)arg2 ;
// -(void)addAssetsGroupAlbumWithName:(id)arg0 resultBlock:(id)arg1 failureBlock:(unk)arg2  ;
// -(void)assetForURL:(id)arg0 resultBlock:(id)arg1 failureBlock:(unk)arg2  ;
-(void)checkPhotosAccessAllowedWithScope:(NSInteger)arg0 handler:(id)arg1 ;
-(void)dealloc;
// -(void)enumerateGroupsWithTypes:(NSUInteger)arg0 usingBlock:(id)arg1 failureBlock:(unk)arg2  ;
// -(void)groupForURL:(id)arg0 resultBlock:(id)arg1 failureBlock:(unk)arg2  ;
-(void)registerAlbum:(id)arg0 assetGroupPrivate:(id)arg1 ;
-(void)writeImageDataToSavedPhotosAlbum:(id)arg0 metadata:(id)arg1 completionBlock:(id)arg2 ;
-(void)writeImageToSavedPhotosAlbum:(struct CGImage *)arg0 metadata:(id)arg1 completionBlock:(id)arg2 ;
-(void)writeImageToSavedPhotosAlbum:(struct CGImage *)arg0 orientation:(NSInteger)arg1 completionBlock:(id)arg2 ;
-(void)writeVideoAtPathToSavedPhotosAlbum:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif