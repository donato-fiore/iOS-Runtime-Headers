// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSEXTENSIONCONTEXT_H
#define NSEXTENSIONCONTEXT_H

@class NSArray;
@protocol NSSecureCoding, NSCopying, NSXPCListenerDelegate, _NSExtensionAuxHostingBase, _NSExtensionContextHosting, _NSExtensionContextVending, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "NSUUID.h"
#import "NSXPCConnection.h"
#import "NSXPCListener.h"
#import "NSString.h"

@interface NSExtensionContext : NSObject <NSSecureCoding, NSCopying, NSXPCListenerDelegate, _NSExtensionAuxHostingBase>



@property (copy, nonatomic) NSUUID *_UUID;
@property (retain, nonatomic, setter=_setAuxiliaryConnection:) NSXPCConnection *_auxiliaryConnection;
@property (retain, nonatomic, setter=_setAuxiliaryListener:) NSXPCListener *_auxiliaryListener;
@property (nonatomic, getter=_isDummyExtension, setter=_setDummyExtension:) BOOL _dummyExtension; // ivar: __dummyExtension
@property (setter=_setExtensionHostAuditToken:) ? _extensionHostAuditToken;
@property (retain, setter=_setExtensionHostProxy:) NSObject<_NSExtensionContextHosting> *_extensionHostProxy;
@property (retain, nonatomic, setter=_setExtensionVendorProxy:) NSObject<_NSExtensionContextVending> *_extensionVendorProxy;
@property (nonatomic, setter=_setPrincipalObject:) id *_principalObject;
@property (retain, setter=_setProcessAssertion:) id *_processAssertion;
@property (copy, nonatomic, setter=_setRequestCleanUpBlock:) id *_requestCleanUpBlock;
@property (retain, getter=_transaction, setter=_setTransaction:) NSObject<OS_os_transaction> *_transaction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, setter=_setInputItems:) NSArray *inputItems;
@property (readonly, retain) id *internalImplementation; // ivar: _internalImplementation
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_allowedErrorClasses;
+(id)_defaultExtensionContextProtocol;
+(id)_defaultExtensionContextVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionContextForIdentifier:(id)arg0 ;
+(id)_extensionContextHostProtocolAllowedClassesForItems;
+(id)_extensionContextHostProtocolWithAllowedErrorClasses:(id)arg0 ;
+(id)_extensionContextVendorProtocolWithAllowedErrorClasses:(id)arg0 ;
-(BOOL)_isHost;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInputItems:(id)arg0 ;
-(id)initWithInputItems:(id)arg0 contextUUID:(id)arg1 ;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(void)___nsx_pingHost:(id)arg0 ;
-(void)_loadItemForPayload:(id)arg0 completionHandler:(id)arg1 ;
-(void)_loadPreviewImageForPayload:(id)arg0 completionHandler:(id)arg1 ;
-(void)_openURL:(id)arg0 completion:(id)arg1 ;
-(void)_willPerformHostCallback:(id)arg0 ;
-(void)cancelRequestWithError:(id)arg0 ;
-(void)completeRequestReturningItems:(id)arg0 ;
-(void)completeRequestReturningItems:(id)arg0 completionHandler:(id)arg1 ;
// -(void)completeRequestReturningItems:(id)arg0 expirationHandler:(id)arg1 completion:(unk)arg2  ;
-(void)dealloc;
-(void)didConnectToVendor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)openURL:(id)arg0 completion:(id)arg1 ;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)setInputItems:(id)arg0 ;


@end


#endif