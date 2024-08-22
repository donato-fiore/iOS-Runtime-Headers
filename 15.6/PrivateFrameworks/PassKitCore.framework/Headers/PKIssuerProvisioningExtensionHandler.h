// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKISSUERPROVISIONINGEXTENSIONHANDLER_H
#define PKISSUERPROVISIONINGEXTENSIONHANDLER_H

@class NSString;
@protocol NSExtensionRequestHandling;

#import <Foundation/Foundation.h>


@interface PKIssuerProvisioningExtensionHandler : NSObject <NSExtensionRequestHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)generateAddPaymentPassRequestForPassEntryWithIdentifier:(id)arg0 configuration:(id)arg1 certificateChain:(id)arg2 nonce:(id)arg3 nonceSignature:(id)arg4 completionHandler:(id)arg5 ;
-(void)passEntriesWithCompletion:(id)arg0 ;
-(void)remotePassEntriesWithCompletion:(id)arg0 ;
-(void)statusWithCompletion:(id)arg0 ;


@end


#endif