// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICBUYPRODUCTREQUEST_H
#define ICBUYPRODUCTREQUEST_H

@class NSDictionary;


#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"
#import "ICStoreURLRequest.h"

@interface ICBuyProductRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    ICStoreURLRequest *_storeURLRequest;
    NSDictionary *_buyParameters;
    BOOL _includeKeybagSyncData;
    id *_parsedResponse;
}




-(id)initWithRequestContext:(id)arg0 buyParameters:(id)arg1 includeKeybagSyncData:(BOOL)arg2 ;
-(id)initWithRequestContext:(id)arg0 buyParametersString:(id)arg1 includeKeybagSyncData:(BOOL)arg2 ;
-(void)cancel;
-(void)execute;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif