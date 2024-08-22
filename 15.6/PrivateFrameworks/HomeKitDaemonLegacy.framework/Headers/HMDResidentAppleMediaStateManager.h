// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDRESIDENTAPPLEMEDIASTATEMANAGER_H
#define HMDRESIDENTAPPLEMEDIASTATEMANAGER_H

@class HMFObject, NSMutableSet, HMFTimer, NSString;
@protocol HMDNotificationRegistryDelegate, HMFTimerDelegate, HMDResidentAppleMediaStateManagerDataSource, HMDResidentAppleMediaStateManagerDelegate;



@interface HMDResidentAppleMediaStateManager : HMFObject <HMDNotificationRegistryDelegate, HMFTimerDelegate>

 {
    os_unfair_lock_s _lock;
    id<HMDResidentAppleMediaStateManagerDataSource> *_dataSource;
    id<HMDResidentAppleMediaStateManagerDelegate> *_delegate;
    NSMutableSet *_subscribedMediaProfiles;
    NSMutableSet *_mediaProfilesToRetry;
    HMFTimer *_retryTimer;
    NSUInteger _retryCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDataSource:(id)arg0 delegate:(id)arg1 ;
-(void)configureWithNotificationRegistry:(id)arg0 notificationCenter:(id)arg1 ;
-(void)handleAppleMediaAccessoryReachabilityChanged:(id)arg0 ;
-(void)mediaPropertyRegistrationsDidChangeForMediaProfiles:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif