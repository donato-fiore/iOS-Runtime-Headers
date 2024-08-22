// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCLOUDKITMIRRORINGDELEGATE_H
#define NSCLOUDKITMIRRORINGDELEGATE_H

@class NSString, CKDatabaseSubscription, CKContainer, CKDatabase, CKScheduler, CKNotificationListener, NSError, CKRecordID;
@protocol PFCloudKitExporterDelegate, PFApplicationStateMonitorDelegate, NSCloudKitMirroringDelegateProgressProvider, NSPersistentStoreMirroringDelegate, OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NSCloudKitMirroringDelegateOptions.h"
#import "PFCloudKitExporterOptions.h"
#import "CDDCloudKitClient.h"
#import "NSSQLCore.h"
#import "NSPersistentStoreCoordinator.h"
#import "PFCloudKitThrottledNotificationObserver.h"
#import "NSCloudKitMirroringRequestManager.h"
#import "PFApplicationStateMonitor.h"

@interface NSCloudKitMirroringDelegate : NSObject <PFCloudKitExporterDelegate, PFApplicationStateMonitorDelegate, NSCloudKitMirroringDelegateProgressProvider, NSPersistentStoreMirroringDelegate>

 {
    NSCloudKitMirroringDelegateOptions *_options;
    NSString *_ckDatabaseName;
    NSObject<OS_dispatch_semaphore> *_cloudKitQueueSemaphore;
    NSObject<OS_dispatch_queue> *_cloudKitQueue;
    CKDatabaseSubscription *_databaseSubscription;
    CKContainer *_container;
    CKDatabase *_database;
    CKScheduler *_scheduler;
    CKNotificationListener *_notificationListener;
    NSError *_lastInitializationError;
    BOOL _hadObservedStore;
    BOOL _successfullyInitialized;
    PFCloudKitExporterOptions *_exporterOptions;
    CDDCloudKitClient *_coredatadClient;
    BOOL _registeredForSubscription;
    NSSQLCore *_observedStore;
    NSPersistentStoreCoordinator *_observedCoordinator;
    PFCloudKitThrottledNotificationObserver *_accountChangeObserver;
    CKRecordID *_currentUserRecordID;
    NSCloudKitMirroringRequestManager *_requestManager;
    NSString *_observedStoreIdentifier;
    NSString *_importActivityIdentifier;
    NSString *_exportActivityIdentifier;
    NSString *_setupActivityIdentifier;
}


@property (readonly, nonatomic) PFApplicationStateMonitor *applicationMonitor; // ivar: _applicationMonitor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)checkAndCreateDirectoryAtURL:(id)arg0 wipeIfExists:(BOOL)arg1 error:(*id)arg2 ;
+(BOOL)checkIfContentsOfStore:(id)arg0 matchContentsOfStore:(id)arg1 error:(*id)arg2 ;
+(BOOL)isFirstPartyContainerIdentifier:(id)arg0 ;
+(id)cloudKitMachServiceName;
+(id)cloudKitMetadataTransformerName;
+(id)createCloudKitServerWithMachServiceName:(id)arg0 andStorageDirectoryPath:(id)arg1 ;
+(id)stringForResetReason:(NSUInteger)arg0 ;
+(void)initialize;
+(void)printMetadataForStoreAtURL:(id)arg0 withConfiguration:(id)arg1 operateOnACopy:(BOOL)arg2 ;
+(void)printRepresentativeSchemaForModelAtURL:(id)arg0 orStoreAtURL:(id)arg1 withConfiguration:(id)arg2 ;
-(BOOL)validateManagedObjectModel:(id)arg0 forUseWithStoreWithDescription:(id)arg1 error:(*id)arg2 ;
-(id)initWithCloudKitContainerOptions:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(void)applicationStateMonitorEnteredBackground:(id)arg0 ;
-(void)applicationStateMonitorEnteredForeground:(id)arg0 ;
-(void)applicationStateMonitorExpiredBackgroundActivityTimeout:(id)arg0 ;
-(void)ckAccountOrIdentityChangedHandler:(id)arg0 ;
-(void)coordinatorWillRemoveStore:(id)arg0 ;
-(void)dealloc;
-(void)eventUpdated:(id)arg0 ;
-(void)exporter:(id)arg0 willScheduleOperations:(id)arg1 ;
-(void)logResetSyncNotification:(id)arg0 ;
-(void)managedObjectContextSaved:(id)arg0 ;
-(void)persistentStoreCoordinator:(id)arg0 didSuccessfullyAddPersistentStore:(id)arg1 withDescription:(id)arg2 ;
-(void)remoteStoreDidChange:(id)arg0 ;
-(void)storesDidChange:(id)arg0 ;


@end


#endif