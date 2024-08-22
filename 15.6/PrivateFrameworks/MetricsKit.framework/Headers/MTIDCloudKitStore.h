// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTIDCLOUDKITSTORE_H
#define MTIDCLOUDKITSTORE_H

@class NSString, NSMutableDictionary;
@protocol MTIDCloudKitLocalDBDelegate, MTIDSyncEngineDelegate, MTIDSecretStore, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MTIDCloudKitLocalDB.h"
#import "MTIDCloudKitPromiseManager.h"
#import "MTIDSyncEngine.h"

@interface MTIDCloudKitStore : NSObject <MTIDCloudKitLocalDBDelegate, MTIDSyncEngineDelegate, MTIDSecretStore>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property BOOL canSyncBetweenDevices; // ivar: _canSyncBetweenDevices
@property (retain, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *generatedDates; // ivar: _generatedDates
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MTIDCloudKitLocalDB *localDB; // ivar: _localDB
@property (retain, nonatomic) MTIDCloudKitPromiseManager *promiseManager; // ivar: _promiseManager
@property (readonly) Class superclass;
@property (retain, nonatomic) MTIDSyncEngine *syncEngine; // ivar: _syncEngine


+(BOOL)updateRecord:(id)arg0 isSpanRecord:(BOOL)arg1 scheme:(id)arg2 expectedKey:(id)arg3 expiration:(id)arg4 reset:(BOOL)arg5 ;
+(id)keyOfReferenceDate:(id)arg0 ;
+(id)recordZoneID;
+(id)referenceDateOfRecord:(id)arg0 ;
+(id)referenceRecordIDForScheme:(id)arg0 dsId:(id)arg1 ;
+(id)spanRecordIDForScheme:(id)arg0 referenceRecordID:(id)arg1 serialNumber:(NSUInteger)arg2 ;
+(id)spanRecordKeyWithReferenceRecord:(id)arg0 serialNumber:(NSUInteger)arg1 ;
-(id)debugInfo;
-(id)initWithContainerIdentifer:(id)arg0 enableSync:(BOOL)arg1 ;
-(id)maintainSchemes:(id)arg0 options:(id)arg1 ;
-(id)promiseForRecordWithID:(id)arg0 timeout:(CGFloat)arg1 qualityOfService:(NSInteger)arg2 existingOnly:(BOOL)arg3 updateRecordMaybe:(id)arg4 ;
-(id)recordWithID:(id)arg0 ;
// -(id)recordWithID:(id)arg0 qualityOfService:(NSInteger)arg1 updateRecordMaybe:(id)arg2 error:(unk)arg3  ;
-(id)referenceRecordForScheme:(id)arg0 dsId:(id)arg1 date:(id)arg2 reset:(BOOL)arg3 timeout:(CGFloat)arg4 existingOnly:(BOOL)arg5 qualityOfService:(NSInteger)arg6 ;
-(id)resetSchemes:(id)arg0 options:(id)arg1 ;
-(id)secretForScheme:(id)arg0 options:(id)arg1 ;
-(id)spanRecordForScheme:(id)arg0 span:(id)arg1 timeout:(CGFloat)arg2 existingOnly:(BOOL)arg3 qualityOfService:(NSInteger)arg4 referenceRecord:(id)arg5 ;
-(id)syncForSchemes:(id)arg0 options:(id)arg1 ;
-(void)_generateFutureRecordsForScheme:(id)arg0 referenceRecord:(id)arg1 ;
-(void)accountDidChangeWithUserRecordID:(id)arg0 ;
-(void)clearLocalData;
-(void)cloudKitLocalDB:(id)arg0 didChangeRecord:(id)arg1 ;
-(void)fetchChangesIfNeeded;
-(void)generateFutureRecordsForScheme:(id)arg0 referenceRecord:(id)arg1 ;
-(void)recordWasDeleted:(id)arg0 ;
-(void)recordWasFailedToSave:(id)arg0 ;
-(void)recordWasFetched:(id)arg0 ;
-(void)recordWasSaved:(id)arg0 ;
-(void)syncEngineDidStartWithError:(id)arg0 ;


@end


#endif