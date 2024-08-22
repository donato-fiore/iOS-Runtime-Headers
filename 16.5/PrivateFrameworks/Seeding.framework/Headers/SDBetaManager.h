// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SDBETAMANAGER_H
#define SDBETAMANAGER_H

@class NSArray, NSDate, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SDBetaManager : NSObject

@property (nonatomic) NSUInteger cachedPlatform; // ivar: _cachedPlatform
@property (retain, nonatomic) NSArray *cachedPrograms; // ivar: _cachedPrograms
@property BOOL isMigratingFromProfiles; // ivar: _isMigratingFromProfiles
@property (retain, nonatomic) NSDate *lastCached; // ivar: _lastCached
@property (retain) NSMutableArray *postMigrationTasks; // ivar: _postMigrationTasks


+(BOOL)_isEnrolledInBetaProgram;
+(BOOL)canFileFeedbackOnThisDevice:(*id)arg0 ;
+(BOOL)isBuildPrefix:(id)arg0 greaterThanOrEqualToBuild:(id)arg1 ;
+(id)_currentBetaProgram;
+(id)sharedManager;
+(void)canFileFeedbackOnThisDeviceWithCompletion:(id)arg0 ;
-(BOOL)_canCurrentDeviceEnrollInBetaUpdates;
-(BOOL)_hasMigratedProfiles;
-(BOOL)_isEnrolledInBetaProgram;
-(BOOL)_isEnrollmentAllowedByDeviceManagement;
-(BOOL)_isUsingSeedingAppleID;
-(BOOL)_unenrollFromBetaProgramWithUserIdentifier:(id)arg0 ;
-(BOOL)canCurrentDeviceEnrollInBetaUpdates;
-(BOOL)canToggleFBAVisibility;
-(BOOL)isCacheValidForPlatforms:(NSUInteger)arg0 ;
-(BOOL)isCurrentDeviceUsingSeedingAppleID;
-(id)_assetServerURLString;
-(id)_brainServerURLString;
-(id)_deviceAppleIDUsername;
-(id)_seedingAppleIDUsername;
-(id)availableBetaProgramsForPlatforms:(NSUInteger)arg0 ;
-(id)deviceAppleIDUsernameForCurrentDevice;
-(id)enrolledBetaProgramForCurrentDevice;
-(id)enrollmentMetadataForCurrentDevice;
-(id)membershipURL;
-(id)membershipURLForPlatforms:(NSUInteger)arg0 ;
-(id)migrateURLForAssetAudience:(id)arg0 ;
-(id)saveResponse:(id)arg0 platforms:(NSUInteger)arg1 ;
-(id)seedingAppleIDUsernameForCurrentDevice;
-(id)serverURLWithPath:(id)arg0 arguments:(id)arg1 ;
-(id)verifyURLForAssetAudience:(id)arg0 programID:(NSInteger)arg1 ;
-(id)verifyURLForCatalog:(id)arg0 ;
-(void)_changeFBAVisibilityWithUserIdentifier:(id)arg0 isVisible:(BOOL)arg1 ;
-(void)_deleteBetaProgram;
-(void)_deleteSeedingAppleAccountWithCompletion:(id)arg0 ;
-(void)_enrollUsingSeedingConfiguration:(id)arg0 ;
-(void)_enrollUsingSeedingConfiguration:(id)arg0 userIdentifier:(id)arg1 ;
-(void)_markMigrationComplete;
-(void)_migrateFromProfilesIfNeeded;
-(void)_queryProgramsForSystemAccountsWithPlatforms:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_resetAssetAudience;
-(void)_saveAppleAccountIdentifier:(id)arg0 ;
-(void)_saveAppleAccountIdentifierWithAlternateDSID:(id)arg0 completion:(id)arg1 ;
-(void)_saveBetaProgram:(id)arg0 ;
-(void)_setAssetAudienceString:(id)arg0 ;
-(void)_setAssetServerURLString:(id)arg0 ;
-(void)_setBrainServerURLString:(id)arg0 ;
-(void)_setMemberEnrolled:(BOOL)arg0 ;
-(void)_synchronizeCFPreferences;
-(void)canFileFeedbackOnDevice:(id)arg0 completion:(id)arg1 ;
-(void)deleteSeedingAppleAccountForCurrentDeviceWithCompletion:(id)arg0 ;
-(void)enrollCurrentDeviceWithEnrollmentMetadata:(id)arg0 completion:(id)arg1 ;
-(void)enrollDevice:(id)arg0 inBetaProgram:(id)arg1 completion:(id)arg2 ;
-(void)enrollDevice:(id)arg0 withEnrollmentMetadata:(id)arg1 completion:(id)arg2 ;
-(void)enrolledBetaProgramForDevice:(id)arg0 completion:(id)arg1 ;
-(void)enrollmentMetadataForCurrentDeviceWithCompletion:(id)arg0 ;
-(void)enrollmentMetadataForDevice:(id)arg0 completion:(id)arg1 ;
-(void)ensureThisRunsAfterMigration:(id)arg0 ;
-(void)getAppleIDAuthenticationAccountForAlternateDSID:(id)arg0 attempt:(NSInteger)arg1 completion:(id)arg2 ;
-(void)getMigrationProgramForAssetAudience:(id)arg0 completion:(id)arg1 ;
-(void)invalidateCache;
-(void)invalidateCacheWithCompletion:(id)arg0 ;
-(void)isDeviceEnrolledInBetaProgram:(id)arg0 completion:(id)arg1 ;
-(void)queryProgramsForSystemAccountsWithPlatforms:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)saveAppleAccountIdentifierWithAlternateDSIDForCurrentDevice:(id)arg0 completion:(id)arg1 ;
-(void)savePrograms:(id)arg0 forPlatforms:(NSUInteger)arg1 ;
-(void)setProfilesEnabledFromHeaderInResponse:(id)arg0 ;
-(void)unenrollDevice:(id)arg0 completion:(id)arg1 ;
-(void)verifyAssetAudience:(id)arg0 programID:(NSInteger)arg1 skipEnrollmentCheck:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)verifyAssetAudience:(id)arg0 programID:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(void)verifyCatalog:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif