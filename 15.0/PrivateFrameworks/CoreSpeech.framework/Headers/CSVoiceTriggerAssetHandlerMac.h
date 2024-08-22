// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSVOICETRIGGERASSETHANDLERMAC_H
#define CSVOICETRIGGERASSETHANDLERMAC_H

@class CSAsset, NSMutableDictionary, NSString;
@protocol CSVoiceTriggerAssetDownloadMonitorDelegate, CSFirstUnlockMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate;


#import "CSVoiceTriggerAssetHandler.h"

@interface CSVoiceTriggerAssetHandlerMac : CSVoiceTriggerAssetHandler <CSVoiceTriggerAssetDownloadMonitorDelegate, CSFirstUnlockMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate>



@property (retain) CSAsset *cachedAsset; // ivar: _cachedAsset
@property (retain) NSMutableDictionary *cachedEndpointAssets; // ivar: _cachedEndpointAssets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
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


@end


#endif