// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLDCLOUDKITSYNCBASE_H
#define SLDCLOUDKITSYNCBASE_H

@class CKContainer, CKSyncEngine, NSString;
@protocol CKSyncEngineDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SLDCloudKitConfiguration.h"
#import "SLDCloudKitSyncPersistence.h"

@interface SLDCloudKitSyncBase : NSObject <CKSyncEngineDataSource>

 {
    CKContainer *_container;
    CKSyncEngine *_syncEngine;
    SLDCloudKitConfiguration *_configuration;
    SLDCloudKitSyncPersistence *_persistence;
    NSObject<OS_dispatch_queue> *_queue;
    CGFloat _timestamp;
    BOOL _accountChangesCheckScheduled;
    BOOL _saltLocked;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)recordSupportsOurVersion:(id)arg0 ;
-(CGFloat)currentTimestamp;
-(NSUInteger)getIncrementedBatchNumber;
-(id)configuration;
-(id)container;
-(id)database;
-(id)idStringForType:(id)arg0 uniqueData:(id)arg1 ;
-(id)idStringForType:(id)arg0 uniqueString:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)persistence;
-(id)queue;
-(id)salt;
-(id)syncEngine;
-(id)syncEngine:(id)arg0 recordToSaveForRecordID:(id)arg1 ;
-(void)accountChangedNotification:(id)arg0 ;
-(void)accountStatusChanged;
-(void)addMetadataToRecord:(id)arg0 ;
-(void)checkForAccountChanges;
-(void)checkForAccountChangesNow;
-(void)createSyncEngine;
-(void)handleMetadataSizeBecomingEligibleForSync;
-(void)initializeState;
-(void)reset;
-(void)syncEngine:(id)arg0 didDeleteRecordWithID:(id)arg1 ;
-(void)syncEngine:(id)arg0 didFetchRecord:(id)arg1 ;
-(void)syncEngine:(id)arg0 didSaveRecord:(id)arg1 ;
-(void)syncEngine:(id)arg0 didUpdateMetadata:(id)arg1 ;
-(void)syncEngine:(id)arg0 failedToDeleteRecordWithID:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 failedToSaveRecord:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 recordWithIDWasDeleted:(id)arg1 recordType:(id)arg2 ;


@end


#endif