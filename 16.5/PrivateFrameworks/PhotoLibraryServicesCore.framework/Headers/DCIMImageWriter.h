// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DCIMIMAGEWRITER_H
#define DCIMIMAGEWRITER_H


#import <Foundation/Foundation.h>


@interface DCIMImageWriter : NSObject



+(BOOL)isLivePhotoFilteredVideoPath:(id)arg0 ;
+(id)defaultFileExtensionForAssetType:(short)arg0 ;
+(id)filteredVideoPathForRecordedLivePhotoVideoPath:(id)arg0 ;
+(id)incomingDirectoryPath;
+(id)incomingDirectoryPathForPhotoStream;
+(id)preferredFileExtensionForType:(id)arg0 ;
+(id)recordedVideoPathForFilteredLivePhotoVideoPath:(id)arg0 ;
+(id)sharedDCIMWriter;
+(id)uniqueIncomingPathForAssetWithUUID:(id)arg0 andExtension:(id)arg1 isPhotoStream:(BOOL)arg2 ;
+(short)savedAssetTypeForCameraCapturedAsset;
+(short)savedAssetTypeForPhotoBoothAsset;
+(void)writeableDataForImage:(id)arg0 previewImage:(id)arg1 imageData:(id)arg2 imageUTIType:(id)arg3 imageSource:(struct CGImageSource *)arg4 exifProperties:(id)arg5 imageOrientation:(NSInteger)arg6 thumbnailDataOut:(*id)arg7 imageUTITypeOut:(*id)arg8 exifPropertiesOut:(*id)arg9 isJPEGOut:(*BOOL)arg10 imageDataOut:(*id)arg11 ;
+(void)writeableDataForImageData:(id)arg0 imageUTIType:(id)arg1 imageSource:(struct CGImageSource *)arg2 thumbnailDataOut:(*id)arg3 imageUTITypeOut:(*id)arg4 exifPropertiesOut:(*id)arg5 imageDataOut:(*id)arg6 ;
-(BOOL)_writeJPEGToURL:(id)arg0 withData:(id)arg1 thumbnail:(id)arg2 properties:(id)arg3 duringBurst:(BOOL)arg4 ;
-(BOOL)saveImageJobToDisk:(id)arg0 ;
-(BOOL)writeJPEGToURL:(id)arg0 withData:(id)arg1 thumbnail:(id)arg2 properties:(id)arg3 ;
-(id)_cameraAssetExtensionForType:(short)arg0 ;
-(int)copyPrimaryFormatImageData:(id)arg0 toURL:(id)arg1 properties:(id)arg2 ;
-(void)_writeJPEGFromIOSurface:(struct __IOSurface *)arg0 toPath:(id)arg1 orientation:(NSInteger)arg2 ;


@end


#endif