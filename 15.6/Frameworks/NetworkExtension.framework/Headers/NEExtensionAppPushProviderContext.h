// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEEXTENSIONAPPPUSHPROVIDERCONTEXT_H
#define NEEXTENSIONAPPPUSHPROVIDERCONTEXT_H

@class NSString;
@protocol NEExtensionAppPushProviderProtocol, NEExtensionAppPushProviderHostProtocol;


#import "NEExtensionProviderContext.h"

@interface NEExtensionAppPushProviderContext : NEExtensionProviderContext <NEExtensionAppPushProviderProtocol, NEExtensionAppPushProviderHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(BOOL)isStartMethodOverridden:(id)arg0 ;
-(id)extensionPoint;
-(void)dealloc;
-(void)reportIncomingCall:(id)arg0 ;
-(void)sendOutgoingCallMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendTimerEvent;
-(void)setProviderConfiguration:(id)arg0 ;
-(void)startConnectionWithProviderConfig:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopWithReason:(int)arg0 completionHandler:(id)arg1 ;


@end


#endif