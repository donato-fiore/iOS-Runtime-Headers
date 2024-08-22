// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKBROWSINGCONTEXTCONTROLLER_H
#define WKBROWSINGCONTEXTCONTROLLER_H

@class NSURL, NSString, NSArray;
@protocol WKBrowsingContextHistoryDelegate, WKBrowsingContextLoadDelegate, WKBrowsingContextPolicyDelegate;

#import <Foundation/Foundation.h>

#import "_WKRemoteObjectRegistry.h"
#import "WKBackForwardList.h"
#import "WKBrowsingContextHandle.h"

@interface WKBrowsingContextController : NSObject {
    WeakObjCPtr<id<WKBrowsingContextHistoryDelegate>> _historyDelegate;
    RefPtr<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>, WTF::DefaultRefDerefTraits<WebKit::WebPageProxy>> _page;
    unique_ptr<WebKit::PageLoadStateObserver, std::default_delete<WebKit::PageLoadStateObserver>> _pageLoadStateObserver;
    WeakObjCPtr<id<WKBrowsingContextLoadDelegate>> _loadDelegate;
    WeakObjCPtr<id<WKBrowsingContextPolicyDelegate>> _policyDelegate;
}


@property (readonly) *OpaqueWKPage _pageRef;
@property (readonly, nonatomic) _WKRemoteObjectRegistry *_remoteObjectRegistry;
@property (readonly) NSURL *activeURL;
@property (copy) NSString *applicationNameForUserAgent;
@property (readonly) WKBackForwardList *backForwardList;
@property (readonly) BOOL canGoBack;
@property (readonly) BOOL canGoForward;
@property (readonly) NSArray *certificateChain;
@property (readonly) NSURL *committedURL;
@property (copy) NSString *customUserAgent;
@property (readonly) CGFloat estimatedProgress;
@property CGFloat gapBetweenPages;
@property (readonly, nonatomic) WKBrowsingContextHandle *handle;
@property (readonly) BOOL hasOnlySecureContent;
@property (weak) NSObject<WKBrowsingContextHistoryDelegate> *historyDelegate;
@property (weak) NSObject<WKBrowsingContextLoadDelegate> *loadDelegate;
@property (readonly, getter=isLoading) BOOL loading;
@property (readonly) NSUInteger pageCount;
@property CGFloat pageLength;
@property CGFloat pageZoom;
@property BOOL paginationBehavesLikeColumns;
@property BOOL paginationLineGridEnabled;
@property NSUInteger paginationMode;
@property (weak) NSObject<WKBrowsingContextPolicyDelegate> *policyDelegate;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly) NSURL *provisionalURL;
@property CGFloat textZoom;
@property (readonly) NSString *title;
@property (readonly) NSURL *unreachableURL;


+(id)_browsingContextControllerForPageRef:(struct OpaqueWKPage *)arg0 ;
+(id)customSchemes;
+(void)registerSchemeForCustomProtocol:(id)arg0 ;
+(void)unregisterSchemeForCustomProtocol:(id)arg0 ;
-(BOOL)_webProcessIsResponsive;
-(id)_initWithPageRef:(struct OpaqueWKPage *)arg0 ;
-(void)dealloc;
-(void)goBack;
-(void)goForward;
-(void)goToBackForwardListItem:(id)arg0 ;
-(void)loadAlternateHTMLString:(id)arg0 baseURL:(id)arg1 forUnreachableURL:(id)arg2 ;
-(void)loadData:(id)arg0 MIMEType:(id)arg1 textEncodingName:(id)arg2 baseURL:(id)arg3 ;
-(void)loadData:(id)arg0 MIMEType:(id)arg1 textEncodingName:(id)arg2 baseURL:(id)arg3 userData:(id)arg4 ;
-(void)loadFileURL:(id)arg0 restrictToFilesWithin:(id)arg1 ;
-(void)loadFileURL:(id)arg0 restrictToFilesWithin:(id)arg1 userData:(id)arg2 ;
-(void)loadHTMLString:(id)arg0 baseURL:(id)arg1 ;
-(void)loadHTMLString:(id)arg0 baseURL:(id)arg1 userData:(id)arg2 ;
-(void)loadRequest:(id)arg0 ;
-(void)loadRequest:(id)arg0 userData:(id)arg1 ;
-(void)reload;
-(void)reloadFromOrigin;
-(void)stopLoading;


@end


#endif