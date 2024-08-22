// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSECUREOFFLINEKEYDELIVERYREQUEST_H
#define BLSECUREOFFLINEKEYDELIVERYREQUEST_H

@class ICRequestOperation, AVContentKeySession, ICStoreRequestContext, NSData, AVContentKeyRequest, AVPersistableContentKeyRequest, NSString, NSURL, MPMediaItem;
@protocol AVContentKeySessionDelegate, OS_dispatch_queue;


#import "_BLAcquireSlotRequest.h"

@interface BLSecureOfflineKeyDeliveryRequest : ICRequestOperation <AVContentKeySessionDelegate>

 {
    AVContentKeySession *_keySession;
    NSObject<OS_dispatch_queue> *_keySessionQueue;
    ICStoreRequestContext *_requestContext;
    NSData *_persistentKeyData;
    NSData *_certificateData;
    _BLAcquireSlotRequest *_slotRequest;
    AVContentKeyRequest *_activeKeyRequest;
    AVPersistableContentKeyRequest *_activePersistableKeyRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identity; // ivar: _identity
@property (copy, nonatomic) NSURL *keyCertificateURL; // ivar: _keyCertificateURL
@property (copy, nonatomic) NSURL *keyServerURL; // ivar: _keyServerURL
@property (retain, nonatomic) MPMediaItem *mediaItem; // ivar: _mediaItem
@property (readonly) Class superclass;


-(id)_deviceGUID;
-(id)init;
-(id)initWithRequestContext:(id)arg0 ;
-(void)_createSPCData;
-(void)_ksq_fetchCKCDataUsingSPC:(id)arg0 forKeyRequest:(id)arg1 ;
-(void)contentKeySession:(id)arg0 contentKeyRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)contentKeySession:(id)arg0 didProvideContentKeyRequest:(id)arg1 ;
-(void)contentKeySession:(id)arg0 didProvidePersistableContentKeyRequest:(id)arg1 ;
-(void)execute;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif