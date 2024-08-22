// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMAINTENANCEWORKCOORDINATOR_H
#define HDMAINTENANCEWORKCOORDINATOR_H

@class NSMutableArray, HDAssertionManager, NSString;
@protocol HDAssertionObserver, HDMaintenanceOperationDelegate, HDDiagnosticObject, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "HDMaintenanceOperation.h"

@interface HDMaintenanceWorkCoordinator : NSObject <HDAssertionObserver, HDMaintenanceOperationDelegate, HDDiagnosticObject>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_managementQueue;
    NSObject<OS_dispatch_queue> *_maintenanceWorkQueue;
    BOOL _suspended;
    NSMutableArray *_pendingOperations;
    HDMaintenanceOperation *_activeOperation;
    NSObject<OS_dispatch_source> *_timeoutSource;
    HDAssertionManager *_assertionManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) BOOL suspended;


-(id)diagnosticDescription;
-(id)init;
-(id)takeMaintenanceSuspensionAssertionForOwner:(id)arg0 ;
-(void)assertionManager:(id)arg0 assertionInvalidated:(id)arg1 ;
-(void)cancelAllOperations;
-(void)dealloc;
-(void)enqueueMaintenanceOperation:(id)arg0 ;
-(void)operationDidFinish:(id)arg0 ;


@end


#endif