// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHCLOUDSHAREDASSETEXPORTREQUEST_H
#define PHCLOUDSHAREDASSETEXPORTREQUEST_H

@protocol OS_dispatch_queue;


#import "PHAssetExportRequest.h"

@interface PHCloudSharedAssetExportRequest : PHAssetExportRequest {
    int _imageManagerImageRequestId;
    int _imageManagerVideoRequestId;
    NSObject<OS_dispatch_queue> *_resourceRetrievingQueue;
}




+(id)exportRequestForAsset:(id)arg0 error:(*id)arg1 ;
-(id)initWithAsset:(id)arg0 variants:(id)arg1 ;
// -(int)_requestImageURLForAsset:(id)arg0 networkAccessAllowed:(BOOL)arg1 progressHandler:(id)arg2 resultHandler:(unk)arg3  ;
// -(int)_requestVideoURLForAsset:(id)arg0 networkAccessAllowed:(BOOL)arg1 progressHandler:(id)arg2 resultHandler:(unk)arg3  ;
-(void)_handleImageManagerResultForAsset:(id)arg0 networkAccessAllowed:(BOOL)arg1 progress:(id)arg2 processingUnitCount:(NSUInteger)arg3 options:(id)arg4 withFileUrls:(id)arg5 info:(id)arg6 completionHandler:(id)arg7 ;
// -(void)_requestFileURLsForAsset:(id)arg0 withOptions:(id)arg1 networkAccessAllowed:(BOOL)arg2 progressHandler:(id)arg3 resultHandler:(unk)arg4  ;
// -(void)_requestLivePhotoURLsForAsset:(id)arg0 networkAccessAllowed:(BOOL)arg1 progressHandler:(id)arg2 resultHandler:(unk)arg3  ;
-(void)exportWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)exportWithOptions:(id)arg0 networkAccessAllowed:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)preflightExportWithOptions:(id)arg0 assetAvailability:(*NSInteger)arg1 isProcessingRequired:(*BOOL)arg2 fileURLs:(*id)arg3 info:(*id)arg4 ;


@end


#endif