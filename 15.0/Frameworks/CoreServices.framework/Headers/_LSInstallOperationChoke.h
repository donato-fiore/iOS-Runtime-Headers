// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSINSTALLOPERATIONCHOKE_H
#define _LSINSTALLOPERATIONCHOKE_H

@class NSMutableDictionary;
@protocol OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _LSInstallOperationChoke : NSObject {
    NSUInteger _numConcurrentOperations;
    os_unfair_lock_s _lock;
    NSMutableDictionary *_queuedWork;
    NSUInteger _activeInstallers;
    NSUInteger _activeUninstallers;
    NSObject<OS_dispatch_semaphore> *_backpressureSemaphore;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}




+(NSInteger)_bufferedRequestSlop;
-(BOOL)becomeInstaller;
-(BOOL)becomeUninstaller;
-(id)availableOperationOfType:(NSInteger)arg0 ;
-(id)claimOperationOfType:(NSInteger)arg0 ;
-(id)initWithWidth:(NSInteger)arg0 ;
-(void)enqueueInstallationOperation:(id)arg0 ;
-(void)performOperationForBundleIdentifier:(id)arg0 installType:(NSInteger)arg1 block:(id)arg2 ;
-(void)retireFromInstaller;
-(void)retireFromUninstaller;
-(void)retireOperation:(id)arg0 ;


@end


#endif