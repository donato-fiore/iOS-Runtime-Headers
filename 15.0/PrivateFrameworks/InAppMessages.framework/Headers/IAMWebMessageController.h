// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IAMWEBMESSAGECONTROLLER_H
#define IAMWEBMESSAGECONTROLLER_H

@class _WKRemoteObjectInterface, ICInAppMessageEntry, NSArray, NSString;
@protocol WKNavigationDelegate, IAMWebProcessDelegate, IAMWebProcessProxy, IAMWebMessageControllerDelegate;

#import <Foundation/Foundation.h>

#import "IAMWebView.h"

@interface IAMWebMessageController : NSObject <WKNavigationDelegate, IAMWebProcessDelegate>

 {
    id<IAMWebProcessProxy> *_webProcessProxy;
    _WKRemoteObjectInterface *_remoteObjectInterface;
    ICInAppMessageEntry *_messageEntry;
    BOOL _isGlobalJSOAvailable;
    BOOL _didMainNavigationFinish;
    BOOL _hasSentContentPages;
}


@property (retain, nonatomic) NSArray *contentPages; // ivar: _contentPages
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IAMWebMessageControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *loadCompletion; // ivar: _loadCompletion
@property (readonly) Class superclass;
@property (readonly, nonatomic) IAMWebView *webView; // ivar: _webView


-(id)init;
-(void)_callLoadCompletionWithError:(id)arg0 ;
-(void)_checkReadyForLoadCompletion;
-(void)_createJSOContentPages:(id)arg0 fromMessageEntry:(id)arg1 withBlock:(id)arg2 ;
-(void)loadMessageFromMessageEntry:(id)arg0 withWebArchiveURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)unregisterExportedObjectInterface;
-(void)webProcessJSODidCallClose;
-(void)webProcessJSODidCallOpen:(id)arg0 options:(id)arg1 ;
-(void)webProcessJSODidCallPerformAction:(id)arg0 options:(id)arg1 ;
-(void)webProcessJSODidReportEvent:(id)arg0 ;
-(void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
-(void)webProcessPlugInDidCreateBrowserContextController;
-(void)webProcessPlugInWillDestroyBrowserContextController;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;


@end


#endif