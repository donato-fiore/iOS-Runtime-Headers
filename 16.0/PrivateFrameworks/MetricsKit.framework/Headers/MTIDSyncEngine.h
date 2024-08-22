// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTIDSYNCENGINE_H
#define MTIDSYNCENGINE_H

@class NSString, CKContainer, NSMutableSet, NSMutableArray, CKRecordZoneID;
@protocol MTIDSyncEngineDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MTIDSyncEngine : NSObject

@property (retain) NSString *applicationBundleIdentifierOverrideForNetworkAttribution; // ivar: _applicationBundleIdentifierOverrideForNetworkAttribution
@property (retain, nonatomic) CKContainer *container; // ivar: _container
@property (weak, nonatomic) NSObject<MTIDSyncEngineDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableSet *pendingRecordIDs; // ivar: _pendingRecordIDs
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableSet *queuedRecordIDs; // ivar: _queuedRecordIDs
@property (nonatomic) NSInteger state; // ivar: _state
@property (weak, nonatomic) NSMutableArray *transactions; // ivar: _transactions
@property (retain, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID


+(CGFloat)transactionTimeout;
+(void)setTransactionTimeout:(CGFloat)arg0 ;
-(id)fetchRecordWithIDs:(id)arg0 ;
-(id)initWithContainerIdentifier:(id)arg0 zoneID:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(void)_beginTransaction;
-(void)_endTransaction;
-(void)accountDidChange:(id)arg0 ;
-(void)addPendingRecordID:(id)arg0 ;
-(void)addRecordIDsToSave:(id)arg0 recordIDsToDelete:(id)arg1 qualityOfService:(NSInteger)arg2 ;
-(void)commit;
-(void)deleteRecordsWithIDs:(id)arg0 ;
-(void)fetchAllRecords;
-(void)fetchRecordWithID:(id)arg0 ;
-(void)handleDeletedRecordID:(id)arg0 error:(id)arg1 ;
-(void)handleEngineStartedWithError:(id)arg0 ;
-(void)handleFetchedRecords:(id)arg0 error:(id)arg1 ;
-(void)handleSavedRecord:(id)arg0 error:(id)arg1 ;
-(void)handleUserRecordID:(id)arg0 ;
-(void)removePendingRecordID:(id)arg0 ;
-(void)saveRecordsWithIDs:(id)arg0 qualityOfService:(NSInteger)arg1 ;
-(void)setupContainerWithIdentifier:(id)arg0 ;
-(void)start;
-(void)startEngine;


@end


#endif