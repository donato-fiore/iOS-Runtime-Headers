// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVSUBSCRIPTIONSTATUSREQUEST_H
#define SSVSUBSCRIPTIONSTATUSREQUEST_H

@class NSString;
@protocol SSXPCCoding;


#import "SSRequest.h"
#import "SSAuthenticationContext.h"

@interface SSVSubscriptionStatusRequest : SSRequest <SSXPCCoding>



@property (nonatomic) BOOL authenticatesIfNecessary; // ivar: _authenticatesIfNecessary
@property (copy, nonatomic) SSAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property (nonatomic) NSInteger carrierBundleProvisioningStyle; // ivar: _carrierBundleProvisioningStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *localizedAuthenticationReason; // ivar: _localizedAuthenticationReason
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


+(BOOL)_allowMultipleCallbacks;
+(NSInteger)requestMessage;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;
-(void)startWithStatusResponseBlock:(id)arg0 ;


@end


#endif