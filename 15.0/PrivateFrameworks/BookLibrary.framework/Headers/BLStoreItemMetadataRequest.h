// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLSTOREITEMMETADATAREQUEST_H
#define BLSTOREITEMMETADATAREQUEST_H

@class ICRequestOperation, ICStoreRequestContext, MPMediaItem, ICBuyProductRequest, ICStoreMediaResponseItem;



@interface BLStoreItemMetadataRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    MPMediaItem *_mediaItem;
    ICBuyProductRequest *_buyProductRequest;
    ICStoreMediaResponseItem *_storeMetadata;
}




-(id)_responseDictionaryForKeyCertificateURL:(id)arg0 keyServerURL:(id)arg1 ;
-(id)initWithRequestContext:(id)arg0 mediaItem:(id)arg1 ;
-(void)_performBuyProductRequest;
-(void)execute;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif