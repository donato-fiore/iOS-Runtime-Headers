// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCOMPOSITESETTINGSOWNERTODATABASEADAPTERREGISTRY_H
#define HMDCOMPOSITESETTINGSOWNERTODATABASEADAPTERREGISTRY_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface HMDCompositeSettingsOwnerToDatabaseAdapterRegistry : NSObject {
    os_unfair_lock_s _lock;
    NSMapTable *_settingOwnerToDatabaseAdapterTable;
    NSMapTable *_settingOwnerToZoneManagerTable;
}




-(id)databaseAdapterForUUID:(id)arg0 ;
-(id)init;
-(void)createDatabaseAdapterIfNotExistForUUID:(id)arg0 homeUUID:(id)arg1 accessory:(id)arg2 workQueue:(id)arg3 zoneName:(id)arg4 ;
-(void)removeZoneWithZoneName:(id)arg0 uuid:(id)arg1 workQueue:(id)arg2 ;


@end


#endif