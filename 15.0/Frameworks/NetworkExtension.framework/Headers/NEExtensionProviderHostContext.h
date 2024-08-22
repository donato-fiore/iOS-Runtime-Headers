// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<NEExtensionProviderHostDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) NEProcessIdentity *extensionProcessIdentity; // ivar: _extensionProcessIdentity
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isHostingSystemExtension; // ivar: _isHostingSystemExtension
@property (readonly) int requiredEntitlement;
@property (nonatomic) BOOL stopped; // ivar: _stopped
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCConnection *vendorConnection; // ivar: _vendorConnection


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(BOOL)deriveProcessIdentity;
-(BOOL)isSignedWithDeveloperID;
-(id)copyValueForEntitlement:(id)arg0 ;
-(id)initWithVendorEndpoint:(id)arg0 processIdentity:(id)arg1 delegate:(id)arg2 ;
-(id)vendorContext;
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