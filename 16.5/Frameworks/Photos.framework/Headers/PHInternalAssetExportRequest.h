// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHINTERNALASSETEXPORTREQUEST_H
#define PHINTERNALASSETEXPORTREQUEST_H

@class NSProgress;
@protocol OS_dispatch_queue;


#import "PHAssetExportRequest.h"
#import "PHResourceLocalAvailabilityRequest.h"

@interface PHInternalAssetExportRequest : PHAssetExportRequest {
    PHResourceLocalAvailabilityRequest *_resourceRetrievalRequest;
    NSProgress *_resourceRetrievalRequestProgressParent;
    NSObject<OS_dispatch_queue> *_resourceRetrievingQueue;
}




+(id)_variantsForAsset:(id)arg0 error:(*id)arg1 ;
+(id)exportRequestForAsset:(id)arg0 error:(*id)arg1 ;
+(id)exportRequestForAsset:(id)arg0 variants:(id)arg1 error:(*id)arg2 ;
-(id)_initWithAsset:(id)arg0 variants:(id)arg1 resourceRetrievalRequest:(id)arg2 retrievalRequestProgressParent:(id)arg3 ;
-(void)exportWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)preflightExportWithOptions:(id)arg0 assetAvailability:(*NSInteger)arg1 isProcessingRequired:(*BOOL)arg2 fileURLs:(*id)arg3 info:(*id)arg4 ;


@end


#endif