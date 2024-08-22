// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEPRIMARYRESIDENTINITIALREACHABILITYMANAGER_H
#define HMDHOMEPRIMARYRESIDENTINITIALREACHABILITYMANAGER_H

@class HMFObject, NSString, NSNumber, NSNotificationCenter, NSUUID;
@protocol HMFLogging, HMDHomePrimaryResidentInitialReachabilityManagerDataSource, OS_dispatch_queue;


#import "HMDHome.h"
#import "HMDResidentReachabilityState.h"

@interface HMDHomePrimaryResidentInitialReachabilityManager : HMFObject <HMFLogging>



@property (readonly) NSObject<HMDHomePrimaryResidentInitialReachabilityManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMDHome *home; // ivar: _home
@property (readonly, copy) NSNumber *initialReachability;
@property (readonly, copy) NSString *key; // ivar: _key
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, copy) HMDResidentReachabilityState *persistedState;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid; // ivar: _uuid
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithUUID:(id)arg0 workQueue:(id)arg1 ;
-(id)initWithUUID:(id)arg0 workQueue:(id)arg1 notificationCenter:(id)arg2 dataSource:(id)arg3 ;
-(id)logIdentifier;
-(void)clearPersistedState;
-(void)configureWithHome:(id)arg0 ;
-(void)handleHomeRemovedNotification:(id)arg0 ;
-(void)handlePrimaryResidentUpdateNotification:(id)arg0 ;
-(void)handlePrimaryResidentUpdated:(id)arg0 reason:(id)arg1 ;
-(void)handleResidentDeviceEnabledStateChangeNotification:(id)arg0 ;
-(void)handleResidentDeviceManagerUpdateResidentNotification:(id)arg0 ;
-(void)persistState:(id)arg0 ;


@end


#endif