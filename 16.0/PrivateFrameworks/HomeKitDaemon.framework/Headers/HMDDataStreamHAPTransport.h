// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDATASTREAMHAPTRANSPORT_H
#define HMDDATASTREAMHAPTRANSPORT_H

@class NSString, NSMutableArray, NSNumber;
@protocol HMFLogging, HMDDataStreamTransport, HMDDataStreamTransportDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDHAPAccessory.h"
#import "HMDDataStreamFrameReader.h"
#import "HMDCharacteristic.h"

@interface HMDDataStreamHAPTransport : NSObject <HMFLogging, HMDDataStreamTransport>



@property (readonly, weak) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly) HMDDataStreamFrameReader *byteReader; // ivar: _byteReader
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDDataStreamTransportDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) HMDCharacteristic *interruptCharacteristic; // ivar: _interruptCharacteristic
@property BOOL isWriteInProgress; // ivar: _isWriteInProgress
@property BOOL lastAccessoryRequestToSendFlag; // ivar: _lastAccessoryRequestToSendFlag
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) NSUInteger maxControllerTransportMTU; // ivar: _maxControllerTransportMTU
@property (readonly) NSString *notificationClientIdentifier; // ivar: _notificationClientIdentifier
@property (readonly) NSMutableArray *pendingWrites; // ivar: _pendingWrites
@property (readonly) NSNumber *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly) Class superclass;
@property (retain) HMDCharacteristic *transportCharacteristic; // ivar: _transportCharacteristic
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_isRunning;
-(id)_buildWriteRequestWithError:(*id)arg0 shouldForceClose:(BOOL)arg1 ;
-(id)_getPendingWritesUpToLength:(NSUInteger)arg0 ;
-(id)initWithAccessory:(id)arg0 sessionIdentifier:(NSInteger)arg1 maxControllerTransportMTU:(NSUInteger)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4 ;
-(void)_cancelAllPendingWritesWithError:(id)arg0 ;
-(void)_deregisterForMessages;
-(void)_doNextWriteOperation;
-(void)_handleCharacteristicsValueUpdated:(id)arg0 ;
-(void)_handleCompletionWithResponseTuples:(id)arg0 ;
-(void)_handleInterruptCharacteristicValue:(id)arg0 ;
-(void)_handleReceivedData:(id)arg0 ;
-(void)_notifyDelegateDidClose;
-(void)_notifyDelegateDidFailWithError:(id)arg0 ;
-(void)_notifyDelegateDidOpen;
-(void)_notifyDelegateDidReceiveFrame:(id)arg0 ;
-(void)_notifyWriteOperation:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)_registerForMessages;
-(void)_removeAndMarkCompleteAllCompletedWrites;
-(void)_stopTransportForWriteFailureError:(id)arg0 ;
-(void)_stopWithError:(id)arg0 ;
-(void)_teardownSessionWithError:(id)arg0 ;
-(void)_writeCharacteristicRequests:(id)arg0 completion:(id)arg1 ;
-(void)close;
-(void)connect;
-(void)dealloc;
-(void)sendRawFrame:(id)arg0 completion:(id)arg1 ;
-(void)setTrafficClass:(NSUInteger)arg0 ;


@end


#endif