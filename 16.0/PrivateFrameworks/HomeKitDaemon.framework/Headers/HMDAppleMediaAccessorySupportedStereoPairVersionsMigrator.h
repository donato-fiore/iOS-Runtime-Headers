// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAPPLEMEDIAACCESSORYSUPPORTEDSTEREOPAIRVERSIONSMIGRATOR_H
#define HMDAPPLEMEDIAACCESSORYSUPPORTEDSTEREOPAIRVERSIONSMIGRATOR_H

@class NSString, NSUUID;
@protocol HMDAppleMediaAccessorySupportedStereoPairVersionsMigratorDataSource, HMFLogging;

#import <Foundation/Foundation.h>

#import "HMDBackingStore.h"

@interface HMDAppleMediaAccessorySupportedStereoPairVersionsMigrator : NSObject <HMDAppleMediaAccessorySupportedStereoPairVersionsMigratorDataSource, HMFLogging>



@property (retain) HMDBackingStore *backingStore; // ivar: _backingStore
@property (weak) NSObject<HMDAppleMediaAccessorySupportedStereoPairVersionsMigratorDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL didMigrate; // ivar: _didMigrate
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithIdentifier:(id)arg0 ;
-(id)logIdentifier;
-(id)mkfAppleMediaAccessoryWithModelID:(id)arg0 ;
-(id)mkfAppleMediaAccessoryWithModelID:(id)arg0 forAppleMediaAccessorySupportedStereoPairVersionsMigrator:(id)arg1 ;
-(void)configureWithPrimaryResidentChangeMonitor:(id)arg0 backingStore:(id)arg1 notificationCenter:(id)arg2 ;
-(void)handleIsCurrentPrimaryResident:(BOOL)arg0 ;
-(void)handlePrimaryResidentIsCurrentDeviceChangeNotification:(id)arg0 ;
-(void)migrateSupportedStereoPairVersions;
-(void)registerForNotificationsWithNotificationCenter:(id)arg0 primaryResidentChangeMonitor:(id)arg1 ;


@end


#endif