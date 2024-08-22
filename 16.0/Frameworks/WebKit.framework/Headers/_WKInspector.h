// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WKINSPECTOR_H
#define _WKINSPECTOR_H

@class NSString;
@protocol WKObject, _WKInspectorExtensionHost, _WKInspectorIBActions, _WKInspectorDelegate;

#import <Foundation/Foundation.h>

#import "WKWebView.h"

@interface _WKInspector : NSObject <WKObject, _WKInspectorExtensionHost, _WKInspectorIBActions>

 {
    ObjectStorage<WebKit::WebInspectorUIProxy> _inspector;
    WeakObjCPtr<id<_WKInspectorDelegate>> _delegate;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_WKInspectorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WKWebView *extensionHostWebView;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isElementSelectionActive;
@property (readonly, nonatomic) BOOL isFront;
@property (readonly, nonatomic) BOOL isProfilingPage;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKWebView *webView;


-(id)inspectorWebView;
-(void)_fetchURLForTesting:(id)arg0 ;
-(void)_openURLExternallyForTesting:(id)arg0 useFrontendAPI:(BOOL)arg1 ;
-(void)_setDiagnosticLoggingDelegate:(id)arg0 ;
-(void)attach;
-(void)close;
-(void)connect;
-(void)dealloc;
-(void)detach;
-(void)hide;
-(void)printErrorToConsole:(id)arg0 ;
-(void)registerExtensionWithID:(id)arg0 extensionBundleIdentifier:(id)arg1 displayName:(id)arg2 completionHandler:(id)arg3 ;
-(void)show;
-(void)showConsole;
-(void)showExtensionTabWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)showMainResourceForFrame:(id)arg0 ;
-(void)showResources;
-(void)toggleElementSelection;
-(void)togglePageProfiling;
-(void)unregisterExtension:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif