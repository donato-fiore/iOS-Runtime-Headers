// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPIRUNTIMEOBJC_H
#define WBSWEBEXTENSIONAPIRUNTIMEOBJC_H

@class JSValue, NSString;
@protocol WBSJSCallbackHandlerErrorReporter;


#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIEventObjC.h"

@interface WBSWebExtensionAPIRuntimeObjC : WBSWebExtensionAPIObject <WBSJSCallbackHandlerErrorReporter>

 {
    WBSWebExtensionAPIEventObjC *_onConnect;
    WBSWebExtensionAPIEventObjC *_onMessage;
    WBSWebExtensionAPIEventObjC *_onMessageExternal;
    WBSWebExtensionAPIEventObjC *_onStartup;
    WBSWebExtensionAPIEventObjC *_onInstalled;
    JSValue *_lastError;
    BOOL _lastErrorAccessed;
    BOOL _processingUserGesture;
}


@property (readonly, nonatomic) *void cpp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *OpaqueJSValue lastError;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onConnect;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onInstalled;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onMessage;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onMessageExternal;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onStartup;
@property (nonatomic, getter=isProcessingUserGesture) BOOL processingUserGesture;
@property (readonly, nonatomic) NSString *runtimeIdentifier;
@property (readonly) Class superclass;


+(id)runtimeWithExtensionIdentifier:(id)arg0 isForMainWorld:(BOOL)arg1 ;
-(BOOL)isPropertyAllowed:(id)arg0 ;
-(id)getManifest;
-(id)getURLWithResourcePath:(id)arg0 ;
-(id)rawSenderInfoForFrame:(id)arg0 ;
-(struct Ref<SafariShared::WBSWebExtensionAPIPort, WTF::RawPtrTraits<SafariShared::WBSWebExtensionAPIPort>> )connectNativeWithApplicationID:(id)arg0 browserContextController:(id)arg1 ;
-(struct Ref<SafariShared::WBSWebExtensionAPIPort, WTF::RawPtrTraits<SafariShared::WBSWebExtensionAPIPort>> )connectToExtensionWithID:(id)arg0 connectInfo:(id)arg1 frame:(id)arg2 ;
-(void)getBackgroundPageWithBrowserContextController:(id)arg0 completionHandler:(id)arg1 ;
-(void)getPlatformInfoWithCompletionHandler:(id)arg0 ;
-(void)openOptionsPageWithBrowserContextController:(id)arg0 completionHandler:(id)arg1 ;
-(void)reloadExtensionWithBrowserContextController:(id)arg0 ;
-(void)reportErrorForCallbackHandler:(id)arg0 withMessage:(id)arg1 context:(struct OpaqueJSContext *)arg2 ;
-(void)sendMessageToExtensionWithID:(id)arg0 message:(id)arg1 options:(id)arg2 frame:(id)arg3 completionHandler:(id)arg4 outExceptionString:(*id)arg5 ;
-(void)sendNativeMessageWithApplicationID:(id)arg0 message:(id)arg1 browserContextController:(id)arg2 completionHandler:(id)arg3 ;
-(void)setUninstallURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif