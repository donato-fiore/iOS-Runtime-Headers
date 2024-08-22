// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSWEBEXTENSIONSCONTROLLERSELECTORFORWARDER_H
#define WBSWEBEXTENSIONSCONTROLLERSELECTORFORWARDER_H

@class WKWebView;
@protocol WBSWebExtensionsControllerSelectorForwarderDelegate;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionsControllerSelectorForwarder : NSObject {
    id<WBSWebExtensionsControllerSelectorForwarderDelegate> *_delegate;
    WKWebView *_webView;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithWebView:(id)arg0 delegate:(id)arg1 ;
-(void)addListenerForExtensionWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
-(void)captureVisibleTabInWindow:(id)arg0 format:(id)arg1 quality:(id)arg2 extensionIdentifier:(id)arg3 completionHandler:(id)arg4 ;
-(void)connectFromPortWithID:(id)arg0 fromExtensionWithID:(id)arg1 toApplicationWithID:(id)arg2 ;
-(void)connectFromPortWithID:(id)arg0 fromExtensionWithID:(id)arg1 toExtensionWithID:(id)arg2 connectInfo:(id)arg3 rawSenderInfo:(id)arg4 ;
-(void)connectFromPortWithID:(id)arg0 fromExtensionWithID:(id)arg1 toTabWithID:(CGFloat)arg2 connectInfo:(id)arg3 rawSenderInfo:(id)arg4 ;
-(void)connectFromPortWithIDFromWebPage:(id)arg0 toExtensionWithID:(id)arg1 connectInfo:(id)arg2 rawSenderInfo:(id)arg3 ;
-(void)createTabWithProperties:(id)arg0 extensionIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)createWindowWithCreateData:(id)arg0 extensionIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteDatabaseForStorageOfType:(NSInteger)arg0 forExtensionWithUniqueIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteValuesForKeys:(id)arg0 fromStorageOfType:(NSInteger)arg1 forExtensionWithUniqueIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)detectLanguageForTab:(id)arg0 extensionIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)executeScriptWithDetails:(id)arg0 fromExtensionWithID:(id)arg1 toTabWithID:(id)arg2 callingAPIName:(id)arg3 completionHandler:(id)arg4 ;
-(void)getInformationForTab:(id)arg0 extensionIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)getInformationForWindow:(id)arg0 getInfo:(id)arg1 extensionIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)getStorageSizeForAllKeysInStorageOfType:(NSInteger)arg0 forExtensionWithUniqueIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)getStorageSizeForKeys:(id)arg0 inStorageOfType:(NSInteger)arg1 forExtensionWithUniqueIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)getValuesForAllKeysFromStorageOfType:(NSInteger)arg0 forExtensionWithUniqueIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)getValuesForKeys:(id)arg0 fromStorageOfType:(NSInteger)arg1 forExtensionWithUniqueIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)getZoomForTab:(id)arg0 extensionIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)goBackInTab:(id)arg0 extensionIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)goForwardInTab:(id)arg0 extensionIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)insertCSSWithDetails:(id)arg0 fromExtensionWithID:(id)arg1 toTabWithID:(id)arg2 callingAPIName:(id)arg3 completionHandler:(id)arg4 ;
-(void)openOptionsPageForExtensionIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)openPopupForWindow:(id)arg0 extensionIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)queryTabs:(id)arg0 forExtensionWithID:(id)arg1 completionHandler:(id)arg2 ;
-(void)reloadTab:(id)arg0 reloadFromOrigin:(BOOL)arg1 extensionIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)removeCSSWithDetails:(id)arg0 fromExtensionWithID:(id)arg1 toTabWithID:(id)arg2 callingAPIName:(id)arg3 completionHandler:(id)arg4 ;
-(void)removeListenerForExtensionWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
-(void)removeWindow:(id)arg0 extensionIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)sendMessage:(id)arg0 fromExtensionWithID:(id)arg1 toExtensionWithID:(id)arg2 rawSenderInfo:(id)arg3 ;
-(void)sendMessage:(id)arg0 fromExtensionWithID:(id)arg1 toExtensionWithID:(id)arg2 rawSenderInfo:(id)arg3 replyHandler:(id)arg4 ;
-(void)sendMessage:(id)arg0 fromExtensionWithID:(id)arg1 toTabWithID:(CGFloat)arg2 withOptions:(id)arg3 rawSenderInfo:(id)arg4 ;
-(void)sendMessage:(id)arg0 fromExtensionWithID:(id)arg1 toTabWithID:(CGFloat)arg2 withOptions:(id)arg3 rawSenderInfo:(id)arg4 responseCallback:(id)arg5 ;
-(void)sendMessageFromWebPage:(id)arg0 toExtensionWithID:(id)arg1 options:(id)arg2 rawSenderInfo:(id)arg3 replyHandler:(id)arg4 ;
-(void)setKeyedData:(id)arg0 inStorageOfType:(NSInteger)arg1 forExtensionWithUniqueIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)setZoomForTab:(id)arg0 zoomFactor:(id)arg1 extensionIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)toggleReaderModeForTab:(id)arg0 extensionIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateTab:(id)arg0 properties:(id)arg1 extensionIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)updateWindow:(id)arg0 withInfo:(id)arg1 extensionIdentifier:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif