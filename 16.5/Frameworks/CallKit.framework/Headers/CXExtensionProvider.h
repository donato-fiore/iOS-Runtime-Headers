// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXEXTENSIONPROVIDER_H
#define CXEXTENSIONPROVIDER_H

@class NSString;
@protocol CXProviderExtensionVendorContextDelegate, NSExtensionRequestHandling;


#import "CXProvider.h"
#import "CXProviderExtensionVendorContext.h"

@interface CXExtensionProvider : CXProvider <CXProviderExtensionVendorContextDelegate, NSExtensionRequestHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CXProviderExtensionVendorContext *extensionContext; // ivar: _extensionContext
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)requiresProxyingAVAudioSessionState;
-(id)hostProtocolDelegate;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)invalidate;
-(void)providerExtensionVendorContext:(id)arg0 handledActionTimeout:(id)arg1 ;
-(void)providerExtensionVendorContext:(id)arg0 handledAudioSessionActivationStateChangedTo:(BOOL)arg1 ;
-(void)providerExtensionVendorContext:(id)arg0 receivedCommittedTransaction:(id)arg1 ;


@end


#endif