// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATLEGACYDEVICESYNCMANAGER_H
#define ATLEGACYDEVICESYNCMANAGER_H

@class NSMutableArray, NSDate, NSMutableDictionary, NSString, ATAsset, NSDictionary, ATSession;
@protocol ICEnvironmentMonitorObserver, ATSessionObserver, ATLegacyAssetLinkProgressDelegate, OS_dispatch_queue;


#import "ATDeviceSyncManager.h"
#import "ATUserDefaults.h"
#import "ATClientController.h"
#import "ATDeviceDiskUsageProvider.h"
#import "ATLegacyMessageLink.h"
#import "ATLegacyAssetLink.h"

@interface ATLegacyDeviceSyncManager : ATDeviceSyncManager <ICEnvironmentMonitorObserver, ATSessionObserver, ATLegacyAssetLinkProgressDelegate>

 {
    ATUserDefaults *_defaults;
    ATClientController *_clientController;
    ATDeviceDiskUsageProvider *_diskUsageProvider;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_messageLinks;
    ATLegacyMessageLink *_currentMessageLink;
    ATLegacyAssetLink *_assetLink;
    NSMutableArray *_dataclasses;
    unsigned int _grappaId;
    NSDate *_startTime;
    BOOL _localSyncRequestCanceled;
    BOOL _localSyncRequest;
    BOOL _automaticSync;
    id *_clientProgressCallback;
    NSMutableDictionary *_dataclassTimers;
    unsigned int _currentStage;
    NSString *_currentDataclass;
    NSString *_currentStatus;
    ATAsset *_currentAsset;
    CGFloat _currentSyncProgress;
    CGFloat _currentOverallProgress;
    *CacheDeleteToken _cacheDeleteToken;
}


@property (copy, nonatomic) NSDictionary *currentSyncHostInfo; // ivar: _currentSyncHostInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) ATSession *syncSession; // ivar: _syncSession


+(id)legacyDeviceSyncManager;
-(BOOL)_currentLinkIsWifiConnection;
-(id)_currentHostType;
-(id)currentSyncState;
-(id)init;
-(void)_cancelExistingSyncSession;
-(void)_handleAssetMetricsMessage:(id)arg0 fromLink:(id)arg1 ;
-(void)_handleCapabilitiesMessage:(id)arg0 fromLink:(id)arg1 ;
-(void)_handleFinishedSyncingMetadataMessage:(id)arg0 fromLink:(id)arg1 ;
-(void)_handleHostInfoMessage:(id)arg0 fromLink:(id)arg1 ;
-(void)_handleRequestingSyncMessage:(id)arg0 fromLink:(id)arg1 ;
-(void)_handleSyncFailedMessage:(id)arg0 fromLink:(id)arg1 ;
-(void)_handleSyncStatusMessage:(id)arg0 fromLink:(id)arg1 ;
-(void)_reconcileSyncWithMessage:(id)arg0 ;
-(void)_reportLocalProgress;
-(void)_reset;
-(void)_sendDiskUsageForDataClasses:(id)arg0 updateFirst:(BOOL)arg1 ;
-(void)_sendInstalledAssets;
-(void)_sendSyncAllowed;
-(void)assetLink:(id)arg0 didUpdateOverallProgress:(CGFloat)arg1 ;
-(void)cancelSyncOnMessageLink:(id)arg0 ;
-(void)environmentMonitorDidChangePower:(id)arg0 ;
-(void)initiateSyncForLibrary:(id)arg0 onMessageLink:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg0 ;
-(void)messageLinkWasInitialized:(id)arg0 ;
-(void)messageLinkWasOpened:(id)arg0 ;
-(void)session:(id)arg0 didBeginSessionTask:(id)arg1 ;
-(void)session:(id)arg0 didUpdateSessionTask:(id)arg1 ;
-(void)session:(id)arg0 willBeginSessionTask:(id)arg1 ;
-(void)sessionDidFinish:(id)arg0 ;
-(void)sessionWillBegin:(id)arg0 ;


@end


#endif