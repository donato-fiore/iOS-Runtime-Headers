// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSMOBILEASSETSMANAGER_H
#define VSMOBILEASSETSMANAGER_H

@class NSCache;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VSTrialService.h"

@interface VSMobileAssetsManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetQueryQueue; // ivar: _assetQueryQueue
@property (retain, nonatomic) NSCache *cachedMAVoiceResources; // ivar: _cachedMAVoiceResources
@property (retain, nonatomic) NSCache *cachedMAVoiceSelections; // ivar: _cachedMAVoiceSelections
@property (retain, nonatomic) VSTrialService *trialService; // ivar: _trialService


+(BOOL)isVoiceAssetWellDefined:(id)arg0 ;
+(NSInteger)typeFromBundleIdentifier:(id)arg0 ;
+(id)bundleIdentifierForVoiceType:(NSInteger)arg0 ;
+(id)downloadOptionsWithBattery:(BOOL)arg0 ;
+(id)getLatestAssetFromArray:(id)arg0 ;
+(id)pickCorrectAssetFromLocalAssets:(id)arg0 ;
+(id)preinstallAssetsDirectory;
+(id)queryForLanguage:(id)arg0 forType:(NSInteger)arg1 voiceName:(id)arg2 gender:(NSInteger)arg3 footprint:(NSInteger)arg4 returnTypes:(NSInteger)arg5 ;
+(id)queryForVoiceResourceAsset:(id)arg0 returnTypes:(NSInteger)arg1 ;
+(id)sharedManager;
+(id)voiceResourceFromAsset:(id)arg0 ;
+(void)amendVoice:(id)arg0 withDefaultSettingsFrom:(id)arg1 ;
-(BOOL)cancelDownloads:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldDownloadTrialResource:(id)arg0 ;
-(BOOL)shouldDownloadTrialVoice:(id)arg0 ;
-(id)_builtInVoiceForLanguage:(id)arg0 ;
-(id)_getResults:(id)arg0 ;
-(id)_getVoiceAssetsForType:(NSInteger)arg0 voiceName:(id)arg1 language:(id)arg2 gender:(NSInteger)arg3 footprint:(NSInteger)arg4 returnTypes:(NSInteger)arg5 ;
-(id)_installedVoiceResourceAssetForLanguage:(id)arg0 ;
-(id)_localVoiceForLanguageAndNamePath:(id)arg0 ;
-(id)_mobileAssetVoiceForLanguage:(id)arg0 name:(id)arg1 type:(NSInteger)arg2 gender:(NSInteger)arg3 footprint:(NSInteger)arg4 ;
-(id)_mobileAssetVoiceResourceWithLanguage:(id)arg0 ;
-(id)_trialVoiceResourceWithLanguage:(id)arg0 ;
-(id)_trialVoiceWithLanguage:(id)arg0 name:(id)arg1 type:(NSInteger)arg2 footprint:(NSInteger)arg3 ;
-(id)activeVoiceAssets;
-(id)builtInVoices;
-(id)cleanUnusedAssets;
-(id)definedVoicesForLanguage:(id)arg0 voiceName:(id)arg1 type:(NSInteger)arg2 footprint:(NSInteger)arg3 ;
-(id)downloadCatalog:(id)arg0 options:(id)arg1 ;
-(id)inactiveVoiceAssets;
-(id)init;
-(id)installedAssetsForType:(NSInteger)arg0 voicename:(id)arg1 language:(id)arg2 gender:(NSInteger)arg3 footprint:(NSInteger)arg4 ;
-(id)installedLocalVoices;
-(id)installedTrialVoiceResources;
-(id)installedTrialVoicesForType:(NSInteger)arg0 voiceName:(id)arg1 language:(id)arg2 footprint:(NSInteger)arg3 ;
-(id)installedVoiceResources;
-(id)preinstallAssetsMetadata;
-(id)preinstalledVoicesForLanguage:(id)arg0 gender:(NSInteger)arg1 name:(id)arg2 ;
-(id)selectPreinstalledVoiceForLanguage:(id)arg0 gender:(NSInteger)arg1 name:(id)arg2 ;
-(id)selectSubscribableVoiceForLanguage:(id)arg0 name:(id)arg1 type:(NSInteger)arg2 gender:(NSInteger)arg3 ;
-(id)selectVoiceForLang:(id)arg0 name:(id)arg1 type:(NSInteger)arg2 gender:(NSInteger)arg3 footprint:(NSInteger)arg4 ;
-(id)selectVoiceResourceAssetForLanguage:(id)arg0 ;
-(id)voiceAssetFromPreinstallMetadata:(id)arg0 ;
-(id)voiceAssetWithName:(id)arg0 localOnly:(BOOL)arg1 outError:(*id)arg2 ;
-(id)voiceDataFromAsset:(id)arg0 ;
-(id)voiceDataWithBundleIdentifier:(id)arg0 attributes:(id)arg1 voicePathCallback:(id)arg2 ;
// -(void)_downloadAsset:(id)arg0 options:(id)arg1 progress:(id)arg2 completion:(unk)arg3  ;
-(void)_purgeAsset:(id)arg0 ;
-(void)_removeTrialVoices:(id)arg0 completion:(id)arg1 ;
-(void)amendVoiceAssetWithLatestKnownData:(id)arg0 ;
-(void)amendVoiceWithDefaultSettings:(id)arg0 ;
-(void)cancelDownload:(id)arg0 completion:(id)arg1 ;
-(void)cancelResourceDownload:(id)arg0 completion:(id)arg1 ;
-(void)cancelTrialVoiceDownload:(id)arg0 completion:(id)arg1 ;
-(void)cleanMobileAssetVoiceResourcesWithActiveLanguages:(id)arg0 ;
-(void)cleanOldMobileAssetVoiceResources;
-(void)downloadCatalog:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)downloadTrialVoice:(id)arg0 options:(id)arg1 progressUpdateHandler:(id)arg2 ;
-(void)downloadTrialVoiceResource:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)downloadVoiceAsset:(id)arg0 options:(id)arg1 progressUpdateHandler:(id)arg2 ;
-(void)downloadVoiceAsset:(id)arg0 useBattery:(BOOL)arg1 progressUpdateHandler:(id)arg2 ;
-(void)downloadVoiceResource:(id)arg0 completion:(id)arg1 ;
-(void)downloadVoiceResource:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)downloadVoiceResourceCatalogWithCompletion:(id)arg0 ;
-(void)migrateAssetIfNeededWithAssetType:(id)arg0 ;
-(void)migrateAssets;
-(void)purgeAsset:(id)arg0 ;
-(void)removeMobileAssetVoiceResource:(id)arg0 completion:(id)arg1 ;
-(void)removeTrialVoice:(id)arg0 completion:(id)arg1 ;
-(void)removeTrialVoiceResource:(id)arg0 completion:(id)arg1 ;
-(void)removeVoiceAsset:(id)arg0 completion:(id)arg1 ;
-(void)removeVoiceResource:(id)arg0 completion:(id)arg1 ;
-(void)resetCache;
-(void)resetResourcesCache;


@end


#endif