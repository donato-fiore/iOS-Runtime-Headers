// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFLEGACYPOSTERMIGRATIONHELPER_H
#define PBFLEGACYPOSTERMIGRATIONHELPER_H

@class PBUIPosterWallpaperMigrationInfo;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PBFPosterExtensionDataStore.h"

@interface PBFLegacyPosterMigrationHelper : NSObject

@property (readonly, nonatomic) BOOL canMigrateLegacyLockPoster; // ivar: _canMigrateLegacyLockPoster
@property (readonly, nonatomic) BOOL canMigrateLegacyPoster; // ivar: _canMigrateLegacyPoster
@property (readonly, nonatomic) PBFPosterExtensionDataStore *dataStore; // ivar: _dataStore
@property (readonly, nonatomic, getter=isDistinctHomeScreenMigrationEnabled) BOOL distinctHomeScreenMigrationEnabled; // ivar: _distinctHomeScreenMigrationEnabled
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *homeMigrationQueue; // ivar: _homeMigrationQueue
@property (readonly, nonatomic) id *legacyPosterPair; // ivar: _legacyPosterPair
@property (readonly, nonatomic, getter=isMigrationEnabled) BOOL migrationEnabled; // ivar: _migrationEnabled
@property (readonly, nonatomic) PBUIPosterWallpaperMigrationInfo *migrationInfo; // ivar: _migrationInfo


-(BOOL)_shouldAllowMigration;
-(id)initWithDataStore:(id)arg0 legacyPosterPair:(id)arg1 ;
-(id)lockScreenMigrationViewController;
-(void)finalizeMigrationWithMigratedConfigurationUUID:(id)arg0 ;
-(void)migrateHomePosterAndAssociateToConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)revertMigrationWithMigratedConfigurationUUID:(id)arg0 ;


@end


#endif