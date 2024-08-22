// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDCLOUDSERVICE_H
#define PLASSETSDCLOUDSERVICE_H

@class PLLazyObject, NSString;
@protocol PLAssetsdCloudServiceProtocol;


#import "PLAbstractLibraryServicesManagerService.h"

@interface PLAssetsdCloudService : PLAbstractLibraryServicesManagerService <PLAssetsdCloudServiceProtocol>

 {
    PLLazyObject *_lazyResourceDownloader;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithLibraryServicesManager:(id)arg0 lazyResourceDownloader:(id)arg1 ;
-(id)resourceDownloader;
-(void)asynchronousStartPreheatingCPLDownloadForAssets:(id)arg0 doneTokens:(id)arg1 format:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)asynchronousStopPreheatingCPLDownloadForAssetsWithTaskIdentifiers:(id)arg0 reply:(id)arg1 ;
-(void)cancelCPLDownloadTaskWithIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)computeFingerPrintsOfAssetWithObjectURI:(id)arg0 synchronously:(BOOL)arg1 reply:(id)arg2 ;
-(void)downloadCloudPhotoLibraryAssetWithObjectURI:(id)arg0 taskIdentifier:(id)arg1 resourceType:(NSUInteger)arg2 HighPriority:(BOOL)arg3 trackCPLDownload:(BOOL)arg4 downloadIsTransient:(BOOL)arg5 reply:(id)arg6 ;
-(void)requestVideoPlaybackURLForCloudSharedAsset:(id)arg0 mediaAssetType:(NSUInteger)arg1 reply:(id)arg2 ;


@end


#endif