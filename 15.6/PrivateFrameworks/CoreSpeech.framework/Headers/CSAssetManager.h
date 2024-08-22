// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSASSETMANAGER_H
#define CSASSETMANAGER_H

@class CSPolicy, NSString, NSMutableDictionary;
@protocol CSVoiceTriggerAssetMetaUpdateMonitorDelegate, CSSpeechEndpointAssetMetaUpdateMonitorDelegate, CSAdBlockerMetaUpdateMonitorDelegate, CSAssetControllerDelegate, CSSpeakerRecognitionAssetMetaUpdateMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSAssetDownloadingOption.h"

@interface CSAssetManager : NSObject <CSVoiceTriggerAssetMetaUpdateMonitorDelegate, CSSpeechEndpointAssetMetaUpdateMonitorDelegate, CSAdBlockerMetaUpdateMonitorDelegate, CSAssetControllerDelegate, CSSpeakerRecognitionAssetMetaUpdateMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate>

 {
    CSPolicy *_enablePolicy;
    NSString *_currentLanguageCode;
    CSAssetDownloadingOption *_downloadingOption;
    NSMutableDictionary *_observers;
    NSObject<OS_dispatch_source> *_downloadTimer;
    NSInteger _downloadTimerCount;
}


@property (readonly, nonatomic) NSString *currentLanguageCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)_canFetchRemoteAsset:(NSUInteger)arg0 ;
-(id)allInstalledAssetsOfType:(NSUInteger)arg0 language:(id)arg1 ;
-(id)assetForCurrentLanguageOfType:(NSUInteger)arg0 ;
-(id)assetOfType:(NSUInteger)arg0 language:(id)arg1 ;
-(id)initWithDownloadOption:(id)arg0 ;
-(id)installedAssetForCurrentLanguageOfType:(NSUInteger)arg0 ;
-(id)installedAssetOfType:(NSUInteger)arg0 language:(id)arg1 ;
-(void)CSAdBlockerMetaUpdateMonitor:(id)arg0 didReceiveNewAdBlockerAssetMetaData:(BOOL)arg1 ;
-(void)CSAssetController:(id)arg0 didDownloadNewAssetForType:(NSUInteger)arg1 ;
-(void)CSLanguageCodeUpdateMonitor:(id)arg0 didReceiveLanguageCodeChanged:(id)arg1 ;
-(void)CSSpeakerRecognitionAssetMetaUpdateMonitor:(id)arg0 didReceiveNewSpeakerRecognitionAssetMetaData:(BOOL)arg1 ;
-(void)CSSpeechEndpointAssetMetaUpdateMonitor:(id)arg0 didReceiveNewSpeechEndpointAssetMetaData:(BOOL)arg1 ;
-(void)CSVoiceTriggerAssetMetaUpdateMonitor:(id)arg0 didReceiveNewVoiceTriggerAssetMetaData:(BOOL)arg1 ;
-(void)_createPeriodicalDownloadTimer;
-(void)_fetchRemoteMetaData;
-(void)_startPeriodicalDownload;
-(void)_stopPeriodicalDownload;
-(void)addObserver:(id)arg0 forAssetType:(NSUInteger)arg1 ;
-(void)assetForCurrentLanguageOfType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)assetOfType:(NSUInteger)arg0 language:(id)arg1 compatibilityVersion:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)assetOfType:(NSUInteger)arg0 language:(id)arg1 completion:(id)arg2 ;
-(void)assetOfType:(NSUInteger)arg0 providerType:(NSUInteger)arg1 language:(id)arg2 completion:(id)arg3 ;
-(void)installedAssetForCurrentLanguageOfType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)installedAssetOfType:(NSUInteger)arg0 language:(id)arg1 completion:(id)arg2 ;
-(void)removeObserver:(id)arg0 forAssetType:(NSUInteger)arg1 ;
-(void)setAssetDownloadingOption:(id)arg0 ;


@end


#endif