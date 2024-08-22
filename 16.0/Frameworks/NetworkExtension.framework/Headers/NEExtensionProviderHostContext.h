// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEEXTENSIONPROVIDERHOSTCONTEXT_H
#define NEEXTENSIONPROVIDERHOSTCONTEXT_H

@class NSExtensionContext, NSString, NSXPCConnection;
@protocol NEExtensionProviderProtocol, NEExtensionProviderHostProtocol, NEExtensionProviderHostDelegate;


#import "NEUserNotification.h"
#import "NEProcessIdentity.h"

@interface NEExtensionProviderHostContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol>

 {
    id<NEExtensionProviderProtocol> *_vendorContext;
    NSString *_description;
    NEUserNotification *_notification;
    BOOL _stopped;
    BOOL _isHostingSystemExtension;
    id<NEExtensionProviderHostDelegate> *_delegate;
    NEProcessIdentity *_extensionProcessIdentity;
    NSXPCConnection *_vendorConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) int requiredEntitlement;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)createWithCompletionHandler:(id)arg0 ;
-(void)displayMessage:(id)arg0 message:(id)arg1 completionHandler:(id)arg2 ;
-(void)dispose;
-(void)setConfiguration:(id)arg0 extensionIdentifier:(id)arg1 ;
-(void)sleepWithCompletionHandler:(id)arg0 ;
-(void)startWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)startedWithError:(id)arg0 ;
-(void)stopWithReason:(int)arg0 ;
-(void)validateWithCompletionHandler:(id)arg0 ;
-(void)wake;


@end


#endif