// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _KSICLOUDDEVICELISTMONITOR_H
#define _KSICLOUDDEVICELISTMONITOR_H

@class ACAccount, ACAccountStore;

#import <Foundation/Foundation.h>


@interface _KSiCloudDeviceListMonitor : NSObject

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (nonatomic) NSInteger majorVersForCloudKitSyncMacOS; // ivar: _majorVersForCloudKitSyncMacOS
@property (nonatomic) NSInteger majorVersForCloudKitSynciOS; // ivar: _majorVersForCloudKitSynciOS
@property (nonatomic) NSInteger minorSubversionForCloudKitSyncMacOS; // ivar: _minorSubversionForCloudKitSyncMacOS
@property (nonatomic) NSInteger minorVersForCloudKitSyncMacOS; // ivar: _minorVersForCloudKitSyncMacOS
@property (nonatomic) NSInteger minorVersForCloudKitSynciOS; // ivar: _minorVersForCloudKitSynciOS


+(id)iCloudDeviceListMonitor;
-(BOOL)canMigrateToCloudKit;
-(BOOL)isSWVersionCloudKitSyncCompatible:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)fetchCloudKitDevicesWithCompletionBlock:(id)arg0 ;
-(void)fetchICloudDevicesWithCompletionBlock:(id)arg0 ;
-(void)isAccountCompatibleForCloudKitSyncingWithCompletionBlock:(id)arg0 ;
-(void)queryMigrationState;
-(void)resetDataNoAccount;


@end


#endif