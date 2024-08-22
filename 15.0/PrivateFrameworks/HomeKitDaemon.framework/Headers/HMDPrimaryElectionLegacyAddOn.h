// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDPRIMARYELECTIONLEGACYADDON_H
#define HMDPRIMARYELECTIONLEGACYADDON_H

@class NSString, NSHashTable, NSUUID, HMFTimer;
@protocol HMFTimerDelegate, HMFLogging, HMFMessageReceiver, HMDPrimaryResidentElectionAddOn, HMDResidentDeviceManagerContext, HMDPrimaryResidentElectionAddOnDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDResidentDevice.h"

@interface HMDPrimaryElectionLegacyAddOn : NSObject <HMFTimerDelegate, HMFLogging, HMFMessageReceiver, HMDPrimaryResidentElectionAddOn>



@property (nonatomic, getter=isConfirming) BOOL confirming; // ivar: _confirming
@property (readonly, weak, nonatomic) NSObject<HMDResidentDeviceManagerContext> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDPrimaryResidentElectionAddOnDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSHashTable *devicePreferenceDataSources; // ivar: _devicePreferenceDataSources
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAtHome;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) HMDResidentDevice *preferredElector;
@property (retain, nonatomic) HMFTimer *residentMonitorTimer; // ivar: _residentMonitorTimer
@property (readonly) Class superclass;


+(NSInteger)compareElectionVersions:(id)arg0 otherVersion:(id)arg1 ;
+(id)logCategory;
-(id)dumpState;
-(id)initWithContext:(id)arg0 ;
-(id)logIdentifier;
-(void)__handleConfirmationRequest:(id)arg0 ;
-(void)_handleConfirmResidentDevice:(id)arg0 ;
-(void)_handleResidentElectionParameters:(id)arg0 ;
-(void)addDataSource:(id)arg0 ;
-(void)atHomeLevelChanged:(NSInteger)arg0 ;
-(void)confirmAsResident;
-(void)confirmOnAvailability;
-(void)confirmPrimaryResident;
-(void)confirmWithCompletionHandler:(id)arg0 ;
-(void)handleBatteryLevelChange:(id)arg0 ;
-(void)handleBatteryStateChange:(id)arg0 ;
-(void)performElection;
-(void)primaryResidentChanged:(id)arg0 ;
-(void)registerForMessages;
-(void)start;
-(void)timerDidFire:(id)arg0 ;


@end


#endif