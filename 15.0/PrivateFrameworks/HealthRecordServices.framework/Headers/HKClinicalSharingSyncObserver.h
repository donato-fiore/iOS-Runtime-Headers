// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCLINICALSHARINGSYNCOBSERVER_H
#define HKCLINICALSHARINGSYNCOBSERVER_H

@class HKProxyProvider, NSString;
@protocol HKClinicalSharingSyncObserverClientInterface, _HKXPCExportable, OS_dispatch_queue, HKClinicalSharingSyncObserverDelegate;

#import <Foundation/Foundation.h>


@interface HKClinicalSharingSyncObserver : NSObject <HKClinicalSharingSyncObserverClientInterface, _HKXPCExportable>

 {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    os_unfair_lock_s _lock;
    HKProxyProvider *_proxyProvider;
    BOOL _didSyncStart;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKClinicalSharingSyncObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)exportedInterface;
-(id)initWithConnection:(id)arg0 delegateQueue:(id)arg1 ;
-(id)initWithDelegateQueue:(id)arg0 ;
-(id)remoteInterface;
-(void)client_syncDidFinishWithError:(id)arg0 ;
-(void)client_syncDidStartWithInfo:(id)arg0 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)invalidate;
-(void)resume;
-(void)resumeWithCompletion:(id)arg0 ;


@end


#endif