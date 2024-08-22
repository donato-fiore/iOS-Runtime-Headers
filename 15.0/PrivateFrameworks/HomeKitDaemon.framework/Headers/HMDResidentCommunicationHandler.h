// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDRESIDENTCOMMUNICATIONHANDLER_H
#define HMDRESIDENTCOMMUNICATIONHANDLER_H

@class HMFObject, NSString, NSMapTable, NSUUID, HMFTimer, NSMutableArray;
@protocol HMFLogging, HMFTimerDelegate, OS_dispatch_queue;


#import "HMDDevice.h"
#import "HMDMessageDispatcher.h"

@interface HMDResidentCommunicationHandler : HMFObject <HMFLogging, HMFTimerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMapTable *deviceMapping; // ivar: _deviceMapping
@property (readonly, nonatomic) NSMapTable *dispatchedReadRequests; // ivar: _dispatchedReadRequests
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *homeUUID; // ivar: _homeUUID
@property (retain, nonatomic) HMFTimer *multiReadCoalesceTimer; // ivar: _multiReadCoalesceTimer
@property (nonatomic) int numOutstandingReadRequests; // ivar: _numOutstandingReadRequests
@property (readonly, nonatomic, getter=isOwnerUser) BOOL ownerUser; // ivar: _ownerUser
@property (readonly, nonatomic) NSMutableArray *pendingReadRequests; // ivar: _pendingReadRequests
@property (readonly, nonatomic) HMDDevice *preferredDevice;
@property (readonly, weak, nonatomic) HMDMessageDispatcher *remoteDispatcher; // ivar: _remoteDispatcher
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)createResponseSubset:(id)arg0 overallError:(id)arg1 readRequest:(id)arg2 error:(*id)arg3 ;
+(id)logCategory;
+(void)_clearAllGeneratedRequests:(id)arg0 error:(id)arg1 ;
+(void)_clearAllPendingRequests:(id)arg0 error:(id)arg1 ;
+(void)_processResponseForMultireadRequest:(id)arg0 overallError:(id)arg1 response:(id)arg2 ;
-(BOOL)containsDevice:(id)arg0 ;
-(id)deviceForType:(NSInteger)arg0 ;
-(id)initWithHome:(id)arg0 remoteDispatcher:(id)arg1 ;
-(id)logIdentifier;
-(void)_processResponse:(id)arg0 overallError:(id)arg1 messageIdentifier:(id)arg2 ;
-(void)_removeDeviceForType:(NSInteger)arg0 ;
-(void)_sendMultipleCharacteristicRead;
-(void)dealloc;
-(void)redispatchMessage:(id)arg0 target:(id)arg1 responseQueue:(id)arg2 ;
-(void)removeDeviceForType:(NSInteger)arg0 ;
-(void)setDevice:(id)arg0 forType:(NSInteger)arg1 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif