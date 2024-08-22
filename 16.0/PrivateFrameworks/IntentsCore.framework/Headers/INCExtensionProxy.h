// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCEXTENSIONPROXY_H
#define INCEXTENSIONPROXY_H

@class NSValue, NSExtension;
@protocol INCExtensionProxy, _INExtensionContextVending;

#import <Foundation/Foundation.h>

#import "INCExtensionConnection.h"

@interface INCExtensionProxy : NSObject <INCExtensionProxy>



@property (readonly, nonatomic) NSValue *_auditTokenValue; // ivar: _auditTokenValue
@property (readonly, nonatomic) INCExtensionConnection *_connection; // ivar: _connection
@property (readonly, nonatomic) NSExtension *_extension; // ivar: _extension
@property (readonly, nonatomic, getter=_isExtensionBeingDebugged) BOOL _extensionBeingDebugged;
@property (readonly, nonatomic) NSObject<_INExtensionContextVending> *_vendorRemote; // ivar: _vendorRemote
@property (copy, nonatomic) id *imageCachingHandler; // ivar: _imageCachingHandler
@property (copy, nonatomic) id *imageProcessingHandler; // ivar: _imageProcessingHandler
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (nonatomic) BOOL shouldCache; // ivar: _shouldCache
@property (nonatomic) BOOL shouldResetRequestAfterHandle;


+(void)initialize;
-(BOOL)_extensionProcessHasEntitlement:(id)arg0 ;
-(BOOL)_isIntentRestrictedWhileProtectedDataUnavailableWithCompletionHandler:(id)arg0 ;
-(BOOL)_shouldForwardToAppWithIntent:(id)arg0 intentResponse:(id)arg1 ;
-(id)_initWithConnection:(id)arg0 extension:(id)arg1 vendorRemote:(id)arg2 auditTokenValue:(id)arg3 ;
-(id)_processIntent:(id)arg0 intentResponse:(id)arg1 withCacheItems:(id)arg2 ;
-(void)_issueSandboxExtensionsForFileURLsIfNeededToIntent:(id)arg0 ;
-(void)confirmIntentWithCompletionHandler:(id)arg0 ;
-(void)getDefaultValueForParameterNamed:(id)arg0 completionHandler:(id)arg1 ;
-(void)getOptionsForParameterNamed:(id)arg0 completionHandler:(id)arg1 ;
-(void)getOptionsForParameterNamed:(id)arg0 searchTerm:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleIntentWithCompletionHandler:(id)arg0 ;
-(void)prewarmAppWithIntent:(id)arg0 completionHandler:(id)arg1 ;
-(void)resolveIntentSlotKeyPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)resolveIntentSlotKeyPaths:(id)arg0 completionHandler:(id)arg1 ;
-(void)startSendingUpdatesToObserver:(id)arg0 ;
-(void)stopSendingUpdates;


@end


#endif