// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDBTLEADVERTISER_H
#define HMDBTLEADVERTISER_H

@class HMFObject, HMFTimer, NSArray, HAPBTLECentralManager, NSString, CUBLEAdvertiser;
@protocol HAPBTLECentralManagerDelegate, HMFTimerDelegate, OS_dispatch_queue;


#import "HMDHAPAccessory.h"
#import "HMDAccessoryQueues.h"

@interface HMDBTLEAdvertiser : HMFObject <HAPBTLECentralManagerDelegate, HMFTimerDelegate>



@property (retain, nonatomic) HMDHAPAccessory *accessory; // ivar: _accessory
@property (nonatomic) CGFloat advertisementTimeInterval; // ivar: _advertisementTimeInterval
@property (retain, nonatomic) HMFTimer *advertisementTimer; // ivar: _advertisementTimer
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (retain, nonatomic) HAPBTLECentralManager *centralManager; // ivar: _centralManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isReady) BOOL isReady;
@property (retain, nonatomic) CUBLEAdvertiser *leAdvertiser; // ivar: _leAdvertiser
@property (retain, nonatomic) HMDAccessoryQueues *powerOnQueues; // ivar: _powerOnQueues
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic) CGFloat reachabilityTimeInterval; // ivar: _reachabilityTimeInterval
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)initializeAdvertiser;
+(id)sharedAdvertiser;
-(BOOL)isAdvertisingForAccessory:(id)arg0 ;
-(id)init;
-(void)_advertisementTimeout;
-(void)_cancelOn:(id)arg0 ;
-(void)_clearAdvertiser;
-(void)_completePendingPowerOnRequest:(id)arg0 ;
-(void)_flushQueue:(id)arg0 ;
-(void)_flushQueues;
-(void)_startAdvertising;
-(void)_stopAdvertisement:(id)arg0 ;
-(void)cancelOn:(id)arg0 ;
-(void)didUpdateBTLEState:(NSInteger)arg0 ;
-(void)powerOn:(id)arg0 ;
-(void)stopAdvertisement:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif