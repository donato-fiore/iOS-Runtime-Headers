// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSAGAGETACCOUNTSTATUSREQUEST_H
#define ICSAGAGETACCOUNTSTATUSREQUEST_H



#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"

@interface ICSagaGetAccountStatusRequest : ICRequestOperation {
    ICStoreRequestContext *_storeRequestContext;
    BOOL _isEnabled;
    BOOL _canSubscribe;
    BOOL _isSubscriber;
}




-(id)initWithStoreRequestContext:(id)arg0 ;
-(void)execute;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif