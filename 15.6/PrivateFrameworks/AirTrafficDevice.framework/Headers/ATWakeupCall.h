// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATWAKEUPCALL_H
#define ATWAKEUPCALL_H

@class NSMutableArray, NSNetServiceBrowser, NSThread, NSString;
@protocol NSNetServiceBrowserDelegate, NSNetServiceDelegate;

#import <Foundation/Foundation.h>


@interface ATWakeupCall : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>

 {
    NSMutableArray *_hostLibraryIdentifiers;
    NSMutableArray *_resolvingHosts;
    NSMutableArray *_resolvedLibraryIdentifiers;
    NSMutableArray *_resolvedLibraryServices;
    id *_completion;
    NSNetServiceBrowser *_browser;
    NSThread *_wakeThread;
    BOOL _searching;
    int _resolving;
    NSUInteger _hostsToResolve;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)wakeableHostsWithCompletion:(id)arg0 ;
+(void)sendWakeupCall:(id)arg0 ;
+(void)sendWakeupCallToAllSyncHosts;
-(void)dealloc;
-(void)netService:(id)arg0 didNotResolve:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didFindService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceBrowser:(id)arg0 didNotSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didRemoveService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceBrowserDidStopSearch:(id)arg0 ;
-(void)netServiceDidResolveAddress:(id)arg0 ;
-(void)stop;
-(void)wake;


@end


#endif