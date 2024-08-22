// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVWAITFORNOTIFICATIONORDEALLOCATIONOPERATION_H
#define AVWAITFORNOTIFICATIONORDEALLOCATIONOPERATION_H

@class NSOperation, NSArray, NSString;
@protocol AVObjectMonitoring, OS_dispatch_queue, OS_dispatch_semaphore;


#import "AVWeakReference.h"

@interface AVWaitForNotificationOrDeallocationOperation : NSOperation <AVObjectMonitoring>

 {
    AVWeakReference *_weakReferenceToSelf;
    AVWeakReference *_weakReferenceToMonitoredObject;
    NSObject<OS_dispatch_queue> *_operationStateSerializationQueue;
    NSObject<OS_dispatch_semaphore> *_monitoringIsFinishedSemaphore;
    NSArray *_notificationNames;
    BOOL _registeredForObjectNotifications;
    BOOL _started;
    BOOL _finished;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_monitoredObject;
-(id)initWithObject:(id)arg0 notificationNames:(id)arg1 ;
-(void)_balanceMonitoringIsFinishedSemaphore;
-(void)_registerForObjectNotifications;
-(void)_signalMonitoringIsFinishedIfNeeded;
-(void)_unregisterForObjectNotifications;
-(void)_waitUntilFinishedIfNeeded;
-(void)cancel;
-(void)dealloc;
-(void)main;
-(void)monitoredObjectHasDeparted;


@end


#endif