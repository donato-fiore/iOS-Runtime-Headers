// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDOORBELLPRESSTRACKER_H
#define HMDDOORBELLPRESSTRACKER_H

@class HMFObject, NSMutableDictionary, NSString, NSNotificationCenter;
@protocol HMFLogging, OS_dispatch_queue;



@interface HMDDoorbellPressTracker : HMFObject <HMFLogging>



@property (retain) NSMutableDictionary *dateOfLastDoorbellPressByAccessoryUUID; // ivar: _dateOfLastDoorbellPressByAccessoryUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain) NSMutableDictionary *registrationsByAccessoryUUID; // ivar: _registrationsByAccessoryUUID
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)doorbellPressInDateInterval:(id)arg0 doorbellAccessory:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg0 notificationCenter:(id)arg1 ;
-(void)_handleCharacteristicsValueUpdatedNotification:(id)arg0 ;
-(void)handleCharacteristicsValueUpdatedNotification:(id)arg0 ;
-(void)startTrackingPressesForDoorbellAccessory:(id)arg0 registration:(id)arg1 ;
-(void)stopTrackingPressesForDoorbellAccessory:(id)arg0 registration:(id)arg1 ;


@end


#endif