// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PFUBIQUITYRECORDSIMPORTER_H
#define _PFUBIQUITYRECORDSIMPORTER_H

@class NSOperationQueue, NSString, NSRecursiveLock;
@protocol _PFUbiquityRecordImportOperationDelegate, NSManagedObjectContextFaultingDelegate, PFUbiquityBaselineRollOperationDelegate, PFUbiquityBaselineRecoveryOperationDelegate, PFUbiquityBaselineRollResponseOperationDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"
#import "NSPersistentStoreCoordinator.h"
#import "NSSQLCore.h"
#import "PFUbiquityRecordsImporterSchedulingContext.h"
#import "PFUbiquitySwitchboardCacheWrapper.h"

@interface _PFUbiquityRecordsImporter : NSObject <_PFUbiquityRecordImportOperationDelegate, NSManagedObjectContextFaultingDelegate, PFUbiquityBaselineRollOperationDelegate, PFUbiquityBaselineRecoveryOperationDelegate, PFUbiquityBaselineRollResponseOperationDelegate>

 {
    NSOperationQueue *_importQueue;
    NSObject<OS_dispatch_queue> *_privateQueue;
    BOOL _isMonitoring;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_storeName;
    NSString *_modelVersionHash;
    NSPersistentStoreCoordinator *_privatePSC;
    NSSQLCore *_privateStore;
    PFUbiquityRecordsImporterSchedulingContext *_schedulingContext;
    PFUbiquitySwitchboardCacheWrapper *_sideLoadCacheWrapper;
    NSObject<OS_dispatch_source> *_logRestartTimer;
    NSRecursiveLock *_schedulingLock;
    BOOL _importOnlyActiveStores;
    BOOL _throttleNotifications;
    NSUInteger _numPendingNotifications;
    BOOL _allowBaselineRoll;
    NSUInteger _pendingImportOperationsCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(NSInteger)context:(id)arg0 shouldHandleInaccessibleFault:(id)arg1 forObjectID:(id)arg2 andTrigger:(id)arg3 ;
-(id)createSortedOperationsArrayWithMetadata:(id)arg0 isFirstImport:(BOOL)arg1 ;
-(id)init;
-(id)initWithLocalPeerID:(id)arg0 andUbiquityRootLocation:(id)arg1 ;
-(void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)arg0 ;
-(void)baselineRollOperationWasUnableToLockPersistentStore:(id)arg0 ;
-(void)dealloc;
-(void)operation:(id)arg0 failedWithError:(id)arg1 ;
-(void)operationDidFinish:(id)arg0 ;
-(void)operationWasInterruptedDuringImport:(id)arg0 ;
-(void)recoveryOperation:(id)arg0 didReplaceLocalStoreFileWithBaseline:(id)arg1 ;
-(void)recoveryOperation:(id)arg0 encounteredAnError:(id)arg1 duringRecoveryOfBaseline:(id)arg2 ;
-(void)rollResponseOperation:(id)arg0 encounteredAnError:(id)arg1 whileTryingToAdoptBaseline:(id)arg2 ;
-(void)rollResponseOperation:(id)arg0 successfullyAdoptedBaseline:(id)arg1 ;
-(void)scheduleRecoveryTimer;


@end


#endif