// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATSTOREPODCASTDOWNLOADASSETSOPERATION_H
#define ATSTOREPODCASTDOWNLOADASSETSOPERATION_H

@class ICURLSession, ICAVAssetDownloadURLSession, ICURLRequest, AVURLAsset, PFSecureDownloadRenewalManager;


#import "ATStoreDownloadAssetsOperation.h"

@interface ATStorePodcastDownloadAssetsOperation : ATStoreDownloadAssetsOperation {
    ICURLSession *_session;
    ICAVAssetDownloadURLSession *_hlsSession;
    ICURLRequest *_request;
    AVURLAsset *_hlsAsset;
    PFSecureDownloadRenewalManager *_renewalManager;
}




-(id)_downloadConfigurationWithSessionIdentifier:(id)arg0 isHLS:(BOOL)arg1 ;
-(id)_icavUrlSession;
-(id)_urlSession;
-(id)secureDownloadRenewalManager;
-(void)_deleteHLSKey;
-(void)_getContentKeyForAssetWithCompletionHandler:(id)arg0 ;
-(void)_moveAssetToPurchasesDirectoryFromTmpPath:(id)arg0 downloadError:(id)arg1 isHLSAsset:(BOOL)arg2 ;
-(void)cancel;
-(void)execute;
-(void)finishWithError:(id)arg0 operationResult:(id)arg1 ;


@end


#endif