// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDRESOURCESERVICE_H
#define PLASSETSDRESOURCESERVICE_H

@class NSString;
@protocol PLAssetsdResourceServiceProtocol, OS_dispatch_queue;


#import "PLAssetsdResourceWriteOnlyService.h"
#import "PLAssetsdCPLResourceDownloader.h"

@interface PLAssetsdResourceService : PLAssetsdResourceWriteOnlyService <PLAssetsdResourceServiceProtocol>

 {
    NSObject<OS_dispatch_queue> *_asyncImageDataQueue;
    PLAssetsdCPLResourceDownloader *_resourceDownloader;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_consolidateResource:(id)arg0 assetUUID:(id)arg1 error:(*id)arg2 ;
-(id)_typeFromPathConstrainedToImageOrMovie:(id)arg0 ;
-(id)consolidateAssets:(id)arg0 reply:(id)arg1 ;
-(id)initWithLibraryServicesManager:(id)arg0 connectionAuthorization:(id)arg1 resourceDownloader:(id)arg2 ;
-(void)addAssetGroupWithName:(id)arg0 reply:(id)arg1 ;
-(void)addAssetWithURL:(id)arg0 toAlbum:(id)arg1 reply:(id)arg2 ;
-(void)asynchronousAdjustmentDataForAsset:(id)arg0 networkAccessAllowed:(BOOL)arg1 withDataBlob:(BOOL)arg2 reply:(id)arg3 ;
-(void)downloadCloudSharedAsset:(id)arg0 wantedPlaceholderkind:(short)arg1 shouldPrioritize:(BOOL)arg2 shouldExtendTimer:(BOOL)arg3 reply:(id)arg4 ;
-(void)estimatedFileLengthOfVideo:(id)arg0 fallbackFilePath:(id)arg1 exportPreset:(id)arg2 exportProperties:(id)arg3 reply:(id)arg4 ;
-(void)fileDescriptorForPersistentURL:(id)arg0 withAdjustments:(BOOL)arg1 reply:(id)arg2 ;
-(void)filePathForPersistentURL:(id)arg0 withAdjustments:(BOOL)arg1 reply:(id)arg2 ;
-(void)getSandboxExtensionForFileSystemBookmark:(id)arg0 reply:(id)arg1 ;
-(void)getSandboxExtensionsForAssetWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)imageDataForAssetWithObjectURI:(id)arg0 formatID:(unsigned short)arg1 allowPlaceholder:(BOOL)arg2 wantURLOnly:(BOOL)arg3 networkAccessAllowed:(BOOL)arg4 trackCPLDownload:(BOOL)arg5 reply:(id)arg6 ;
-(void)projectExtensionDataForProjectUuid:(id)arg0 reply:(id)arg1 ;
-(void)saveAssetWithDataAndPorts:(id)arg0 imageSurface:(id)arg1 previewImageSurface:(id)arg2 reply:(id)arg3 ;
-(void)translatePersistentURL:(id)arg0 withAdjustments:(BOOL)arg1 handler:(id)arg2 ;
-(void)updateInternalResourcePath:(id)arg0 objectURI:(id)arg1 sandboxExtension:(id)arg2 reply:(id)arg3 ;


@end


#endif