// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDEFAULTRESIDENTDEVICEMANAGERROARBACKINGSTORE_H
#define HMDDEFAULTRESIDENTDEVICEMANAGERROARBACKINGSTORE_H

@class NSString, NSMapTable;
@protocol HMFLogging, HMDResidentDeviceManagerRoarBackingStore;

#import <Foundation/Foundation.h>

#import "HMDAccountRegistry.h"
#import "HMDHome.h"

@interface HMDDefaultResidentDeviceManagerRoarBackingStore : NSObject <HMFLogging, HMDResidentDeviceManagerRoarBackingStore>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, weak) HMDAccountRegistry *accountRegistry; // ivar: _accountRegistry
@property (readonly) NSString *cloudChangeUpdateNotificationName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) NSMapTable *residentDeviceByObjectID; // ivar: _residentDeviceByObjectID
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)_addDeviceIdentifiersIfNecessary:(id)arg0 fromResidentDevice:(id)arg1 ;
-(BOOL)_shouldUpdateDeviceIdentifiersForResident:(id)arg0 fromResidentDevice:(id)arg1 ;
-(id)findResidents;
-(id)handleCloudResidentChange:(id)arg0 currentResidents:(id)arg1 isCurrentDevicePrimaryResident:(BOOL)arg2 ;
-(id)initWithHome:(id)arg0 accountRegistry:(id)arg1 ;
-(id)residentsRequiringReachabilityUpdate:(id)arg0 ;
// -(void)_mapResidentsToMKFResidents:(id)arg0 operation:(id)arg1 finished:(unk)arg2  ;
-(void)updateIdentifiersForAvailableResidentDevices:(id)arg0 ;
-(void)updateReachabilityForResidents:(id)arg0 ;


@end


#endif