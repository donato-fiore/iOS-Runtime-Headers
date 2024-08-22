// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICPUSHNOTIFICATIONSREGISTERAPNSTOKENREQUEST_H
#define ICPUSHNOTIFICATIONSREGISTERAPNSTOKENREQUEST_H

@class NSData;


#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"
#import "ICPushNotificationsResponse.h"

@interface ICPushNotificationsRegisterAPNSTokenRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    NSData *_token;
    ICPushNotificationsResponse *_response;
}




-(id)initWithRequestContext:(id)arg0 token:(id)arg1 ;
-(void)execute;
-(void)performRequestWithResponseHandler:(id)arg0 ;


@end


#endif