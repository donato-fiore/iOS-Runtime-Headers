// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLWELCOMECONTROLLER_H
#define WLWELCOMECONTROLLER_H

@class BFFNavigationController, WLSourceDevicesController, WLSourceDevice, WLDataMigrationController, NSString;
@protocol WLSourceDevicesDelegate, WLDataMigrationDelegate, BFFNavigationControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WLWelcomeController : NSObject <WLSourceDevicesDelegate, WLDataMigrationDelegate, BFFNavigationControllerDelegate>

 {
    BOOL _uiTestMode;
    BOOL _forceUITestModeDownloadError;
    BFFNavigationController *_navigationController;
    WLSourceDevicesController *_sourceDevicesController;
    BOOL _dismissAfterSourceDevicePairingTimeout;
    WLSourceDevice *_sourceDevice;
    BOOL _migrateUsingRetryPolicies;
    NSUInteger _migrationState;
    WLDataMigrationController *_migrationController;
    NSObject<OS_dispatch_queue> *_migrationControllerDelegateQueueTargetedAtMainQueue;
    BOOL _migrationControllerIsRestartable;
    BOOL _migrationConcluded;
    BOOL _isPairingCanceled;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithWelcomeViewController:(id)arg0 forceUITestMode:(BOOL)arg1 forceUITestModeDownloadError:(BOOL)arg2 ;
-(void)_completeWithSuccess:(BOOL)arg0 ;
-(void)_configureWelcomeViewController:(id)arg0 ;
-(void)_didCompleteMigrationWithSuccess:(BOOL)arg0 retry:(BOOL)arg1 ;
-(void)_didPairWithSourceDevice:(id)arg0 ;
-(void)_importLocalContent;
-(void)_pushViewController:(id)arg0 andRemovePreviousTopmostViewControllerWithCompletion:(id)arg1 ;
-(void)_setStashDataLocally:(BOOL)arg0 ;
-(void)_showCompleted;
-(void)_showPairingCode:(id)arg0 wifiPSK:(id)arg1 ssid:(id)arg2 ;
-(void)_showPreparation;
-(void)_showRetry;
-(void)_showTransferring;
-(void)_showWaitingForDataTypeSelection;
-(void)_sourceDevicePairingPeriodDidEnd;
-(void)_startMigration;
-(void)_startPairing;
-(void)_updateTransferringForImport;
-(void)dataMigrator:(id)arg0 didFailWithError:(id)arg1 ;
-(void)dataMigrator:(id)arg0 didUpdateMigrationState:(NSUInteger)arg1 ;
-(void)dataMigrator:(id)arg0 didUpdateProgressPercentage:(float)arg1 ;
-(void)dataMigrator:(id)arg0 didUpdateRemainingDownloadTime:(CGFloat)arg1 ;
-(void)dataMigratorDidBecomeRestartable:(id)arg0 ;
-(void)dataMigratorDidFinish:(id)arg0 withImportErrors:(BOOL)arg1 ;
-(void)dataMigratorDidGetInterrupted;
-(void)dealloc;
-(void)deleteMessages;
-(void)didDiscoverCandidate:(id)arg0 ;
-(void)setNavigationController:(id)arg0 ;
-(void)sourceDeviceController:(id)arg0 didDiscoverCandidate:(id)arg1 ;
-(void)sourceDeviceController:(id)arg0 didDiscoverDevice:(id)arg1 ;
-(void)wifiAndDeviceDiscoveryDidGetInterrupted;


@end


#endif