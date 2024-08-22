// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONAPIPORTOBJC_H
#define WBSWEBEXTENSIONAPIPORTOBJC_H

@class NSUUID, WKWebProcessPlugInBrowserContextController, NSString, NSDictionary;
@protocol WBSTranslateToJSValue;


#import "WBSWebExtensionAPIObject.h"
#import "WBSWebExtensionAPIEventObjC.h"

@interface WBSWebExtensionAPIPortObjC : WBSWebExtensionAPIObject <WBSTranslateToJSValue>

 {
    NSUUID *_identifier;
    WKWebProcessPlugInBrowserContextController *_browserContextController;
    WBSWebExtensionAPIEventObjC *_onDisconnect;
    WBSWebExtensionAPIEventObjC *_onMessage;
    BOOL _isDisconnected;
}


@property (readonly, nonatomic) *void cpp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onDisconnect;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onMessage;
@property (readonly, nonatomic) NSDictionary *sender; // ivar: _sender
@property (readonly) Class superclass;


-(BOOL)isPropertyAllowed:(id)arg0 ;
-(id)_messageReceiver;
-(struct OpaqueJSValue *)translateToJSValueWithJSContext:(struct OpaqueJSContext *)arg0 ;
-(void)_initWithBrowserContextController:(id)arg0 extensionIdentifier:(id)arg1 runtime:(id)arg2 applicationIdentifier:(id)arg3 ;
-(void)_initWithBrowserContextController:(id)arg0 extensionIdentifier:(id)arg1 runtime:(id)arg2 isForMainWorld:(BOOL)arg3 portIdentifier:(id)arg4 connectInfo:(id)arg5 sender:(id)arg6 ;
-(void)_initWithBrowserContextController:(id)arg0 extensionIdentifier:(id)arg1 runtime:(id)arg2 isForMainWorld:(BOOL)arg3 targetExtensionID:(id)arg4 connectInfo:(id)arg5 rawSenderInfo:(id)arg6 ;
-(void)_initWithBrowserContextController:(id)arg0 extensionIdentifier:(id)arg1 runtime:(id)arg2 isForMainWorld:(BOOL)arg3 targetTabID:(CGFloat)arg4 connectInfo:(id)arg5 rawSenderInfo:(id)arg6 ;
-(void)dealloc;
-(void)disconnect;
-(void)disconnectionRequestReceived;
-(void)postMessage:(id)arg0 outExceptionString:(*id)arg1 ;


@end


#endif