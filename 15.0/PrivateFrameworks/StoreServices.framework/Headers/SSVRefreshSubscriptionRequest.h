// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVREFRESHSUBSCRIPTIONREQUEST_H
#define SSVREFRESHSUBSCRIPTIONREQUEST_H

@class NSString;
@protocol SSXPCCoding;


#import "SSRequest.h"
#import "SSAuthenticationContext.h"

@interface SSVRefreshSubscriptionRequest : SSRequest <SSXPCCoding>



@property (copy, nonatomic) SSAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isRequestingOfflineSlot) BOOL requestingOfflineSlot; // ivar: _requestingOfflineSlot
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;
-(void)startWithResponseBlock:(id)arg0 ;


@end


#endif