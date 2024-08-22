// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFSAFARIVIEWCONTROLLERPREWARMINGSESSION_H
#define _SFSAFARIVIEWCONTROLLERPREWARMINGSESSION_H

@class SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol>, _UIAsyncInvocation, NSHashTable, NSString;
@protocol SFQueueingServiceViewControllerProxyDelegate, SFBrowserRemoteViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "SFBrowserRemoteViewController.h"

@interface _SFSafariViewControllerPrewarmingSession : NSObject <SFQueueingServiceViewControllerProxyDelegate, SFBrowserRemoteViewControllerDelegate>

 {
    SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol> *_serviceProxy;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    NSHashTable *_tokens;
    BOOL _suspended;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SFBrowserRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (readonly) Class superclass;


+(id)_sharedSessionCreateIfNeeded:(BOOL)arg0 ;
+(id)sharedSession;
+(id)sharedSessionIfExists;
-(BOOL)_hasValidTokens;
-(id)_validTokens;
-(id)init;
-(id)prewarmConnectionsToURLs:(id)arg0 ;
-(void)_connectToService;
-(void)_disconnectFromService;
-(void)_resume;
-(void)_suspend;
-(void)dealloc;
-(void)remoteViewController:(id)arg0 didFinishInitialLoad:(BOOL)arg1 ;
-(void)remoteViewController:(id)arg0 executeCustomActivityProxyID:(id)arg1 ;
-(void)remoteViewController:(id)arg0 fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2 ;
-(void)remoteViewController:(id)arg0 hostApplicationOpenURL:(id)arg1 ;
-(void)remoteViewController:(id)arg0 initialLoadDidRedirectToURL:(id)arg1 ;
-(void)remoteViewController:(id)arg0 setSwipeGestureEnabled:(BOOL)arg1 ;
-(void)remoteViewController:(id)arg0 viewServiceDidTerminateWithError:(id)arg1 ;
-(void)remoteViewControllerDidLoadWebView:(id)arg0 ;
-(void)remoteViewControllerWillDismiss:(id)arg0 ;
-(void)restart;
-(void)serviceProxyWillQueueInvocation:(id)arg0 ;
-(void)tokenWithIDDidInvalidate:(NSUInteger)arg0 ;


@end


#endif