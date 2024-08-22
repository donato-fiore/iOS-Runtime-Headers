// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CESRTRIALASSETMANAGER_H
#define CESRTRIALASSETMANAGER_H

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CESRTrialAssetManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_trialClientDict;
    NSObject<OS_dispatch_source> *_cleanupTimer;
    NSUInteger _cleanupDuration;
    NSMutableSet *_purgedLegacyDictationAssetCache;
}




+(BOOL)factorName:(id)arg0 belongsToAssetType:(NSUInteger)arg1 ;
+(NSUInteger)getAssetTypeForNamespace:(id)arg0 ;
+(id)factorNameForAssetType:(NSUInteger)arg0 language:(id)arg1 ;
+(id)factorNameForAssetType:(NSUInteger)arg0 language:(id)arg1 regionId:(id)arg2 ;
+(id)factorPrefixForAssetType:(NSUInteger)arg0 ;
+(id)jsonFilenameForAssetType:(NSUInteger)arg0 ;
+(id)sharedInstance;
+(void)initialize;
-(BOOL)_purgeInstalledAssetsExceptLanguages:(id)arg0 assetType:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)dictationIsEnabled;
-(BOOL)isBelowLocaleLimit;
-(BOOL)purgeInstalledAssetForAssetType:(NSUInteger)arg0 language:(id)arg1 regionId:(id)arg2 error:(*id)arg3 ;
-(BOOL)purgeInstalledAssetsExceptLanguages:(id)arg0 assetType:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)removeAssetsForFactors:(id)arg0 withNamespace:(id)arg1 withClient:(id)arg2 error:(*id)arg3 ;
-(BOOL)setAssetsPurgeabilityExceptLanguages:(id)arg0 assetType:(NSUInteger)arg1 ;
-(id)_installedAssetWithConfig:(id)arg0 regionId:(id)arg1 triggerDownload:(BOOL)arg2 ;
-(id)_languageFromFactorName:(id)arg0 assetType:(NSUInteger)arg1 ;
-(id)_overrideAssetStatus:(NSUInteger)arg0 ;
-(id)_trialClientForProject:(int)arg0 ;
-(id)init;
-(id)initWithClients:(id)arg0 cleanupDuration:(NSUInteger)arg1 ;
-(id)installationStatusForLanguagesForAssetType:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)installationStatusForLanguagesForAssetType:(NSUInteger)arg0 includeDetailedStatus:(BOOL)arg1 error:(*id)arg2 ;
-(id)installedAssetOfType:(NSUInteger)arg0 language:(id)arg1 ;
-(id)installedAssetWithConfig:(id)arg0 ;
-(id)installedAssetWithConfig:(id)arg0 regionId:(id)arg1 ;
-(id)installedAssetWithConfig:(id)arg0 regionId:(id)arg1 triggerDownload:(BOOL)arg2 ;
-(id)installedFileAssetOfAssetType:(NSUInteger)arg0 factorName:(id)arg1 ;
-(id)modelAttributesStatusStringWithAsset:(id)arg0 ;
-(id)modelQualityTypeStatusStringWithConfig:(id)arg0 ;
-(id)modelTypeStatusStringAndVersionWithAsset:(id)arg0 ;
-(id)overrideAssetPath:(NSUInteger)arg0 ;
-(id)supportedLanguagesWithAssetType:(NSUInteger)arg0 ;
-(id)triClients;
-(id)trialIdsForAssetType:(NSUInteger)arg0 ;
-(void)_addInstallationStatusForLegacyDictationAssets:(*id)arg0 ;
-(void)_cancelCleanupTimer;
-(void)_cleanupTimerFired;
-(void)_purgeLegacyDictationAssetForLanguage:(id)arg0 ;
-(void)_scheduleCleanupTimer;
-(void)dealloc;
// -(void)downloadAssetOfType:(NSUInteger)arg0 language:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(void)downloadAssetOfType:(NSUInteger)arg0 language:(id)arg1 urgent:(BOOL)arg2 forceUpgrade:(BOOL)arg3 progressHandler:(id)arg4 completionHandler:(unk)arg5  ;
// -(void)downloadAssetOfType:(NSUInteger)arg0 language:(id)arg1 urgent:(BOOL)arg2 progressHandler:(id)arg3 completionHandler:(unk)arg4  ;
// -(void)downloadStatusWithConfig:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)promoteAssetsForAssetType:(NSUInteger)arg0 ;
-(void)registerAssetDelegate:(id)arg0 assetType:(NSUInteger)arg1 ;
-(void)releaseClients;
-(void)releaseClientsForAssetType:(NSUInteger)arg0 ;
-(void)setAssetsProvisionalForAssetType:(NSUInteger)arg0 ;
// -(void)startDownloadLevelsForAsset:(NSUInteger)arg0 withFactor:(id)arg1 withClient:(id)arg2 withNamespace:(id)arg3 urgent:(BOOL)arg4 progress:(id)arg5 completion:(unk)arg6  ;
-(void)switchToNewAssetsForAssetType:(NSUInteger)arg0 ;
-(void)wait;


@end


#endif