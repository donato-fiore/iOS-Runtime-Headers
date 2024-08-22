// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDMAINTENANCEWORKCOORDINATOR_H
#define HDMAINTENANCEWORKCOORDINATOR_H

@class NSOperationQueue, HDAssertionManager, NSLock, NSString;
@protocol HDAssertionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDMaintenanceWorkCoordinator : NSObject <HDAssertionObserver>

 {
    NSOperationQueue *_maintenanceWorkQueue;
    HDAssertionManager *_assertionManager;
    NSObject<OS_dispatch_queue> *_assertionQueue;
    NSLock *_lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property BOOL suspended;


-(id)init;
-(id)takeMaintenanceSuspensionAssertionForOwner:(id)arg0 ;
-(void)assertionManager:(id)arg0 assertionInvalidated:(id)arg1 ;
-(void)cancelAllOperations;
-(void)enqueueMaintenanceOperation:(id)arg0 ;


@end


#endif