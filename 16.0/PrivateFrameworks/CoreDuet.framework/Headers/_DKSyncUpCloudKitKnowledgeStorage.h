// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKSYNCUPCLOUDKITKNOWLEDGESTORAGE_H
#define _DKSYNCUPCLOUDKITKNOWLEDGESTORAGE_H

@protocol _DKSyncRemoteKnowledgeStorage, _DKSyncRemoteKnowledgeStorageFetchDelegate;

#import <Foundation/Foundation.h>

#import "_DKSyncCloudKitKnowledgeStorage.h"

@interface _DKSyncUpCloudKitKnowledgeStorage : NSObject <_DKSyncRemoteKnowledgeStorage>



@property (getter=isAvailable) BOOL available;
@property (retain) _DKSyncCloudKitKnowledgeStorage *common; // ivar: _common
@property (retain) NSObject<_DKSyncRemoteKnowledgeStorageFetchDelegate> *delegate; // ivar: _delegate


+(id)sharedInstance;
-(BOOL)hasAdditionsFlagForPeer:(id)arg0 ;
-(BOOL)hasDeletionsFlagForPeer:(id)arg0 ;
-(NSInteger)transportType;
-(id)init;
-(id)name;
-(void)cancelOutstandingOperations;
-(void)clearPrewarmedFlag;
-(void)fetchAdditionsHighWaterMarkWithPeer:(id)arg0 highPriority:(BOOL)arg1 completion:(id)arg2 ;
-(void)fetchDeletedEventIDsFromPeer:(id)arg0 sinceDate:(id)arg1 streamNames:(id)arg2 limit:(NSUInteger)arg3 highPriority:(BOOL)arg4 completion:(id)arg5 ;
-(void)fetchDeletionsHighWaterMarkWithPeer:(id)arg0 highPriority:(BOOL)arg1 completion:(id)arg2 ;
-(void)fetchEventsFromPeer:(id)arg0 windows:(id)arg1 streamNames:(id)arg2 limit:(NSUInteger)arg3 fetchOrder:(NSInteger)arg4 highPriority:(BOOL)arg5 completion:(id)arg6 ;
-(void)fetchSourceDeviceIDFromPeer:(id)arg0 highPriority:(BOOL)arg1 completion:(id)arg2 ;
-(void)prewarmFetchWithCompletion:(id)arg0 ;
-(void)setFetchDelegate:(id)arg0 ;
-(void)setHasAdditionsFlag:(BOOL)arg0 forPeer:(id)arg1 ;
-(void)setHasDeletionsFlag:(BOOL)arg0 forPeer:(id)arg1 ;
-(void)start;
-(void)updateStorageWithAddedEvents:(id)arg0 deletedEventIDs:(id)arg1 highPriority:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif