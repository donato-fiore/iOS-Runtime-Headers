// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSATTSIRIMITIGATIONASSETHANDLER_H
#define CSATTSIRIMITIGATIONASSETHANDLER_H

@class CSAsset, NSString;
@protocol CSVoiceTriggerAssetHandlerDelegate, CSTrialAssetDownloadMonitorDelegate;

#import <Foundation/Foundation.h>

#import "CSAssetManager.h"

@interface CSAttSiriMitigationAssetHandler : NSObject <CSVoiceTriggerAssetHandlerDelegate, CSTrialAssetDownloadMonitorDelegate>



@property (retain, nonatomic) CSAssetManager *assetManager; // ivar: _assetManager
@property (retain) CSAsset *cachedAsset; // ivar: _cachedAsset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedHandler;
-(id)init;
-(void)_receivedNewAssetUpdate:(id)arg0 ;
-(void)getMitigationAssetWithEndpointId:(id)arg0 completion:(id)arg1 ;
-(void)start;
-(void)trialAssetDownloadMonitorDelegate:(id)arg0 didInstallNewAsset:(BOOL)arg1 assetType:(NSUInteger)arg2 ;
-(void)voiceTriggerAssetHandler:(id)arg0 endpointId:(id)arg1 didChangeCachedAsset:(id)arg2 ;


@end


#endif