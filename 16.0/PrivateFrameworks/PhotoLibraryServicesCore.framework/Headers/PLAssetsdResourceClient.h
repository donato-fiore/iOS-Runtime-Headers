// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLASSETSDRESOURCECLIENT_H
#define PLASSETSDRESOURCECLIENT_H



#import "PLAssetsdBaseClient.h"

@interface PLAssetsdResourceClient : PLAssetsdBaseClient



-(BOOL)estimatedOutputFileLengthForVideoURL:(id)arg0 fallbackFilePath:(id)arg1 exportPreset:(id)arg2 exportProperties:(id)arg3 outFileLength:(*NSInteger)arg4 error:(*id)arg5 ;
-(BOOL)fileDescriptorForAssetURL:(id)arg0 withAdjustments:(BOOL)arg1 fileExtension:(*id)arg2 fileDescriptor:(*int)arg3 error:(*id)arg4 ;
-(BOOL)fileURLForAssetURL:(id)arg0 withAdjustments:(BOOL)arg1 fileURL:(*id)arg2 error:(*id)arg3 ;
-(BOOL)imageDataForAsset:(id)arg0 format:(int)arg1 allowPlaceholder:(BOOL)arg2 wantURLOnly:(BOOL)arg3 networkAccessAllowed:(BOOL)arg4 trackCPLDownload:(BOOL)arg5 outImageData:(*id)arg6 outImageDataInfo:(*id)arg7 outCPLDownloadContext:(*id)arg8 error:(*id)arg9 ;
-(BOOL)sandboxExtensionForFileSystemBookmark:(id)arg0 bookmarkURL:(*id)arg1 sandboxExtensionToken:(*id)arg2 error:(*id)arg3 ;
-(BOOL)sandboxExtensionsForAssetWithUUID:(id)arg0 sandboxExtensionTokens:(*id)arg1 error:(*id)arg2 ;
-(BOOL)updateInternalResourcePath:(id)arg0 objectURI:(id)arg1 error:(*id)arg2 ;
-(id)consolidateAssets:(id)arg0 completionHandler:(id)arg1 ;
-(id)projectExtensionDataForProjectUuid:(id)arg0 ;
-(void)addAssetWithURL:(id)arg0 toAlbumWithUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)addGroupWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)adjustmentDataForAsset:(id)arg0 networkAccessAllowed:(BOOL)arg1 trackCPLDownload:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)downloadCloudSharedAsset:(id)arg0 withCloudPlaceholderKind:(NSUInteger)arg1 shouldPrioritize:(BOOL)arg2 shouldExtendTimer:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)imageDataForAsset:(id)arg0 format:(int)arg1 allowPlaceholder:(BOOL)arg2 wantURLOnly:(BOOL)arg3 networkAccessAllowed:(BOOL)arg4 trackCPLDownload:(BOOL)arg5 completionHandler:(id)arg6 ;
-(void)saveAssetWithJobDictionary:(id)arg0 imageSurface:(struct __IOSurface *)arg1 previewImageSurface:(struct __IOSurface *)arg2 completionHandler:(id)arg3 ;


@end


#endif