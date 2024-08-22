// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXEXTENSIONCONTEXTIMPLEMENTATION_H
#define EXEXTENSIONCONTEXTIMPLEMENTATION_H

@class NSUUID, NSXPCConnection, NSXPCListener, NSString, NSExtensionContext, NSArray;
@protocol NSSecureCoding, NSCopying, NSXPCListenerDelegate, _NSExtensionAuxHostingBase, _NSExtensionContextInternalImplementation, EXExtensionContextHosting, EXExtensionContextVending, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "EXExtensionRequest.h"

@interface EXExtensionContextImplementation : NSObject <NSSecureCoding, NSCopying, NSXPCListenerDelegate, _NSExtensionAuxHostingBase, _NSExtensionContextInternalImplementation>



@property (copy, nonatomic) NSUUID *_UUID; // ivar: __UUID
@property (retain, nonatomic, setter=_setAuxiliaryConnection:) NSXPCConnection *_auxiliaryConnection; // ivar: __auxiliaryConnection
@property (retain, setter=_setAuxiliaryListener:) NSXPCListener *_auxiliaryListener; // ivar: __auxiliaryListener
@property (getter=_isDummyExtension, setter=_setDummyExtension:) BOOL _dummyExtension; // ivar: __dummyExtension
@property (setter=_setExtensionHostAuditToken:) ? _extensionHostAuditToken; // ivar: __extensionHostAuditToken
@property (retain, setter=_setExtensionHostProxy:) NSObject<EXExtensionContextHosting> *_extensionHostProxy; // ivar: __extensionHostProxy
@property (retain, setter=_setExtensionVendorProxy:) NSObject<EXExtensionContextVending> *_extensionVendorProxy; // ivar: __extensionVendorProxy
@property (copy) NSUUID *_pkUUID;
@property (setter=_setPrincipalObject:) id *_principalObject; // ivar: __principalObject
@property (retain, setter=_setProcessAssertion:) id *_processAssertion;
@property (copy, setter=_setRequestCleanUpBlock:) id *_requestCleanUpBlock; // ivar: __requestCleanUpBlock
@property (retain, getter=_transaction, setter=_setTransaction:) NSObject<OS_os_transaction> *_transaction; // ivar: __transaction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak) NSExtensionContext *extensionContext; // ivar: _extensionContext
@property (retain) EXExtensionRequest *extensionRequest; // ivar: _extensionRequest
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, setter=_setInputItems:) NSArray *inputItems; // ivar: _inputItems
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_defaultExtensionContextVendorProtocol;
+(id)_derivedExtensionAuxiliaryHostProtocolWithContextClass:(Class)arg0 ;
+(id)_extensionContextForIdentifier:(id)arg0 ;
+(id)_extensionContextHostProtocolWithAllowedPayloadCompletionClasses:(id)arg0 AllowedErrorClasses:(id)arg1 ;
+(id)_extensionContextVendorProtocolWithAllowedErrorClasses:(id)arg0 ;
-(BOOL)_isHost;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 extensionContext:(id)arg3 ;
-(void)___nsx_pingHost:(id)arg0 ;
-(void)_completeRequestReturningItemsSecondHalf:(id)arg0 ;
-(void)_initializeAuxillaryConnectionWithListenerEndpoint:(id)arg0 ;
-(void)_loadItemForPayload:(id)arg0 completionHandler:(id)arg1 ;
-(void)_loadPreviewImageForPayload:(id)arg0 completionHandler:(id)arg1 ;
-(void)_openURL:(id)arg0 completion:(id)arg1 ;
-(void)_willPerformHostCallback:(id)arg0 ;
-(void)cancelRequestWithError:(id)arg0 ;
-(void)completeRequestReturningItems:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif