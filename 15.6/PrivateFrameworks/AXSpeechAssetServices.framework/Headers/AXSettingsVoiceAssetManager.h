// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSETTINGSVOICEASSETMANAGER_H
#define AXSETTINGSVOICEASSETMANAGER_H

@class NSPointerArray, AVSpeechSynthesizer, NSString;
@protocol AVSpeechSynthesizerDelegate;

#import <Foundation/Foundation.h>


@interface AXSettingsVoiceAssetManager : NSObject <AVSpeechSynthesizerDelegate>

 {
    *__SCNetworkReachability _reachability;
    NSPointerArray *_delegates;
    AVSpeechSynthesizer *_samplePlayer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)allowedToDownloadVoiceAssets;
-(BOOL)inUnitTestMode;
-(BOOL)isAssetManagedBySiriForVoiceId:(id)arg0 ;
-(NSInteger)diskSizeForAsset:(id)arg0 ;
-(id)_allAssetsForVoiceId:(id)arg0 forDeletion:(BOOL)arg1 ;
-(id)_allInstalledAssetsForVoiceId:(id)arg0 ;
-(id)_assetForVoiceId:(id)arg0 forDeletion:(BOOL)arg1 ;
-(id)_assetTypeForVoiceId:(id)arg0 ;
-(id)_assetUpdaterClient;
-(id)_cachedAssetForVoiceId:(id)arg0 ;
-(id)_currentDelegates;
-(id)_mobileAssetDownloadOptions;
-(id)allInstalledAssetsForVoiceId:(id)arg0 ;
-(id)assetsForTesting;
-(id)init;
-(id)mobileAssetDownloadQueue;
-(id)mobileAssetForVoiceId:(id)arg0 ;
-(id)mobileAssetWorkQueue;
-(id)selectedIdsForTesting;
-(id)voiceAssetForVoiceId:(id)arg0 ;
-(void)_deleteMobileAssetVoice:(id)arg0 ;
-(void)_deleteSiriAssetVoice:(id)arg0 ;
-(void)_handleAssetProgress:(id)arg0 voiceId:(id)arg1 diskSize:(NSInteger)arg2 asset:(id)arg3 ;
-(void)_notifySiriVoiceAssetUsageChanged:(id)arg0 forLanguage:(id)arg1 ;
-(void)_requestMobileAssetVoiceDownloadProgress:(id)arg0 ;
-(void)_requestSiriVoiceDownloadProgress:(id)arg0 ;
-(void)_requestVoiceDownloadProgress:(id)arg0 ;
-(void)_startDownloadingMobileAssetVoice:(id)arg0 ;
-(void)_startDownloadingSiriVoice:(id)arg0 ;
-(void)_startDownloadingVoice:(id)arg0 ;
-(void)_stopDownloadingMobileAssetVoice:(id)arg0 ;
-(void)_stopDownloadingSiriAssetVoice:(id)arg0 ;
-(void)_updateAllowedToDownload;
-(void)addDelegate:(id)arg0 ;
-(void)cleanUpExtraInstalledAssetsIfNecessary:(id)arg0 ;
-(void)clientUpdateAvailableSpeechAssets;
-(void)dealloc;
-(void)deleteDownloadVoice:(id)arg0 ;
-(void)playSample:(id)arg0 completion:(id)arg1 ;
-(void)removeDelegate:(id)arg0 ;
-(void)removeSiriVoiceUsage:(id)arg0 forLanguage:(id)arg1 ;
-(void)replaceTestAsset:(id)arg0 withAsset:(id)arg1 ;
-(void)requestVoiceDownloadProgress:(id)arg0 ;
-(void)setAssetsForTesting:(id)arg0 ;
-(void)setSelectedIdsForTesting:(id)arg0 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeechUtterance:(id)arg1 ;
-(void)startDownloadingVoice:(id)arg0 ;
-(void)stopDownloadingVoice:(id)arg0 ;
-(void)updateAvailableSpeechAssetsSynchronously;


@end


#endif