// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSATTSIRIMITIGATIONASSETHANDLER_H
#define CSATTSIRIMITIGATIONASSETHANDLER_H

@class CSAsset, NSString;
@protocol CSTrialAssetDownloadMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate;

#import <Foundation/Foundation.h>

#import "CSAssetManager.h"
#import "CSLanguageCodeUpdateMonitor.h"
#import "CSTrialAssetManager.h"
#import "CSTrialAssetDownloadMonitor.h"

@interface CSAttSiriMitigationAssetHandler : NSObject <CSTrialAssetDownloadMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate>



@property (retain, nonatomic) CSAssetManager *assetManager; // ivar: _assetManager
@property (retain) CSAsset *cachedAsset; // ivar: _cachedAsset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CSLanguageCodeUpdateMonitor *languageCodeUpdateMonitor; // ivar: _languageCodeUpdateMonitor
@property (nonatomic) BOOL overrideEnabled; // ivar: _overrideEnabled
@property (retain, nonatomic) NSString *overridePath; // ivar: _overridePath
@property (readonly) Class superclass;
@property (retain, nonatomic) CSTrialAssetManager *trialAssetManager; // ivar: _trialAssetManager
@property (retain, nonatomic) CSTrialAssetDownloadMonitor *trialDownloadMonitor; // ivar: _trialDownloadMonitor


+(id)sharedHandler;
-(id)init;
-(id)initWithAssetManager:(id)arg0 withTrialAssetManager:(id)arg1 withTrialDownloadMonitor:(id)arg2 withLanguageCodeUpdateMonitor:(id)arg3 withAssetOverrideFlag:(BOOL)arg4 withOverrideAssetPath:(id)arg5 ;
-(void)CSLanguageCodeUpdateMonitor:(id)arg0 didReceiveLanguageCodeChanged:(id)arg1 ;
-(void)_receivedNewAssetUpdate:(id)arg0 ;
-(void)getMitigationAssetWithEndpointId:(id)arg0 completion:(id)arg1 ;
-(void)start;
-(void)trialAssetDownloadMonitorDelegate:(id)arg0 didInstallNewAsset:(BOOL)arg1 assetType:(NSUInteger)arg2 ;


@end


#endif