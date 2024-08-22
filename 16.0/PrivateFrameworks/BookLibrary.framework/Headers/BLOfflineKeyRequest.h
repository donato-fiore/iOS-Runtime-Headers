// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLOFFLINEKEYREQUEST_H
#define BLOFFLINEKEYREQUEST_H

@class ICRequestOperation, ICStoreRequestContext, ICStoreHLSAssetInfo, MPMediaItem, NSString, NSData;


#import "BLStoreItemMetadataRequest.h"
#import "BLSecureOfflineKeyDeliveryRequest.h"

@interface BLOfflineKeyRequest : ICRequestOperation {
    BLStoreItemMetadataRequest *_metadataRequest;
    ICStoreRequestContext *_requestContext;
    ICStoreHLSAssetInfo *_assetInfo;
    BLSecureOfflineKeyDeliveryRequest *_secureKeyRequest;
    MPMediaItem *_mediaItem;
    NSString *_identity;
    NSData *_persistentKeyData;
}




-(id)initWithMediaItem:(id)arg0 identity:(id)arg1 ;
-(void)_performOfflineKeyRequest;
-(void)dealloc;
-(void)execute;
-(void)finishWithError:(id)arg0 ;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif