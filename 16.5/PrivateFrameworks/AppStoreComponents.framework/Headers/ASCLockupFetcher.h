// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCLOCKUPFETCHER_H
#define ASCLOCKUPFETCHER_H

@protocol ASCServices;

#import <Foundation/Foundation.h>

#import "ASCLazy.h"
#import "ASCPendingPromises.h"
#import "ASCTaskCoordinator.h"

@interface ASCLockupFetcher : NSObject

@property (readonly, nonatomic) ASCLazy *bundleCoordinator; // ivar: _bundleCoordinator
@property (readonly, nonatomic) NSObject<ASCServices> *connection; // ivar: _connection
@property (readonly, nonatomic) ASCPendingPromises *pendingRequests; // ivar: _pendingRequests
@property (readonly, nonatomic) ASCTaskCoordinator *requestCoordinator; // ivar: _requestCoordinator


+(id)sharedFetcher;
-(id)collectionWithRequest:(id)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(id)loadedLockupWithRequest:(id)arg0 ;
-(id)lockupForBundleID:(id)arg0 withContext:(id)arg1 ;
-(id)lockupWithRequest:(id)arg0 ;
-(void)daemonConnectionWasLost:(id)arg0 ;
-(void)daemonDidRebootstrap:(id)arg0 ;
-(void)dealloc;
-(void)submitBatchRequest:(id)arg0 ;


@end


#endif