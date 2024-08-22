// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDEVICE_H
#define MTRDEVICE_H

@class NSDate, NSMutableDictionary, NSNumber, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MTRAsyncCallbackWorkQueue.h"
#import "MTRDeviceController.h"
#import "MTRWeakReference.h"

@interface MTRDevice : NSObject

@property (readonly, nonatomic) MTRAsyncCallbackWorkQueue *asyncCallbackWorkQueue; // ivar: _asyncCallbackWorkQueue
@property (nonatomic) *void currentReadClient; // ivar: _currentReadClient
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, nonatomic) MTRDeviceController *deviceController; // ivar: _deviceController
@property (readonly, nonatomic) NSDate *estimatedStartTime; // ivar: _estimatedStartTime
@property (retain, nonatomic) NSMutableDictionary *expectedValueCache; // ivar: _expectedValueCache
@property (nonatomic) BOOL expirationCheckScheduled; // ivar: _expirationCheckScheduled
@property (nonatomic) unsigned char fabricIndex; // ivar: _fabricIndex
@property (nonatomic) unsigned int lastSubscriptionAttemptWait; // ivar: _lastSubscriptionAttemptWait
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, copy, nonatomic) NSNumber *nodeID; // ivar: _nodeID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableDictionary *readCache; // ivar: _readCache
@property (nonatomic) BOOL reattemptingSubscription; // ivar: _reattemptingSubscription
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) BOOL subscriptionActive; // ivar: _subscriptionActive
@property (retain, nonatomic) NSArray *unreportedEvents; // ivar: _unreportedEvents
@property (retain, nonatomic) MTRWeakReference *weakDelegate; // ivar: _weakDelegate


+(id)deviceWithNodeID:(NSUInteger)arg0 deviceController:(id)arg1 ;
+(id)deviceWithNodeID:(id)arg0 controller:(id)arg1 ;
-(BOOL)_attributeDataValue:(id)arg0 isEqualToDataValue:(id)arg1 ;
-(id)_attributeValueDictionaryForAttributePath:(id)arg0 ;
-(id)_getAttributesToReportWithNewExpectedValues:(id)arg0 expirationTime:(id)arg1 ;
-(id)_getAttributesToReportWithReportedValues:(id)arg0 ;
-(id)description;
-(id)initWithNodeID:(id)arg0 controller:(id)arg1 ;
-(id)newBaseDevice;
-(id)readAttributeWithEndpointID:(id)arg0 clusterID:(id)arg1 attributeID:(id)arg2 params:(id)arg3 ;
-(void)_changeState:(NSUInteger)arg0 ;
-(void)_checkExpiredExpectedValues;
-(void)_handleAttributeReport:(id)arg0 ;
-(void)_handleEventReport:(id)arg0 ;
-(void)_handleResubscriptionNeeded;
-(void)_handleSubscriptionError:(id)arg0 ;
-(void)_handleSubscriptionEstablished;
-(void)_handleSubscriptionReset;
-(void)_handleUnsolicitedMessageFromPublisher;
-(void)_performScheduledExpirationCheck;
-(void)_reattemptSubscriptionNowIfNeeded;
-(void)_reportAttributes:(id)arg0 ;
-(void)_setupSubscription;
-(void)invalidate;
-(void)invokeCommandWithEndpointID:(id)arg0 clusterID:(id)arg1 commandID:(id)arg2 commandFields:(id)arg3 expectedValues:(id)arg4 expectedValueInterval:(id)arg5 timedInvokeTimeout:(id)arg6 clientQueue:(id)arg7 completion:(id)arg8 ;
-(void)invokeCommandWithEndpointID:(id)arg0 clusterID:(id)arg1 commandID:(id)arg2 commandFields:(id)arg3 expectedValues:(id)arg4 expectedValueInterval:(id)arg5 timedInvokeTimeout:(id)arg6 queue:(id)arg7 completion:(id)arg8 ;
-(void)nodeMayBeAdvertisingOperational;
-(void)openCommissioningWindowWithSetupPasscode:(id)arg0 discriminator:(id)arg1 duration:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)setDelegate:(id)arg0 queue:(id)arg1 ;
-(void)setExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeWithEndpointID:(id)arg0 clusterID:(id)arg1 attributeID:(id)arg2 value:(id)arg3 expectedValueInterval:(id)arg4 timedWriteTimeout:(id)arg5 ;


@end


#endif