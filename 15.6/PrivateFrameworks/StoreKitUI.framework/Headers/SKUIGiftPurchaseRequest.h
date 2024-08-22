// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIGIFTPURCHASEREQUEST_H
#define SKUIGIFTPURCHASEREQUEST_H


#import <Foundation/Foundation.h>

#import "SKUIURLConnectionRequest.h"

@interface SKUIGiftPurchaseRequest : NSObject {
    SKUIURLConnectionRequest *_request;
}




-(id)_requestWithURL:(id)arg0 bodyDictionary:(id)arg1 ;
-(id)initWithDonation:(id)arg0 configuration:(id)arg1 ;
-(id)initWithGift:(id)arg0 configuration:(id)arg1 ;
-(void)purchaseWithCompletionBlock:(id)arg0 ;


@end


#endif