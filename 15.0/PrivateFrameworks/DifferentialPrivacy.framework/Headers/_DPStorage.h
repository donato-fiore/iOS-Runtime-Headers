// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPSTORAGE_H
#define _DPSTORAGE_H

@class NSDictionary;
@protocol _DPMaintenance, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_DPCoreDataStorage.h"

@interface _DPStorage : NSObject <_DPMaintenance>



@property (readonly, nonatomic) NSDictionary *converterFromClass; // ivar: _converterFromClass
@property (readonly, nonatomic) NSDictionary *converterFromEntity; // ivar: _converterFromEntity
@property (readonly, nonatomic) _DPCoreDataStorage *coredataStorage; // ivar: _coredataStorage
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) BOOL readOnly; // ivar: _readOnly


+(id)createFetchRequestFor:(id)arg0 entityName:(id)arg1 predicate:(id)arg2 fetchLimit:(NSUInteger)arg3 fetchOffset:(NSUInteger)arg4 ;
+(id)entitiesRequiringMaintenance;
+(id)errorStringFor:(NSInteger)arg0 ;
+(id)shuffleOrderOfRecords:(id)arg0 count:(NSUInteger)arg1 ;
+(id)storageWithDirectory:(id)arg0 readOnly:(BOOL)arg1 ;
-(BOOL)deleteStorageWithObliterationOption:(BOOL)arg0 ;
-(id)init;
-(id)initWithDirectory:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)removeBadObjects:(id)arg0 ;
-(void)dealloc;
-(void)deleteAllRecordsByKey:(id)arg0 withCompletion:(id)arg1 ;
-(void)deleteRecords:(id)arg0 withCompletion:(id)arg1 ;
-(void)fetchKeynamesFor:(id)arg0 predicate:(id)arg1 fetchLimit:(NSUInteger)arg2 fetchOffset:(NSUInteger)arg3 withCompletion:(id)arg4 ;
-(void)fetchRecordCountForEntity:(id)arg0 predicate:(id)arg1 completion:(id)arg2 ;
-(void)fetchRecordsFor:(id)arg0 predicate:(id)arg1 fetchLimit:(NSUInteger)arg2 fetchOffset:(NSUInteger)arg3 randomizeOrder:(BOOL)arg4 withCompletion:(id)arg5 ;
-(void)fetchRecordsFor:(id)arg0 predicate:(id)arg1 fetchLimit:(NSUInteger)arg2 fetchOffset:(NSUInteger)arg3 withCompletion:(id)arg4 ;
-(void)flush;
-(void)handleEmptyArrayError:(NSInteger)arg0 completion:(id)arg1 ;
-(void)saveRecords:(id)arg0 andFlush:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)saveRecords:(id)arg0 withCompletion:(id)arg1 ;
-(void)scheduleMaintenanceWithName:(id)arg0 database:(id)arg1 ;
-(void)scheduleStorageCullingWithName:(id)arg0 database:(id)arg1 ;
-(void)updateRecords:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif