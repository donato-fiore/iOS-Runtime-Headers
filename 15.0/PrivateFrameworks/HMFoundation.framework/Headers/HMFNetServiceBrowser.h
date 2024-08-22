// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMFNETSERVICEBROWSER_H
#define HMFNETSERVICEBROWSER_H

@class NSHashTable, NSMutableOrderedSet, NSArray, NSString, NSNetServiceBrowser;
@protocol NSNetServiceBrowserDelegate, OS_dispatch_queue, HMFNetServiceBrowserDelegate;


#import "HMFObject.h"

@interface HMFNetServiceBrowser : HMFObject <NSNetServiceBrowserDelegate>

 {
    os_unfair_lock_s _lock;
    NSHashTable *_netServices;
    NSMutableOrderedSet *_cachedNetServices;
}


@property (copy, nonatomic) id *browseBlock; // ivar: _browseBlock
@property (nonatomic, getter=isBrowsing) BOOL browsing; // ivar: _browsing
@property (readonly, copy, nonatomic) NSArray *cachedNetServices;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMFNetServiceBrowserDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNetServiceBrowser *internal; // ivar: _internal
@property (readonly, copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (nonatomic) BOOL shouldCache;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)shortDescription;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)init;
-(id)initWithDomain:(id)arg0 serviceType:(id)arg1 ;
-(id)logIdentifier;
-(id)shortDescription;
-(void)_stopBrowsingWithError:(id)arg0 ;
-(void)addNetServiceToCache:(id)arg0 ;
-(void)dealloc;
-(void)netServiceBrowser:(id)arg0 didFindService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceBrowser:(id)arg0 didNotSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didRemoveDomain:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceBrowser:(id)arg0 didRemoveService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)netServiceBrowserDidStopSearch:(id)arg0 ;
-(void)netServiceBrowserWillSearch:(id)arg0 ;
-(void)startBrowsingWithCompletionHandler:(id)arg0 ;
-(void)stopBrowsing;


@end


#endif