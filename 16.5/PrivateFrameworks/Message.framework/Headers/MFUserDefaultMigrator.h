// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFUSERDEFAULTMIGRATOR_H
#define MFUSERDEFAULTMIGRATOR_H


#import <Foundation/Foundation.h>


@interface MFUserDefaultMigrator : NSObject



+(BOOL)migratePreferencesToSharedAppGroup;
+(id)_keysToMigrateToSharedAppGroup;
+(id)currentDeviceIdentifer;
+(id)log;
+(id)mobileMailDefaultForKey:(id)arg0 ;
+(id)oldKeysToNewKeysMap;
+(void)_migrateExtPropertiesPlist;
+(void)migrateDefaults:(id)arg0 ;
+(void)migrateDefaultsFromOldKeysToNewKeys:(id)arg0 ;
+(void)migratePropertyForOldKey:(id)arg0 newKey:(id)arg1 ;
+(void)removeMobileMailDefaultForKey:(id)arg0 ;


@end


#endif