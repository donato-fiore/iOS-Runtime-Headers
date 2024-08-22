// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATSTOREMUSICDOWNLOADASSETSOPERATION_H
#define ATSTOREMUSICDOWNLOADASSETSOPERATION_H

@class ICMediaAssetDownloadRequest;


#import "ATStoreDownloadAssetsOperation.h"

@interface ATStoreMusicDownloadAssetsOperation : ATStoreDownloadAssetsOperation {
    ICMediaAssetDownloadRequest *_assetDownloadRequest;
}




-(NSUInteger)_maximumSampleRateForResolutionPreference:(NSInteger)arg0 ;
-(NSUInteger)_minimumBitrateForResolutionPreference:(NSInteger)arg0 ;
-(void)_getStorageSpaceAvailableForMediaResponseItem:(id)arg0 completion:(id)arg1 ;
-(void)cancel;
-(void)execute;
-(void)finishWithError:(id)arg0 operationResult:(id)arg1 ;


@end


#endif