// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSTREAMINGKEYREQUEST_H
#define BLSTREAMINGKEYREQUEST_H

@class ICRequestOperation, ICSecureKeyDeliveryRequest, MPMediaItem, AVAssetResourceLoadingRequest;


#import "BLStoreItemMetadataRequest.h"

@interface BLStreamingKeyRequest : ICRequestOperation {
    BLStoreItemMetadataRequest *_metadataRequest;
    ICSecureKeyDeliveryRequest *_secureKeyRequest;
    MPMediaItem *_mediaItem;
    AVAssetResourceLoadingRequest *_loadingRequest;
}




-(id)initWithMediaItem:(id)arg0 loadingRequest:(id)arg1 ;
-(void)_performStreamingKeyRequestForHLSAsset:(id)arg0 ;
-(void)execute;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif