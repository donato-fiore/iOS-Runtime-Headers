// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATHOSTBROWSER_H
#define ATHOSTBROWSER_H

@class NSNetServiceBrowser, NSMutableSet, NSString;
@protocol NSNetServiceBrowserDelegate, NSNetServiceDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ATHostBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>

 {
    NSNetServiceBrowser *_netServiceBrowser;
    BOOL _searchInProgress;
    NSMutableSet *_hostsBeingResolved;
    NSObject<OS_dispatch_queue> *_queue;
    id *_completionBlock;
    NSObject<OS_dispatch_source> *_timer;
    CGFloat _browserStartTime;
    CGFloat _timeoutTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_finishSearchIfComplete;
-(void)_handleTimeout;
-(void)browseForHostsWithTimeout:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)cancel;
-(void)netService:(id)arg0 didNotResolve:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didFindService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceBrowser:(id)arg0 didNotSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didRemoveService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceBrowserDidStopSearch:(id)arg0 ;
-(void)netServiceDidResolveAddress:(id)arg0 ;


@end


#endif