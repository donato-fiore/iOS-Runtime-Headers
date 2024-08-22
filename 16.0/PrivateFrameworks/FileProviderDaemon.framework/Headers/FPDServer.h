// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPDSERVER_H
#define FPDSERVER_H

@class FPPacer, NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "FPDAppMonitor.h"
#import "FPDCacheDeleteService.h"
#import "FPDExtensionManager.h"
#import "FPDActionOperationEngine.h"
#import "FPDPresenterManager.h"
#import "FPDTelemetryService.h"

@interface FPDServer : NSObject <NSXPCListenerDelegate>

 {
    NSObject<OS_dispatch_source> *_sigIntSrc;
    NSObject<OS_dispatch_source> *_sigQuitSrc;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    NSObject<OS_dispatch_source> *_machSrc;
    NSObject<OS_dispatch_queue> *_makeSureSetupEnqueued;
    NSObject<OS_dispatch_queue> *_setupQueue;
    NSObject<OS_dispatch_queue> *_afterSetupWorkQueue;
    NSObject<OS_dispatch_group> *_fileProviderManagerIsReadyGroup;
    NSObject<OS_dispatch_queue> *_machServerQueue;
    int _providerChangeNotificationToken;
    FPPacer *_signalProviderChangesPacer;
    BOOL _isUnlocked;
    BOOL _isPastBuddy;
}


@property (readonly, nonatomic) FPDAppMonitor *appMonitor; // ivar: _appMonitor
@property (readonly, nonatomic) FPDCacheDeleteService *cacheDelete; // ivar: _cacheDelete
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FPDExtensionManager *extensionManager; // ivar: _extensionManager
@property (retain, nonatomic) Class fpckTaskClass; // ivar: _fpckTaskClass
@property (retain, nonatomic) Class fpdPurgerClass; // ivar: _fpdPurgerClass
@property (retain, nonatomic) Class fpfsClass; // ivar: _fpfsClass
@property (retain, nonatomic) Class fpfsSQLBackupManagerClass; // ivar: _fpfsSQLBackupManagerClass
@property (retain, nonatomic) Class fpfsSQLRestoreManagerClass; // ivar: _fpfsSQLRestoreManagerClass
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly, nonatomic) FPDActionOperationEngine *operationEngine; // ivar: _operationEngine
@property (readonly, nonatomic) FPDPresenterManager *presenterManager; // ivar: _presenterManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) FPDTelemetryService *telemetry; // ivar: _telemetry


+(id)appSupportPath;
+(id)homeDirectory;
+(id)personaCloudStoragePath;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_computeUnlockedStatus;
-(void)_finishSetup;
-(void)_initSignals;
-(void)_setup;
-(void)_startXPCListener;
-(void)exitWithCode:(int)arg0 ;
-(void)handleExitSignal:(int)arg0 ;
-(void)localeDidChange;
-(void)materializeURL:(id)arg0 completion:(id)arg1 ;
-(void)providersDidChange;
-(void)purge;
-(void)signalProviderChanges;
-(void)signalProviderChangesWithLowPriority;
-(void)start;


@end


#endif