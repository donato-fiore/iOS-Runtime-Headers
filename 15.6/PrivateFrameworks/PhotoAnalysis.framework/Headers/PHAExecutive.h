// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAEXECUTIVE_H
#define PHAEXECUTIVE_H

@class PFSerialQueue<PFDTransactionDispatchQueue>, NSMutableArray, NSMutableSet, NSMutableDictionary, NSString;
@protocol PHPhotoLibraryAvailabilityObserver, PHAActivityDelegate, PHAServiceOperationHandling, NSXPCListenerDelegate, OS_voucher, OS_xpc_object, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PHAActivityLog.h"
#import "PHAMusicActivity.h"
#import "PHAPhotoLibraryList.h"

@interface PHAExecutive : NSObject <PHPhotoLibraryAvailabilityObserver, PHAActivityDelegate, PHAServiceOperationHandling, NSXPCListenerDelegate>

 {
    BOOL _isPhotoAnalysisAgent;
    BOOL _backgroundAnalysisActivityTriggered;
    PFSerialQueue<PFDTransactionDispatchQueue> *_executiveStateQueue;
    NSObject<OS_voucher> *_turboModeBoostVoucher;
    NSMutableArray *_processingLog;
    PHAActivityLog *_currentLog;
    NSMutableArray *_cachedTurboLibraryURLs;
    NSObject<OS_xpc_object> *_turboAnalysisActivity;
    os_unfair_lock_s _turboLibrariesLock;
    NSMutableSet *_pendingBackgroundLibraries;
    os_unfair_lock_s _connectedClientsLock;
    BOOL _shouldDeferActivity;
    NSMutableSet *_runningActivities;
}


@property (readonly) PHAActivityLog *activityLog; // ivar: _activityLog
@property (retain) NSObject<OS_xpc_object> *backgroundAnalysisActivity; // ivar: _backgroundAnalysisActivity
@property (retain) NSObject<OS_dispatch_source> *backgroundAnalysisMonitorTimer; // ivar: _backgroundAnalysisMonitorTimer
@property (retain) NSMutableDictionary *clientsByLibraryPath; // ivar: _clientsByLibraryPath
@property NSInteger countOfCoordinatorsRunningBackgroundAnalysis; // ivar: _countOfCoordinatorsRunningBackgroundAnalysis
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableDictionary *managersByLibraryPath; // ivar: _managersByLibraryPath
@property (retain) PHAMusicActivity *musicActivity; // ivar: _musicActivity
@property (retain) PHAPhotoLibraryList *photoLibraryList; // ivar: _photoLibraryList
@property unsigned char state; // ivar: _state
@property (readonly) Class superclass;


+(id)bootDateForTurboLibraryRegistration;
+(void)unregisterAllActivities;
-(BOOL)_photoAnalysCoreDuetSchedulingDisabled;
-(BOOL)_photoAnalysisEnabled;
-(BOOL)hasConnectedClientsForManager:(id)arg0 ;
-(BOOL)hasPhotosConnectionForManager:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)registerActivityToRun:(id)arg0 ;
-(BOOL)turboIsEnabledForManager:(id)arg0 ;
-(id)clientInfoForManager:(id)arg0 ;
-(id)init;
-(id)managerForPhotoLibraryURL:(id)arg0 ;
-(id)statusAsDictionary;
-(void)_backgroundActivityDidBegin;
-(void)_cleanupAfterBackgroundActivityFinishedForDefer:(BOOL)arg0 skipActivityStateCheck:(BOOL)arg1 ;
-(void)_installBackgroundAnalysisMonitor;
-(void)_localeDidChangeNotification:(id)arg0 ;
-(void)_registerBackgroundActivity;
-(void)_registerTurboActivity;
-(void)_runTurboProcessing:(id)arg0 ;
-(void)_startBackgroundAnalysis;
-(void)_stopAllBackgroundActivitiesWithCompletion:(id)arg0 ;
-(void)_stopAllBackgroundAnalysisWithCompletion:(id)arg0 ;
-(void)addClientHandler:(id)arg0 forLibraryURL:(id)arg1 ;
-(void)addProcessingActivityToStatusDictionary:(id)arg0 ;
-(void)checkQuiescenceForManager:(id)arg0 ;
-(void)dealloc;
-(void)disableTurboModeForManager:(id)arg0 ;
-(void)dispatchAsyncToExecutiveStateQueue:(id)arg0 ;
-(void)dumpAnalysisStatusWithContext:(id)arg0 reply:(id)arg1 ;
-(void)dumpStatusToLog;
-(void)enableTurboModeForManager:(id)arg0 ;
-(void)handleOperation:(id)arg0 ;
-(void)notifyLibraryAvailableAtURL:(id)arg0 ;
-(void)photoLibraryDidBecomeUnavailable:(id)arg0 ;
-(void)removeClientHandler:(id)arg0 ;
-(void)setupAnalyticsEnvironment;
-(void)shutdown;
-(void)startup;
-(void)stopAllBackgroundActivities;
-(void)stopAllBackgroundActivitiesWithCompletion:(id)arg0 ;
-(void)stopBackgroundActivityForManager:(id)arg0 ;
-(void)terminateManagerForPhotoLibraryURL:(id)arg0 ;
-(void)terminateManagerIfQuiescentAndNoConnectedClients:(id)arg0 ;
-(void)triggerBackgroundActivity;
-(void)unregisterRunningActivity:(id)arg0 ;
-(void)writeQALog:(id)arg0 ;


@end


#endif