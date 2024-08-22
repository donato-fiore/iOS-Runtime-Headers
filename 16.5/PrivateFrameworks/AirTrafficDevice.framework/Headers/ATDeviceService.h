// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATDEVICESERVICE_H
#define ATDEVICESERVICE_H

@class ATConcreteService, ATServiceProxyListener, NSMapTable, ATStatusObserverListener, ATEventScheduler, MSVXPCTransaction, NSString;
@protocol ATMessageLinkListenerDelegate, ATMessageLinkRequestHandler, ATXPCInterfaceProtocol, ATSyncClientDelegate, ATIDSServiceListener, OS_dispatch_source, OS_dispatch_queue;


#import "ATLockdownListener.h"
#import "ATDevicePairedSyncManager.h"
#import "ATIDSService.h"
#import "ATXPCListener.h"
#import "ATDeviceSyncManager.h"
#import "ATLegacyDeviceSyncManager.h"
#import "ATDeviceSettings.h"

@interface ATDeviceService : ATConcreteService <ATMessageLinkListenerDelegate, ATMessageLinkRequestHandler, ATXPCInterfaceProtocol, ATSyncClientDelegate, ATIDSServiceListener>

 {
    ATLockdownListener *_lockdownListener;
    ATLockdownListener *_legacyLockdownListener;
    ATDevicePairedSyncManager *_pairedSyncManager;
    ATIDSService *_idsService;
    ATXPCListener *_xpcListener;
    ATServiceProxyListener *_proxyListener;
    NSMapTable *_messageLinkProxyListeners;
    ATStatusObserverListener *_statusObserverListener;
    ATDeviceSyncManager *_deviceSyncManager;
    ATLegacyDeviceSyncManager *_legacyDeviceSyncManager;
    ATDeviceSettings *_settings;
    ATEventScheduler *_eventScheduler;
    MSVXPCTransaction *_xpcTransaction;
    MSVXPCTransaction *_startupTransaction;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    int _atcRunningToken;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)run;
-(BOOL)stop;
-(id)_deviceMessageLink;
-(id)allMessageLinkProxyListeners;
-(id)init;
-(id)proxyListenerForMessageLink:(id)arg0 ;
-(void)_addObserversToMessageLink:(id)arg0 ;
-(void)_cancelSyncForMessageLink:(id)arg0 ;
-(void)_endStartupTransaction;
-(void)_removeObserversFromMessageLink:(id)arg0 ;
-(void)_requestSyncForLibrary:(id)arg0 onMessageLink:(id)arg1 ;
-(void)_scheduleNewSyncIfNeeded;
-(void)_setupStartupTransaction;
-(void)addMessageLink:(id)arg0 ;
-(void)applicationInstallsArePrioritized:(id)arg0 arePaused:(id)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg0 ;
-(void)applicationInstallsDidChange:(id)arg0 ;
-(void)applicationInstallsDidPrioritize:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)cancelAssetTransferForFailedAsset:(id)arg0 ;
-(void)cancelSyncWithCompletion:(id)arg0 ;
-(void)clearSyncDataWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)getAssetMetricswithCompletion:(id)arg0 ;
-(void)getDataRestoreIsCompleteWithCompletion:(id)arg0 ;
-(void)getSyncStateWithCompletion:(id)arg0 ;
-(void)handleDataMigrationFinished;
-(void)idsServiceDevicesDidChange:(id)arg0 ;
-(void)initiateAssetDownloadSessionsWithCompletion:(id)arg0 ;
-(void)keepATCAlive:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)listener:(id)arg0 didReceiveMessageLinkRequest:(id)arg1 ;
-(void)lowBatteryNotificationWithCompletion:(id)arg0 ;
-(void)messageLink:(id)arg0 didReceiveRequest:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg0 ;
-(void)openDeviceMessageLinkWithPriority:(int)arg0 withCompletion:(id)arg1 ;
-(void)prioritizeAsset:(id)arg0 forDataclass:(id)arg1 withCompletion:(id)arg2 ;
-(void)prioritizeAsset:(id)arg0 withCompletion:(id)arg1 ;
-(void)purgePartialAsset:(id)arg0 forDataclass:(id)arg1 withCompletion:(id)arg2 ;
-(void)registerForStatusOfDataclasses:(id)arg0 enabled:(id)arg1 withCompletion:(id)arg2 ;
-(void)removeMessageLink:(id)arg0 ;
-(void)requestKeybagSyncToPairedDeviceWithCompletion:(id)arg0 ;
-(void)requestSyncForLibrary:(id)arg0 withCompletion:(id)arg1 ;
-(void)requestSyncForPairedDeviceWithPriority:(int)arg0 withCompletion:(id)arg1 ;
-(void)restoreFromDeviceWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)syncChangesForDataClass:(id)arg0 withPriority:(int)arg1 ;
-(void)syncClient:(id)arg0 hasChangesWithPriority:(int)arg1 ;


@end


#endif