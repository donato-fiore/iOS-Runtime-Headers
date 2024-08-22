// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSASSETCONTROLLER_H
#define CSASSETCONTROLLER_H

@class NSDictionary, NSString, NSMutableDictionary;
@protocol CSEventMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSAssetController : NSObject <CSEventMonitorDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetsMigrationQueue; // ivar: _assetsMigrationQueue
@property (retain, nonatomic) NSDictionary *csAssetsDictionary; // ivar: _csAssetsDictionary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(NSUInteger)getAdBlockerCurrentCompatibilityVersion;
+(NSUInteger)getEndpointAssetCurrentCompatibilityVersion;
+(NSUInteger)getLanguageDetectorCurrentCompatibilityVersion;
+(NSUInteger)getSpeakerRecognitionCurrentCompatibilityVersion;
+(NSUInteger)getVoiceTriggerAssetCurrentCompatibilityVersion;
+(id)filteredAssetsForAssets:(id)arg0 assetType:(NSUInteger)arg1 language:(id)arg2 ;
+(id)filteredAssetsForFetchRemoteMetaDataForAssets:(id)arg0 assetType:(NSUInteger)arg1 ;
+(id)getAdBlockerAssetTypeString;
+(id)getAssetTypeStringForType:(NSUInteger)arg0 ;
+(id)getEndpointAssetTypeString;
+(id)getLanguageDetectorAssetTypeString;
+(id)getSpeakerRecognitionAssetTypeString;
+(id)getVoiceTriggerAssetTypeString;
+(id)sharedController;
+(void)addKeyValuePairForQuery:(*id)arg0 assetType:(NSUInteger)arg1 ;
-(BOOL)_isReadyToUse;
-(BOOL)_isRetryRecommendedWithResult:(NSInteger)arg0 ;
-(id)_assetQueryForAssetType:(NSUInteger)arg0 ;
-(id)_defaultDownloadOptions;
-(id)_findLatestInstalledAsset:(id)arg0 ;
-(id)_installedAssetOfType:(NSUInteger)arg0 withLanguage:(id)arg1 ;
-(id)allInstalledAssetsOfType:(NSUInteger)arg0 language:(id)arg1 ;
-(id)assetOfType:(NSUInteger)arg0 language:(id)arg1 ;
-(id)init;
-(id)installedAssetOfType:(NSUInteger)arg0 language:(id)arg1 ;
-(id)installedAssetOfType:(NSUInteger)arg0 withLanguage:(id)arg1 ;
-(void)CSEventMonitorDidReceiveEvent:(id)arg0 ;
-(void)_cleanUpMobileAssetV1Directory;
-(void)_downloadAsset:(id)arg0 withComplete:(id)arg1 ;
-(void)_downloadAssetCatalogForAssetType:(NSUInteger)arg0 complete:(id)arg1 ;
-(void)_fetchRemoteAssetOfType:(NSUInteger)arg0 withLanguage:(id)arg1 completion:(id)arg2 ;
-(void)_fetchRemoteAssetOfType:(NSUInteger)arg0 withLanguage:(id)arg1 query:(id)arg2 completion:(id)arg3 ;
-(void)_installedAssetOfType:(NSUInteger)arg0 query:(id)arg1 withLanguage:(id)arg2 completion:(id)arg3 ;
-(void)_installedAssetOfType:(NSUInteger)arg0 withLanguage:(id)arg1 completion:(id)arg2 ;
-(void)_runAssetQuery:(id)arg0 completion:(id)arg1 ;
// -(void)_startDownloadingAsset:(id)arg0 progress:(id)arg1 completion:(unk)arg2  ;
-(void)_updateFromRemoteToLocalAssets:(id)arg0 forAssetType:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)addObserver:(id)arg0 forAssetType:(NSUInteger)arg1 ;
-(void)assetOfType:(NSUInteger)arg0 language:(id)arg1 compatibilityVersion:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)assetOfType:(NSUInteger)arg0 language:(id)arg1 completion:(id)arg2 ;
-(void)fetchRemoteMetaOfType:(NSUInteger)arg0 ;
-(void)fetchRemoteMetaOfType:(NSUInteger)arg0 allowRetry:(BOOL)arg1 ;
-(void)installedAssetOfType:(NSUInteger)arg0 language:(id)arg1 completion:(id)arg2 ;
-(void)installedAssetOfType:(NSUInteger)arg0 withLanguage:(id)arg1 completion:(id)arg2 ;
-(void)removeObserver:(id)arg0 forAssetType:(NSUInteger)arg1 ;


@end


#endif