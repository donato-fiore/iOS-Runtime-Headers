// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBCLOUDCREDENTIALSAVAILABILITYLISTENER_H
#define HMBCLOUDCREDENTIALSAVAILABILITYLISTENER_H

@class HMFObject, CKContainer, NSNotificationCenter, NAFuture, HMFTimer, NSString;
@protocol HMFLogging, HMFTimerDelegate;



@interface HMBCloudCredentialsAvailabilityListener : HMFObject <HMFLogging, HMFTimerDelegate>

 {
    hmf_unfair_data_lock_s _lock;
    CKContainer *_container;
    NSNotificationCenter *_notificationCenter;
    NAFuture *_manateeAvailabilityFuture;
    NAFuture *_keychainAvailabilityFuture;
    HMFTimer *_keychainAvailabilityTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) id *keychainAvailabilityTimerFactory; // ivar: _keychainAvailabilityTimerFactory
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithContainer:(id)arg0 ;
-(id)initWithContainer:(id)arg0 notificationCenter:(id)arg1 ;
-(id)logIdentifier;
-(id)waitForKeychainAvailability;
-(id)waitForManateeAvailability;
-(id)waitForManateeAvailabilityAndRecheckIfAlreadyAvailable;
-(void)handleAccountChangedNotification:(id)arg0 ;
-(void)handleIdentityUpdateNotification:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif