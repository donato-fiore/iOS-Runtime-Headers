// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXPROVIDEREXTENSIONCONTEXT_H
#define CXPROVIDEREXTENSIONCONTEXT_H

@class NSExtensionContext;



@interface CXProviderExtensionContext : NSExtensionContext

@property (readonly, retain) id *remoteObjectProxy;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;


@end


#endif