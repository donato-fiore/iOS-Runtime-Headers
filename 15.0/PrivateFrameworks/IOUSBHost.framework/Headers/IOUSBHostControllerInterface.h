// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOUSBHOSTCONTROLLERINTERFACE_H
#define IOUSBHOSTCONTROLLERINTERFACE_H

@class NSData, NSMutableData, NSRecursiveLock, NSUUID;
@protocol OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>

#import "IOUSBHostCIControllerStateMachine.h"
#import "IOUSBHostInterestNotifier.h"

@interface IOUSBHostControllerInterface : NSObject {
    NSData *_capabilitiesData;
    IOUSBHostCIPortStateMachine" _portStateMachine;
}


@property (nonatomic) *IOUSBHostCIMessage capabilities; // ivar: _capabilities
@property IOUSBHostCIMessage command; // ivar: _command
@property (copy, nonatomic) id *commandHandler; // ivar: _commandHandler
@property (retain, nonatomic) IOUSBHostCIControllerStateMachine *controllerStateMachine; // ivar: _controllerStateMachine
@property BOOL destroyed; // ivar: _destroyed
@property (copy, nonatomic) id *doorbellHandler; // ivar: _doorbellHandler
@property (retain, nonatomic) NSMutableData *doorbells; // ivar: _doorbells
@property (nonatomic) *unk interestHandler; // ivar: _interestHandler
@property (retain, nonatomic) IOUSBHostInterestNotifier *interestNotifier; // ivar: _interestNotifier
@property NSUInteger interruptConsumerIndex; // ivar: _interruptConsumerIndex
@property BOOL interruptDeliveryPending; // ivar: _interruptDeliveryPending
@property (retain, nonatomic) NSRecursiveLock *interruptLock; // ivar: _interruptLock
@property NSUInteger interruptProducerIndex; // ivar: _interruptProducerIndex
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *interruptQueue; // ivar: _interruptQueue
@property (nonatomic) NSUInteger interruptRateHz; // ivar: _interruptRateHz
@property (retain, nonatomic) NSMutableData *interrupts; // ivar: _interrupts
@property (nonatomic) unsigned int ioConnect; // ivar: _ioConnect
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property NSUInteger nextInterruptTime; // ivar: _nextInterruptTime
@property (nonatomic) *IONotificationPort notificationPortRef; // ivar: _notificationPortRef
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


-(BOOL)commandAsyncCallbackWithResult:(int)arg0 error:(*id)arg1 ;
-(BOOL)deliverInterrupts;
-(BOOL)doorbellAsyncCallbacKWithResult:(int)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)enqueueInterrupt:(struct IOUSBHostCIMessage *)arg0 error:(*id)arg1 ;
-(BOOL)enqueueInterrupt:(struct IOUSBHostCIMessage *)arg0 expedite:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)enqueueInterrupts:(struct IOUSBHostCIMessage *)arg0 count:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)enqueueInterrupts:(struct IOUSBHostCIMessage *)arg0 count:(NSUInteger)arg1 expedite:(BOOL)arg2 error:(*id)arg3 ;
-(id)descriptionForMessage:(struct IOUSBHostCIMessage *)arg0 ;
-(id)getPortStateMachineForCommand:(struct IOUSBHostCIMessage *)arg0 error:(*id)arg1 ;
// -(id)initWithCapabilities:(id)arg0 queue:(id)arg1 interruptRateHz:(NSUInteger)arg2 error:(*id)arg3 commandHandler:(id)arg4 doorbellHandler:(unk)arg5 interestHandler:(id)arg6  ;
-(struct IOUSBHostCIMessage *)capabilitiesForPort:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)destroy;


@end


#endif