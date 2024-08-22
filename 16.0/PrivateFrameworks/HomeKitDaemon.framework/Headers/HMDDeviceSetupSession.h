// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDEVICESETUPSESSION_H
#define HMDDEVICESETUPSESSION_H

@class HMFObject, HMFActivity, NSUUID, NSString, NSDate, NSError;
@protocol HMFLogging, HMDDeviceSetupTrackingInfoMutable, HMFMessageReceiver, HMDDeviceSetupTrackingInfoProviding, OS_dispatch_queue, HMDDeviceSetupSessionDelegate;


#import "HMDHomeManager.h"
#import "HMDDeviceSetupSessionInternal.h"

@interface HMDDeviceSetupSession : HMFObject <HMFLogging, HMDDeviceSetupTrackingInfoMutable, HMFMessageReceiver, HMDDeviceSetupTrackingInfoProviding>

 {
    HMFActivity *_activity;
}


@property (copy) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (copy) NSString *category; // ivar: _category
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly) id *dateFactory; // ivar: _dateFactory
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDDeviceSetupSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy) NSDate *endTime; // ivar: _endTime
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) HMDDeviceSetupSessionInternal *internal; // ivar: _internal
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (nonatomic, getter=isOpen) BOOL open; // ivar: _open
@property (readonly) NSInteger role;
@property (copy) NSError *sessionError; // ivar: _sessionError
@property (copy) NSDate *startTime; // ivar: _startTime
@property (readonly) Class superclass;


+(BOOL)isRoleSupported:(NSInteger)arg0 ;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 role:(NSInteger)arg1 homeManager:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 role:(NSInteger)arg1 homeManager:(id)arg2 dateFactory:(id)arg3 ;
-(id)logIdentifier;
-(id)messageDestination;
-(id)messageDispatcher;
-(id)setupTrackingInfo;
-(void)__registerForMessages;
-(void)_closeWithError:(id)arg0 ;
-(void)_handleClose:(id)arg0 ;
-(void)_handleReceiveData:(id)arg0 ;
-(void)_sendRequestData:(id)arg0 ;
-(void)open;


@end


#endif