// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEREMOTEEXTENSION_H
#define MEREMOTEEXTENSION_H

@class NSString, NSArray, NSURL, NSUUID, NSExtension, NSDictionary, UIImage, EFPromise;
@protocol EFPubliclyDescribable, MEComposeSessionHandler, OS_dispatch_queue, MEMessageActionHandler, MEComposeSessionHandler_Private, MEContentBlocker_Private, MEMessageActionHandler_Private, MEMessageSecurityHandler;

#import <Foundation/Foundation.h>

#import "MEMailComposeToolbarItemInfo.h"
#import "MERemoteExtensionContext.h"
#import "MEExtensionHostContext.h"

@interface MERemoteExtension : NSObject <EFPubliclyDescribable>

 {
    os_unfair_lock_s _remoteExtensionProxyLock;
    os_unfair_lock_s _accessLevelLock;
    NSString *_dataAccessReason;
    NSUInteger _bodyAccess;
}


@property (readonly) BOOL bodyAccess;
@property (readonly, nonatomic) NSArray *capabilities;
@property (readonly, nonatomic) NSObject<MEComposeSessionHandler> *composeSessionInterface;
@property (readonly, nonatomic) MEMailComposeToolbarItemInfo *composeWindowToolbarButtonInfo;
@property (retain, nonatomic) NSString *containerID; // ivar: _containerID
@property (retain, nonatomic) NSString *containerPath; // ivar: _containerPath
@property (readonly, nonatomic) NSString *containingAppDisplayName;
@property (readonly, nonatomic) NSURL *containingAppURL;
@property (readonly) NSUUID *contextUUID; // ivar: _contextUUID
@property (readonly, copy) NSString *dataAccessReason;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *displayVersion;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (nonatomic) BOOL entitlementVerified; // ivar: _entitlementVerified
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly, nonatomic) MERemoteExtensionContext *extensionContext; // ivar: _extensionContext
@property (readonly) MEExtensionHostContext *extensionHostContext;
@property (retain, nonatomic) NSString *extensionID; // ivar: _extensionID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *extensionLoadingQueue; // ivar: _extensionLoadingQueue
@property (readonly) BOOL hasMessageContentAccess;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSDictionary *headerAccessLevels; // ivar: _headerAccessLevels
@property (readonly, nonatomic) BOOL inboundNetworkingAllowed;
@property (nonatomic, setter=setEnabled:) BOOL isEnabled;
@property (readonly, nonatomic) UIImage *menuIcon;
@property (readonly, nonatomic) NSObject<MEMessageActionHandler> *messageActionInterface; // ivar: _messageActionInterface
@property (readonly, nonatomic) UIImage *messageSecurityDecoderIcon; // ivar: _messageSecurityDecoderIcon
@property (readonly, nonatomic) BOOL outboundNetworkingAllowed;
@property (readonly, nonatomic) UIImage *preferencesIcon;
@property (retain, nonatomic) EFPromise *remoteExtensionProxyPromise; // ivar: _remoteExtensionProxyPromise
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<MEComposeSessionHandler_Private> *synchronousComposeSessionInterface;
@property (readonly, nonatomic) NSObject<MEContentBlocker_Private> *synchronousContentBlockerInterface;
@property (readonly, nonatomic) NSObject<MEMessageActionHandler_Private> *synchronousMessageActionProviderInterface;
@property (readonly, nonatomic) NSObject<MEMessageSecurityHandler> *synchronousMessageSecurityInterface; // ivar: _synchronousMessageSecurityInterface
@property (readonly, nonatomic) UIImage *toolbarIcon;


+(id)allCapabilities;
+(id)allCapabilitiesRequiringMessageContentAccess;
+(id)log;
-(BOOL)isEqual:(id)arg0 ;
-(id)_interfaceForExtensionCapability:(id)arg0 ;
-(id)_loadRemoteExtesionProxyFuture;
-(id)_remoteExtensionProxyFuture;
-(id)_synchronousInterfaceForExtensionCapability:(id)arg0 ;
-(id)contentBlockerInterface;
-(id)initWithExtension:(id)arg0 ;
-(id)interfaceForExtensionCapability:(id)arg0 ;
-(id)messageActionProviderInterface;
-(void)_nts_loadBodyAccess;
-(void)_nts_loadDataAccessReason;
-(void)getDecodedMailViewControllerForMessageContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)getMailComposeExtensionViewControllerForSession:(id)arg0 hostDelegate:(id)arg1 completionHandler:(id)arg2 ;
-(void)getMailSignatureVerificationExtensionViewControllerForMessageSigners:(id)arg0 completionHandler:(id)arg1 ;
-(void)primaryActionClickedForMessageContext:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif