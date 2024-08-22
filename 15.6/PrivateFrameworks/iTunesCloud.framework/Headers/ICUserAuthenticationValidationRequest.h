// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICUSERAUTHENTICATIONVALIDATIONREQUEST_H
#define ICUSERAUTHENTICATIONVALIDATIONREQUEST_H


#import <Foundation/Foundation.h>

#import "ICStoreRequestContext.h"

@interface ICUserAuthenticationValidationRequest : NSObject {
    ICStoreRequestContext *_requestContext;
}




-(id)initWithRequestContext:(id)arg0 ;
-(id)initWithUserIdentity:(id)arg0 ;
-(void)performWithCompletion:(id)arg0 ;


@end


#endif