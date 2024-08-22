// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSVOICETRIGGERASSETHANDLERMAC_H
#define CSVOICETRIGGERASSETHANDLERMAC_H

@class CSAsset, NSMutableDictionary, NSString;
@protocol CSVoiceTriggerAssetDownloadMonitorDelegate, CSFirstUnlockMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate, CSTrialAssetDownloadMonitorDelegate, OS_dispatch_queue;


#import "CSVoiceTriggerAssetHandler.h"
#import "CSAssetManager.h"
#import "CSFirstUnlockMonitor.h"
#import "CSLanguageCodeUpdateMonitor.h"
#import "CSTrialAssetDownloadMonitor.h"
#import "CSTrialAssetManager.h"
#import "CSVoiceTriggerAssetDownloadMonitor.h"

@interface CSVoiceTriggerAssetHandlerMac : CSVoiceTriggerAssetHandler <CSVoiceTriggerAssetDownloadMonitorDelegate, CSFirstUnlockMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate, CSTrialAssetDownloadMonitorDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) CSAssetManager *assetManager; // ivar: _assetManager
@property (retain) CSAsset *cachedAsset; // ivar: _cachedAsset
@property (retain) NSMutableDictionary *cachedEndpointAssets; // ivar: _cachedEndpointAssets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CSFirstUnlockMonitor *firstUnlockMonitor; // ivar: _firstUnlockMonitor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CSLanguageCodeUpdateMonitor *languageCodeUpdateMonitor; // ivar: _languageCodeUpdateMonitor
@property (readonly) Class superclass;
@property (retain, nonatomic) CSTrialAssetDownloadMonitor *trialAssetDownloadMonitor; // ivar: _trialAssetDownloadMonitor
@property (retain, nonatomic) CSTrialAssetManager *trialAssetManager; // ivar: _trialAssetManager
@property (retain, nonatomic) CSVoiceTriggerAssetDownloadMonitor *voiceTriggerAssetDownloadMonitor; // ivar: _voiceTriggerAssetDownloadMonitor


-(id)init;
-(id)initWithVoiceTriggerAssetDownloadMonitor:(id)arg0 languageCodeUpdateMonitor:(id)arg1 firstUnlockMonitor:(id)arg2 trialAssetDownloadMonitor:(id)arg3 assetManager:(id)arg4 trialAssetManager:(id)arg5 ;
-(void)CSFirstUnlockMonitor:(id)arg0 didReceiveFirstUnlock:(BOOL)arg1 ;
-(void)CSLanguageCodeUpdateMonitor:(id)arg0 didReceiveLanguageCodeChanged:(id)arg1 ;
-(void)CSVoiceTriggerAssetDownloadMonitor:(id)arg0 didInstallNewAsset:(BOOL)arg1 ;
-(void)_checkNewAssetAvailablity;
-(void)_checkNewAssetAvailablityForEndpoint;
-(void)_getVoiceTriggerAssetFromAssetManager:(id)arg0 ;
-(void)_getVoiceTriggerAssetFromAssetManagerWithLocale:(id)arg0 completion:(id)arg1 ;
-(void)_handleEndpointVoiceTriggerAsset:(id)arg0 completion:(id)arg1 ;
-(void)_handleVoiceTriggerAssetWithCompletion:(id)arg0 ;
-(void)getVoiceTriggerAssetWithEndpointId:(id)arg0 completion:(id)arg1 ;
-(void)start;
-(void)trialAssetDownloadMonitorDelegate:(id)arg0 didInstallNewAsset:(BOOL)arg1 assetType:(NSUInteger)arg2 ;


@end


#endif