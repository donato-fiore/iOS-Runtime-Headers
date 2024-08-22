// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDEVICERESTOREMIGRATIONSUPPORT_H
#define PLDEVICERESTOREMIGRATIONSUPPORT_H


#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"

@interface PLDeviceRestoreMigrationSupport : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    unsigned int _userDataDisposition;
    os_unfair_lock_s _userDataDispositionLock;
    BOOL _didWaitForPrerequisites;
    os_unfair_lock_s _prerequisitesCompleteBlockLock;
}


@property (nonatomic, getter=hasDataMigratorPluginRequestedLibraryMigration) BOOL dataMigratorPluginHasRequestedLibraryMigration; // ivar: _dataMigratorPluginHasRequestedLibraryMigration
@property (copy, nonatomic) id *prerequisitesCompleteBlock; // ivar: _prerequisitesCompleteBlock


+(BOOL)isDataMigrationInProgress;
-(BOOL)_userDataDispositionMatchesDisposition:(unsigned int)arg0 ;
-(BOOL)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;
-(BOOL)isOTARestoreInProgress;
-(BOOL)isRestoreFromBackup;
-(BOOL)isRestoreFromBackupSourceCloud;
-(BOOL)isRestoreFromBackupSourceDeviceToDevice;
-(BOOL)isRestoreFromBackupSourceDifferentDevice;
-(BOOL)isRestoreFromBackupSourceMegaBackup;
-(BOOL)isRestoreFromBackupSourceiTunes;
-(BOOL)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(NSInteger)arg0 ;
-(id)_dataMigrationInfo;
-(id)_newShortLivedLibrarySupportingLibraryOpenWithName:(char *)arg0 ;
-(id)initWithLibraryServicesManager:(id)arg0 ;
-(id)restoreTypeDescription;
-(void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)arg0 ;
-(void)_linkAsideAlbumMetadata;
-(void)_prepareDatabaseForOTAAssetsPhase;
-(void)_setAlbumPendingItemCountsWithContext:(id)arg0 shouldSave:(BOOL)arg1 ;
-(void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)arg0 populateAlbumMappings:(id)arg1 ;
-(void)deletePhotoStreamDataForStreamID:(id)arg0 ;
-(void)waitForDataMigratorPrerequisitesForTrackingRestoreFromCloud;


@end


#endif