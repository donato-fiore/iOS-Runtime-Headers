// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMELOCATIONHANDLER_H
#define HMDHOMELOCATIONHANDLER_H

@class HMFObject, NSString, CLLocation, HMFTimer, NSDate, HMFUnfairLock, NSSet, NSUUID, HMFMessageDispatcher, CLRegion, NSTimeZone;
@protocol HMDBatchLocationDelegate, HMFLogging, HMFTimerDelegate, HMDHomeMessageReceiver, NSSecureCoding, OS_dispatch_queue;


#import "HMDHome.h"
#import "HMDHomeLocationData.h"
#import "_HMDPendingRegionUpdate.h"

@interface HMDHomeLocationHandler : HMFObject <HMDBatchLocationDelegate, HMFLogging, HMFTimerDelegate, HMDHomeMessageReceiver, NSSecureCoding>



@property (nonatomic) CGFloat coalesceRegionUpdateIntervalInSeconds; // ivar: _coalesceRegionUpdateIntervalInSeconds
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (retain, nonatomic) CLLocation *homeLocationUsingCoreRoutineLOI; // ivar: _homeLocationUsingCoreRoutineLOI
@property (retain, nonatomic) CLLocation *homeLocationUsingHomeKitAlgorithm; // ivar: _homeLocationUsingHomeKitAlgorithm
@property (retain, nonatomic) HMFTimer *homeRegionUpdateTimer; // ivar: _homeRegionUpdateTimer
@property (retain, nonatomic) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (nonatomic) NSInteger locationAuthorization; // ivar: _locationAuthorization
@property (readonly, nonatomic) HMDHomeLocationData *locationData;
@property (retain, nonatomic) NSDate *locationUpdateTimestamp; // ivar: _locationUpdateTimestamp
@property (retain, nonatomic) HMFUnfairLock *lock; // ivar: _lock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (retain, nonatomic) _HMDPendingRegionUpdate *pendingAtHomeRegionUpdate; // ivar: _pendingAtHomeRegionUpdate
@property (retain, nonatomic) _HMDPendingRegionUpdate *pendingNearbyHomeRegionUpdate; // ivar: _pendingNearbyHomeRegionUpdate
@property (retain, nonatomic) CLRegion *regionAtHome; // ivar: _regionAtHome
@property (retain, nonatomic) CLRegion *regionNearbyHome; // ivar: _regionNearbyHome
@property (nonatomic) NSInteger regionStateAtHome; // ivar: _regionStateAtHome
@property (nonatomic) NSInteger regionStateNearbyHome; // ivar: _regionStateNearbyHome
@property (readonly) Class superclass;
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_canExtractBatchLocations;
-(BOOL)_needToExtractBatchLocations;
-(BOOL)calculateAndUpdateRegionState:(NSInteger)arg0 ;
-(BOOL)isDate:(id)arg0 laterThanDate:(id)arg1 ;
-(BOOL)isLocation:(id)arg0 closeToLocation:(id)arg1 ;
-(BOOL)isNewHomeLocationTooCloseToPreviousLocation:(id)arg0 newLocation:(id)arg1 ;
-(BOOL)shouldUpdateLocationFromLocationData:(id)arg0 ;
-(BOOL)updateRegionStateFromLocation:(id)arg0 ;
-(NSInteger)__getAtHomeCalculatedState;
-(NSInteger)__getNearByHomeCalculatedState;
-(id)__initForUnitTesting:(CGFloat)arg0 home:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3 location:(id)arg4 ;
-(id)_handleHomeLocationData:(id)arg0 message:(id)arg1 ;
-(id)_handleHomeLocationDataForHH2:(id)arg0 fromMessage:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)logIdentifier;
-(id)messageDestination;
-(void)__simulateAtHomeRegionState:(NSInteger)arg0 ;
-(void)__simulateNearByHomeRegionState:(NSInteger)arg0 ;
-(void)_evaluateHomeRegionStateForCurrentDeviceLocation:(id)arg0 ;
-(void)_handleLocationAuthorization:(NSInteger)arg0 ;
-(void)_handleLocationAuthorizationChangedNotification:(id)arg0 ;
-(void)_handleRetrieveLocation:(id)arg0 ;
-(void)_processPendingRegionStateUpdates;
-(void)_registerForMessages;
-(void)_registerForRegionUpdate;
-(void)_sendLocationUpdate;
-(void)_updateTimeZone:(id)arg0 ;
-(void)accessoriesBecomeReachable;
-(void)accessoriesBecomeUnreachable;
-(void)coalesceRegionUpdateState:(NSInteger)arg0 forRegion:(id)arg1 ;
-(void)configure:(id)arg0 queue:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)dealloc;
-(void)didDetermineBatchLocation:(id)arg0 ;
-(void)didDetermineLocation:(id)arg0 ;
-(void)didDetermineState:(NSInteger)arg0 forRegion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getReachableIPAccessory:(*NSUInteger)arg0 btleAccessory:(*NSUInteger)arg1 mediaAccessory:(*NSUInteger)arg2 ;
-(void)runTransactionWithLocation:(id)arg0 updatedTime:(id)arg1 source:(NSInteger)arg2 ;
-(void)timerDidFire:(id)arg0 ;
-(void)updateHomeLocation;
-(void)updateHomeLocationFromCoreRoutine;


@end


#endif