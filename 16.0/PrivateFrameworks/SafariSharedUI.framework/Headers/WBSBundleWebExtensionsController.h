// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSBUNDLEWEBEXTENSIONSCONTROLLER_H
#define WBSBUNDLEWEBEXTENSIONSCONTROLLER_H

@class NSDictionary, _WKRemoteObjectInterface, NSMutableDictionary, NSString, WKWebProcessPlugInController;
@protocol WBSBundleWebExtensionsControllerMessageReceiver, WKWebProcessPlugInLoadDelegate;

#import <Foundation/Foundation.h>

#import "WBSExtensionsAnalyticsEventCoalescer.h"

@interface WBSBundleWebExtensionsController : NSObject <WBSBundleWebExtensionsControllerMessageReceiver, WKWebProcessPlugInLoadDelegate>

 {
    NSDictionary *_extensionIdentifierToBaseURIMap;
    NSDictionary *_extensionIdentifierToWebExtensionMap;
    _WKRemoteObjectInterface *_bundleControllerRemoteObjectInterface;
    _WKRemoteObjectInterface *_controllerRemoteObjectInterface;
    _WKRemoteObjectInterface *_messageSender;
    NSMutableDictionary *_extensionToBackgroundPagePendingLoad;
    NSMutableDictionary *_extensionToPopupPendingLoad;
    NSMutableDictionary *_extensionToFullPageContentPendingLoad;
    NSMutableDictionary *_ports;
}


@property (readonly, nonatomic) WBSExtensionsAnalyticsEventCoalescer *analyticsEventCoalescer; // ivar: _analyticsEventCoalescer
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL debugStubUnsupportedAPIs; // ivar: _debugStubUnsupportedAPIs
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WKWebProcessPlugInController *plugInController; // ivar: _plugInController
@property (readonly) Class superclass;


+(id)sharedController;
-(BOOL)receiveMessage:(id)arg0 fromSender:(id)arg1 inFrame:(id)arg2 includeDescendantFrames:(BOOL)arg3 inWorld:(id)arg4 replySender:(id)arg5 ;
-(id)_browserContextControllerFromHandle:(id)arg0 ;
-(id)_extensionIdentifierFromBaseURIHost:(id)arg0 ;
-(id)_extensionIdentifierFromFrame:(id)arg0 world:(id)arg1 ;
-(id)_findDescendantFrameWithFrameID:(NSUInteger)arg0 startingWithFrame:(id)arg1 ;
-(id)_namespaceObjectFromHandle:(id)arg0 inWorld:(id)arg1 ;
-(id)_namespaceObjectInFrame:(id)arg0 inWorld:(id)arg1 ;
-(id)_scriptContextForFrame:(id)arg0 inWorld:(id)arg1 ;
-(id)baseURIForExtensionWithIdentifier:(id)arg0 ;
-(id)controllerProxyForBrowserContextController:(id)arg0 ;
-(id)convertHeaderFieldsToWebExtensionFormat:(id)arg0 ;
-(id)convertRequestBodyToWebExtensionFormat:(id)arg0 ;
-(id)extensionForUniqueIdentifier:(id)arg0 ;
-(id)headersReceivedDetails:(id)arg0 tabID:(CGFloat)arg1 response:(id)arg2 ;
-(id)webRequestDetailsForResourceLoad:(id)arg0 ;
-(struct OpaqueJSContext *)_globalContextFromHandle:(id)arg0 inWorld:(id)arg1 ;
-(void)_enumerateNamespaceObjectsForExtensionWithID:(id)arg0 withBlock:(id)arg1 ;
-(void)_enumerateNamespaceObjectsForFrameAndChildrenOfFrame:(id)arg0 inWorld:(id)arg1 withBlock:(id)arg2 ;
-(void)_enumerateNamespaceObjectsInEveryFrameForBrowsingContext:(id)arg0 inWorld:(id)arg1 withBlock:(id)arg2 ;
-(void)_enumerateStorageAPIObjectsInEveryFrameForExtensionWithID:(id)arg0 inWorld:(id)arg1 browsingContext:(id)arg2 withBlock:(id)arg3 ;
-(void)_enumerateTabsAPIObjectsForExtensionWithID:(id)arg0 withBlock:(id)arg1 ;
-(void)_enumerateWebNavigationAPIObjectsForExtensionWithID:(id)arg0 withBlock:(id)arg1 ;
-(void)_enumerateWebRequestAPIObjectsForExtensionWithID:(id)arg0 withBlock:(id)arg1 ;
-(void)_enumerateWindowsAPIObjectsForExtensionWithID:(id)arg0 withBlock:(id)arg1 ;
-(void)_receiveConnectionRequestWithPortID:(id)arg0 inBrowsingContext:(id)arg1 inWorld:(id)arg2 connectInfo:(id)arg3 sender:(id)arg4 ;
-(void)addBindingstoWebPageFrameIfNecessary:(id)arg0 inScriptWorld:(id)arg1 ;
-(void)addPort:(id)arg0 withID:(id)arg1 ;
-(void)backgroundPageWithHandle:(id)arg0 aboutToLoadForExtensionWithID:(id)arg1 ;
-(void)backgroundPageWithHandle:(id)arg0 didCloseForExtensionWithID:(id)arg1 ;
-(void)crashWebProcess;
-(void)disconnectPortWithID:(id)arg0 ;
-(void)dispatchOnInstalledToHandle:(id)arg0 details:(id)arg1 ;
-(void)dispatchOnStartupToHandle:(id)arg0 ;
-(void)dispatchToolbarItemClickedToHandle:(id)arg0 tabState:(id)arg1 ;
-(void)fullPageExtensionContentWithHandle:(id)arg0 aboutToLoadForExtensionWithID:(id)arg1 inTabWithID:(id)arg2 windowID:(id)arg3 ;
-(void)notifyBrowsingContext:(id)arg0 contextMenuItemWasSelectedWithInfo:(id)arg1 tabInfo:(id)arg2 ;
-(void)notifyContentScriptsForExtensionWithID:(id)arg0 storageWasChangedWithChanges:(id)arg1 areaName:(id)arg2 browsingContext:(id)arg3 ;
-(void)notifyExtensionWithID:(id)arg0 alarmWasFiredWithInfo:(id)arg1 ;
-(void)notifyExtensionWithID:(id)arg0 commandWasPerformed:(id)arg1 ;
-(void)notifyExtensionWithID:(id)arg0 navigationCommittedWithDetails:(id)arg1 ;
-(void)notifyExtensionWithID:(id)arg0 navigationFailedWithDetails:(id)arg1 ;
-(void)notifyExtensionWithID:(id)arg0 navigationFinishedWithDetails:(id)arg1 ;
-(void)notifyExtensionWithID:(id)arg0 navigationStartedWithDetails:(id)arg1 ;
-(void)notifyExtensionWithID:(id)arg0 permissionWasAddedWithInfo:(id)arg1 ;
-(void)notifyExtensionWithID:(id)arg0 permissionWasRemovedWithInfo:(id)arg1 ;
-(void)notifyExtensionWithID:(id)arg0 resourceLoad:(id)arg1 inTabWithID:(CGFloat)arg2 windowID:(CGFloat)arg3 didCompleteWithError:(id)arg4 response:(id)arg5 ;
-(void)notifyExtensionWithID:(id)arg0 resourceLoad:(id)arg1 inTabWithID:(CGFloat)arg2 windowID:(CGFloat)arg3 didPerformHTTPRedirection:(id)arg4 newRequest:(id)arg5 ;
-(void)notifyExtensionWithID:(id)arg0 resourceLoad:(id)arg1 inTabWithID:(CGFloat)arg2 windowID:(CGFloat)arg3 didReceiveChallenge:(id)arg4 ;
-(void)notifyExtensionWithID:(id)arg0 resourceLoad:(id)arg1 inTabWithID:(CGFloat)arg2 windowID:(CGFloat)arg3 didReceiveResponse:(id)arg4 ;
-(void)notifyExtensionWithID:(id)arg0 resourceLoad:(id)arg1 inTabWithID:(CGFloat)arg2 windowID:(CGFloat)arg3 didSendRequest:(id)arg4 ;
-(void)notifyExtensionWithID:(id)arg0 tabWasCreatedWithState:(id)arg1 ;
-(void)notifyExtensionWithID:(id)arg0 tabWasSelectedWithActiveInfo:(id)arg1 ;
-(void)notifyExtensionWithID:(id)arg0 tabWithID:(id)arg1 wasClosedWithRemoveInfo:(id)arg2 ;
-(void)notifyExtensionWithID:(id)arg0 tabWithID:(id)arg1 wasMovedFromAnotherWindowWithAttachInfo:(id)arg2 detachInfo:(id)arg3 ;
-(void)notifyExtensionWithID:(id)arg0 tabWithID:(id)arg1 wasMovedWithMoveInfo:(id)arg2 ;
-(void)notifyExtensionWithID:(id)arg0 tabWithID:(id)arg1 wasReplacedWithTabWithID:(id)arg2 ;
-(void)notifyExtensionWithID:(id)arg0 tabWithID:(id)arg1 wasUpdatedWithChangeInfo:(id)arg2 tabState:(id)arg3 ;
-(void)notifyExtensionWithID:(id)arg0 windowFocusChangedToWindowWithWindowID:(id)arg1 isNormalWindow:(id)arg2 ;
-(void)notifyExtensionWithID:(id)arg0 windowWasClosedWithWindowID:(id)arg1 isNormalWindow:(id)arg2 ;
-(void)notifyExtensionWithID:(id)arg0 windowWasCreatedWithWindowInfo:(id)arg1 isNormalWindow:(id)arg2 ;
-(void)notifyRelatedWebViewsForExtensionWithID:(id)arg0 storageWasChangedWithChanges:(id)arg1 areaName:(id)arg2 ;
-(void)popupWithHandle:(id)arg0 aboutToLoadForExtensionWithID:(id)arg1 inWindowWithID:(id)arg2 ;
-(void)popupWithHandle:(id)arg0 didCloseForExtensionWithID:(id)arg1 ;
-(void)receiveConnectionRequestInBrowsingContext:(id)arg0 extensionID:(id)arg1 portID:(id)arg2 connectInfo:(id)arg3 sender:(id)arg4 ;
-(void)receiveConnectionRequestToBackgroundPageInBrowsingContext:(id)arg0 portID:(id)arg1 connectInfo:(id)arg2 sender:(id)arg3 ;
-(void)receiveMessage:(id)arg0 fromSender:(id)arg1 inBrowsingContext:(id)arg2 replyHandler:(id)arg3 ;
-(void)receiveMessage:(id)arg0 fromSender:(id)arg1 withOptions:(id)arg2 inBrowsingContext:(id)arg3 inWorld:(id)arg4 replyHandler:(id)arg5 ;
-(void)receiveMessage:(id)arg0 fromSender:(id)arg1 withOptions:(id)arg2 toExtensionWithID:(id)arg3 inBrowsingContext:(id)arg4 replyHandler:(id)arg5 ;
-(void)receiveMessage:(id)arg0 inBrowsingContext:(id)arg1 toPortWithID:(id)arg2 ;
-(void)registerRemoteObjectWithBrowserContextController:(id)arg0 ;
-(void)setExtensionIdentifierToBaseURIMap:(id)arg0 ;
-(void)setExtensionIdentifierToExtensionDataMap:(id)arg0 ;
-(void)unregisterRemoteObjectFromBrowserContextController:(id)arg0 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 globalObjectIsAvailableForFrame:(id)arg1 inScriptWorld:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 serviceWorkerGlobalObjectIsAvailableForFrame:(id)arg1 inScriptWorld:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 willInjectUserScriptForFrame:(id)arg1 inScriptWorld:(id)arg2 ;


@end


#endif