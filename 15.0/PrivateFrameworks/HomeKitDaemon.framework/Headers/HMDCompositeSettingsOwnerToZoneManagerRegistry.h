// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCOMPOSITESETTINGSOWNERTOZONEMANAGERREGISTRY_H
#define HMDCOMPOSITESETTINGSOWNERTOZONEMANAGERREGISTRY_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface HMDCompositeSettingsOwnerToZoneManagerRegistry : NSObject {
    os_unfair_lock_s _lock;
    NSMapTable *_settingOwnerToZoneManagerTable;
}




-(id)init;
-(id)zoneManagerForUUID:(id)arg0 ;
-(void)createZoneManagerIfNotExistForUUID:(id)arg0 workQueue:(id)arg1 zoneName:(id)arg2 ;
-(void)removeZoneWithZoneName:(id)arg0 uuid:(id)arg1 workQueue:(id)arg2 ;


@end


#endif