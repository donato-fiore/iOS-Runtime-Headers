// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEEXTENSIONAPPPUSHPROVIDERHOSTCONTEXT_H
#define NEEXTENSIONAPPPUSHPROVIDERHOSTCONTEXT_H

@class NSString;
@protocol NEExtensionAppPushProviderProtocol, NEExtensionAppPushProviderHostProtocol;


#import "NEExtensionProviderHostContext.h"

@interface NEExtensionAppPushProviderHostContext : NEExtensionProviderHostContext <NEExtensionAppPushProviderProtocol, NEExtensionAppPushProviderHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(int)requiredEntitlement;
-(void)reportIncomingCall:(id)arg0 ;
-(void)reportPushToTalkMessage:(id)arg0 ;
-(void)sendOutgoingCallMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendTimerEvent;
-(void)setProviderConfiguration:(id)arg0 ;
-(void)startConnectionWithProviderConfig:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopWithReason:(int)arg0 completionHandler:(id)arg1 ;


@end


#endif