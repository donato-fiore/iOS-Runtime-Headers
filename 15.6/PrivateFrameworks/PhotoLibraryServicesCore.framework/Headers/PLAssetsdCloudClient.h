// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETSDCLOUDCLIENT_H
#define PLASSETSDCLOUDCLIENT_H



#import "PLAssetsdBaseClient.h"

@interface PLAssetsdCloudClient : PLAssetsdBaseClient



-(void)cancelCPLDownloadImageDataWithVirtualTaskIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancelCPLDownloadWithContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)computeFingerPrintsOfAsset:(id)arg0 synchronously:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)downloadCloudPhotoLibraryAsset:(id)arg0 resourceType:(NSUInteger)arg1 highPriority:(BOOL)arg2 trackCPLDownload:(BOOL)arg3 downloadIsTransient:(BOOL)arg4 proposedTaskIdentifier:(id)arg5 completionHandler:(id)arg6 ;
-(void)requestCPLDownloadImageDataForAssets:(id)arg0 format:(NSUInteger)arg1 doneTokens:(id)arg2 completionHandler:(id)arg3 ;
-(void)requestVideoPlaybackURLForCloudSharedAsset:(id)arg0 mediaAssetType:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif