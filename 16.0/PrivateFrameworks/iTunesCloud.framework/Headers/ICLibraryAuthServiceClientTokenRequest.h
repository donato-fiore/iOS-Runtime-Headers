// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICLIBRARYAUTHSERVICECLIENTTOKENREQUEST_H
#define ICLIBRARYAUTHSERVICECLIENTTOKENREQUEST_H



#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"
#import "ICLibraryAuthServiceClientTokenResponse.h"

@interface ICLibraryAuthServiceClientTokenRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    ICLibraryAuthServiceClientTokenResponse *_response;
}




-(id)initWithStoreRequestContext:(id)arg0 ;
-(void)execute;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif