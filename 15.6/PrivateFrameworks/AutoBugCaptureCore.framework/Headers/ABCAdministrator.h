// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABCADMINISTRATOR_H
#define ABCADMINISTRATOR_H

@class NSString;
@protocol ABCPersistentStoreControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DiagCollectionTransport.h"
#import "DiagnosticsTransport.h"
#import "AutoBugCaptureCacheDelete.h"
#import "DiagnosticCaseManager.h"
#import "CloudKitUploadController.h"
#import "ABCConfigurationManager.h"
#import "DiagnosticExtensionController.h"
#import "DiagnosticLiaison.h"
#import "DiagnosticStorageManager.h"
#import "ABCPersistentStoreController.h"

@interface ABCAdministrator : NSObject <ABCPersistentStoreControllerDelegate>

 {
    NSObject<OS_dispatch_queue> *adminQueue;
    DiagCollectionTransport *diagCollectionTransport;
    DiagnosticsTransport *diagTransport;
    BOOL _autoBugCaptureAdministrativelyEnabled;
}


@property (nonatomic) int autoBugCaptureState; // ivar: _autoBugCaptureState
@property (retain, nonatomic) AutoBugCaptureCacheDelete *cacheDeleteHandler; // ivar: _cacheDeleteHandler
@property (retain, nonatomic) DiagnosticCaseManager *caseManager; // ivar: _caseManager
@property (retain, nonatomic) CloudKitUploadController *ckUploadController; // ivar: _uploadController
@property (retain, nonatomic) ABCConfigurationManager *configurationManager; // ivar: _configurationManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) DiagnosticExtensionController *diagExtensionController; // ivar: _diagExtensionController
@property (retain, nonatomic) DiagnosticLiaison *diagnosticLiaison; // ivar: _diagnosticLiaison
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DiagnosticStorageManager *storageManager; // ivar: _storageManager
@property (retain, nonatomic) ABCPersistentStoreController *storeController; // ivar: _storeController
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)autoBugCaptureConfig;
-(id)getDiagnosticLiaison;
-(id)init;
-(id)internalStateDictionary;
-(void)administrativelyDiableAutoBugCapture;
-(void)administrativelyEnableAutoBugCapture;
-(void)continueStartingAutoBugCapture;
-(void)deregisterAPNS;
-(void)deregisterIDS;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)persistentStoreControllerReadyForUse:(id)arg0 ;
-(void)prepareLogArchiveDirectory:(id)arg0 uid:(id)arg1 gid:(id)arg2 ;
-(void)registerAPNS;
-(void)registerIDS;
-(void)scheduleDiagnosticsMaintenanceActivity;
-(void)shutdown;
-(void)startAutoBugCaptureAdministrative:(BOOL)arg0 ;
-(void)startAutoBugCaptureAdministrative:(BOOL)arg0 parameters:(id)arg1 ;
-(void)startEssentialServices;
-(void)startMaintenanceServices;
-(void)startUploadTaskScheduler;
-(void)startup;
-(void)stopAutoBugCapture:(BOOL)arg0 ;
-(void)stopEssentialServices;
-(void)stopMaintenanceServices;
-(void)stopUploadTaskScheduler;


@end


#endif