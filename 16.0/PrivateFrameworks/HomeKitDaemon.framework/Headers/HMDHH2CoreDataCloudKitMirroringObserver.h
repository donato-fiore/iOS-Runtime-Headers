// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHH2COREDATACLOUDKITMIRRORINGOBSERVER_H
#define HMDHH2COREDATACLOUDKITMIRRORINGOBSERVER_H

@class HMFObject, NSManagedObjectContext, NSString, NSMutableSet;
@protocol HMFLogging, HMDCoreDataNotificationListener;


#import "HMDCoreData.h"

@interface HMDHH2CoreDataCloudKitMirroringObserver : HMFObject <HMFLogging, HMDCoreDataNotificationListener>



@property (retain, nonatomic) NSManagedObjectContext *cachedMOC; // ivar: _cachedMOC
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) HMDCoreData *coreData; // ivar: _coreData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isExportProgressRequestAlreadyInProgress; // ivar: _isExportProgressRequestAlreadyInProgress
@property (nonatomic) NSUInteger numberOfIgnoredExportProgressRequest; // ivar: _numberOfIgnoredExportProgressRequest
@property (retain, nonatomic) NSMutableSet *objectIdsToMonitor; // ivar: _objectIdsToMonitor
@property (retain, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger totalObjectsToMonitor; // ivar: _totalObjectsToMonitor


+(id)logCategory;
-(BOOL)verifyModelsPushedToCloudKitUsingCoreDataExportStream;
-(id)initWithObjectIds:(id)arg0 coreData:(id)arg1 storeIdentifier:(id)arg2 ;
-(void)callClientsCompletionHandler:(id)arg0 ;
-(void)coreData:(id)arg0 persistentStoreWithIdentifierDidChange:(id)arg1 ;
-(void)processExportResult:(id)arg0 withError:(id)arg1 ;
-(void)startMonitoring:(id)arg0 ;
-(void)stopMonitoring;
-(void)verifyModelsPushedToCloudKit;


@end


#endif