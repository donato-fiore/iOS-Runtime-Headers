// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSATTSIRIMITIGATIONASSETHANDLER_H
#define CSATTSIRIMITIGATIONASSETHANDLER_H

@class CSAsset, NSString;
@protocol CSVoiceTriggerAssetHandlerDelegate, CSTrialAssetDownloadMonitorDelegate;

#import <Foundation/Foundation.h>

#import "CSAssetManager.h"
#import "CSTrialAssetManager.h"
#import "CSTrialAssetDownloadMonitor.h"
#import "CSVoiceTriggerAssetHandler.h"

@interface CSAttSiriMitigationAssetHandler : NSObject <CSVoiceTriggerAssetHandlerDelegate, CSTrialAssetDownloadMonitorDelegate>



@property (retain, nonatomic) CSAssetManager *assetManager; // ivar: _assetManager
@property (retain) CSAsset *cachedAsset; // ivar: _cachedAsset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL overrideEnabled; // ivar: _overrideEnabled
@property (retain, nonatomic) NSString *overridePath; // ivar: _overridePath
@property (readonly) Class superclass;
@property (retain, nonatomic) CSTrialAssetManager *trialAssetManager; // ivar: _trialAssetManager
@property (retain, nonatomic) CSTrialAssetDownloadMonitor *trialDownloadMonitor; // ivar: _trialDownloadMonitor
@property (retain, nonatomic) CSVoiceTriggerAssetHandler *vtAssetHandler; // ivar: _vtAssetHandler


+(id)sharedHandler;
-(id)init;
-(id)initWithAssetManager:(id)arg0 withTrialAssetManager:(id)arg1 withTrialDownloadMonitor:(id)arg2 withVTAssetHandler:(id)arg3 withAssetOverrideFlag:(BOOL)arg4 withOverrideAssetPath:(id)arg5 ;
-(void)_receivedNewAssetUpdate:(id)arg0 ;
-(void)getMitigationAssetWithEndpointId:(id)arg0 completion:(id)arg1 ;
-(void)start;
-(void)trialAssetDownloadMonitorDelegate:(id)arg0 didInstallNewAsset:(BOOL)arg1 assetType:(NSUInteger)arg2 ;
-(void)voiceTriggerAssetHandler:(id)arg0 endpointId:(id)arg1 didChangeCachedAsset:(id)arg2 ;


@end


#endif