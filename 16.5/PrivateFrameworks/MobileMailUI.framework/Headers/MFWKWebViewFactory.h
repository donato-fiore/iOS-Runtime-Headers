// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFWKWEBVIEWFACTORY_H
#define MFWKWEBVIEWFACTORY_H

@class EMRemoteContentURLSchemeHandler, EFAutoCancelationToken, NSHashTable, NSString, EFQueue, WKProcessPool, EMRemoteContentURLSession;
@protocol EFLoggable, MEContentRuleListManagerObserver;

#import <Foundation/Foundation.h>


@interface MFWKWebViewFactory : NSObject <EFLoggable, MEContentRuleListManagerObserver>

 {
    EMRemoteContentURLSchemeHandler *_proxySchemeHandler;
    EMRemoteContentURLSchemeHandler *_noProxySchemeHandler;
    EFAutoCancelationToken *_contentRuleListManagerObserverCancelable;
}


@property (retain, nonatomic) NSHashTable *configurations; // ivar: _configurations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EFQueue *preallocatedWebViews; // ivar: _preallocatedWebViews
@property (retain, nonatomic) WKProcessPool *processPool; // ivar: _processPool
@property (readonly) Class superclass;
@property (readonly, nonatomic) EMRemoteContentURLSession *urlSession; // ivar: _urlSession


+(id)log;
+(id)sharedWebViewFactory;
+(id)sharedWebViewFactoryFuture;
+(void)setDaemonInterface:(id)arg0 URLCacheWithMemoryCapacity:(NSUInteger)arg1 ;
-(id)_createConfiguration;
-(id)_instantiateWebView;
-(id)init;
-(id)initWithRemoteContentURLCache:(id)arg0 ;
-(id)webView;
-(void)_didReceiveMemoryWarning:(id)arg0 ;
-(void)contentRuleListManager:(id)arg0 didAddRuleList:(id)arg1 ;
-(void)contentRuleListManager:(id)arg0 didRemoveRuleList:(id)arg1 ;
-(void)contentRuleListManager:(id)arg0 didUpdateContentRuleList:(id)arg1 oldContentRuleList:(id)arg2 ;
-(void)dealloc;
-(void)preallocateWebViewIfNeeded;
-(void)preallocateWebViews;
-(void)setContentRuleListManager:(id)arg0 ;


@end


#endif