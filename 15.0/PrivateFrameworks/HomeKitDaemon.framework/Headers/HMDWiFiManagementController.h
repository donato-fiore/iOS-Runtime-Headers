// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDWIFIMANAGEMENTCONTROLLER_H
#define HMDWIFIMANAGEMENTCONTROLLER_H

@class HMFObject, NSString, NSNotificationCenter, HMFTimer;
@protocol HMFTimerDelegate, HMFLogging, OS_dispatch_queue;


#import "HMDHAPAccessory.h"
#import "HMDWiFiReconfigurationLogEvent.h"
#import "HMDService.h"

@interface HMDWiFiManagementController : HMFObject <HMFTimerDelegate, HMFLogging>



@property (readonly, weak) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly) NSInteger capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (copy, nonatomic) id *reconfigurationCompletion; // ivar: _reconfigurationCompletion
@property (nonatomic) unsigned short reconfigurationCookie; // ivar: _reconfigurationCookie
@property (retain, nonatomic) HMDWiFiReconfigurationLogEvent *reconfigurationLogEvent; // ivar: _reconfigurationLogEvent
@property (nonatomic) NSInteger reconfigurationState; // ivar: _reconfigurationState
@property (retain, nonatomic) HMFTimer *reconfigurationTimeoutTimer; // ivar: _reconfigurationTimeoutTimer
@property (copy, nonatomic) id *reconfigurationVerificationCallback; // ivar: _reconfigurationVerificationCallback
@property (readonly) HMDService *service; // ivar: _service
@property (readonly) Class superclass;
@property (readonly) BOOL supportsStationConfiguration;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
+(id)sharedPSKForNetworkWithSSID:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 wiFiTransportService:(id)arg1 workQueue:(id)arg2 ;
-(id)logIdentifier;
-(void)_accessoryDidBecomeReachable:(id)arg0 ;
-(void)_commitConfigurationUpdate;
-(void)_performWiFiConfigurationControlRequest:(id)arg0 withDescription:(id)arg1 completion:(id)arg2 ;
-(void)_reconfigurationCompletedWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)reconfigureWithSSID:(id)arg0 PSK:(id)arg1 logEvent:(id)arg2 completion:(id)arg3 ;
// -(void)safelyReconfigureWithSSID:(id)arg0 PSK:(id)arg1 verificationCallback:(id)arg2 logEvent:(unk)arg3 completion:(id)arg4  ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif