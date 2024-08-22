// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRMIGRATOR_H
#define NRMIGRATOR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "NRDevice.h"

@interface NRMigrator : NSObject {
    BOOL _migrating;
}


@property (readonly, retain, nonatomic) NSArray *devicesExpectedToBeMigratableAfterRestore;
@property (readonly, retain, nonatomic) NSArray *migratableDevices;
@property (readonly, retain, nonatomic) NSArray *migratableDevicesRequiringConsent;
@property (readonly, retain, nonatomic) NRDevice *migratingDevice; // ivar: _migratingDevice
@property (readonly, nonatomic) BOOL migrationIsAvailable;


+(id)migrationDataPreRestoreForConsentedDevices:(id)arg0 ;
+(id)sharedMigrator;
+(void)ingestPostRestoreMigrationDataForConsentedDevices:(id)arg0 ;
-(id)devicesFromMigrationConsentRequestData:(id)arg0 ;
-(id)lastMigrationRequestPhoneName;
-(id)migrationConsentRequestData;
-(void)beginMigrationWithDevice:(id)arg0 passcode:(id)arg1 withBlock:(id)arg2 ;
-(void)beginMigrationWithDevice:(id)arg0 withCompletion:(id)arg1 ;
-(void)enterPreMigrationMode;
-(void)isPhoneReadyToMigrateDevice:(id)arg0 withCompletion:(id)arg1 ;
-(void)setMigrationConsented:(BOOL)arg0 forDevice:(id)arg1 withBlock:(id)arg2 ;
-(void)setMigrationConsented:(BOOL)arg0 forDeviceID:(id)arg1 withBlock:(id)arg2 ;


@end


#endif