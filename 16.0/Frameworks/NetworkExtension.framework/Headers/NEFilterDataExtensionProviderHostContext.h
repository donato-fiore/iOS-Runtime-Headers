// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEFILTERDATAEXTENSIONPROVIDERHOSTCONTEXT_H
#define NEFILTERDATAEXTENSIONPROVIDERHOSTCONTEXT_H

@class NSString;
@protocol NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol;


#import "NEFilterExtensionProviderHostContext.h"

@interface NEFilterDataExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)applySettings:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchCurrentRulesForFlow:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchProviderConnectionWithCompletionHandler:(id)arg0 ;
-(void)getSourceAppInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleRulesChanged;
-(void)provideRemediationMap:(id)arg0 ;
-(void)provideURLAppendStringMap:(id)arg0 ;
-(void)providerControlSocketFileHandle:(id)arg0 ;
-(void)report:(id)arg0 ;
-(void)sendBrowserContentFilterServerRequest;
-(void)sendSocketContentFilterRequest;


@end


#endif