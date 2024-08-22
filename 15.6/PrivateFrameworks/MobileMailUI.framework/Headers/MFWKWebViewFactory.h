// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFWKWEBVIEWFACTORY_H
#define MFWKWEBVIEWFACTORY_H

@class EMRemoteContentURLSchemeHandler, NSString, EFQueue, WKProcessPool, EMRemoteContentURLSession;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface MFWKWebViewFactory : NSObject <EFLoggable>

 {
    EMRemoteContentURLSchemeHandler *_proxySchemeHandler;
    EMRemoteContentURLSchemeHandler *_noProxySchemeHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EFQueue *preallocatedWebViews; // ivar: _preallocatedWebViews
@property (retain, nonatomic) WKProcessPool *processPool; // ivar: _processPool
@property (readonly) Class superclass;
@property (readonly, nonatomic) EMRemoteContentURLSession *urlSession; // ivar: _urlSession


+(id)log;
+(id)sharedWebViewFactory;
+(void)setDaemonInterface:(id)arg0 URLCacheWithMemoryCapacity:(NSUInteger)arg1 ;
-(id)_instantiateWebView;
-(id)init;
-(id)webView;
-(void)_didReceiveMemoryWarning:(id)arg0 ;
-(void)dealloc;
-(void)preallocateWebViewIfNeeded;
-(void)preallocateWebViews;


@end


#endif