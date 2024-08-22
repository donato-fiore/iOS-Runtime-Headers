// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACHEARNEDINSTANCEENTITY_H
#define ACHEARNEDINSTANCEENTITY_H

@class HDHealthEntity, NSString;
@protocol HDSyncEntity, HDNanoSyncEntity;



@interface ACHEarnedInstanceEntity : HDHealthEntity <HDSyncEntity, HDNanoSyncEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)generateSyncObjectsForSession:(id)arg0 syncAnchorRange:(struct HDSyncAnchorRange )arg1 profile:(id)arg2 messageHandler:(id)arg3 error:(*id)arg4 ;
+(BOOL)removeAllEarnedInstancesWithProfile:(id)arg0 error:(*id)arg1 ;
+(BOOL)removeEarnedInstances:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)supportsSyncStore:(id)arg0 ;
+(NSInteger)nextSyncAnchorWithSession:(id)arg0 predicate:(id)arg1 startSyncAnchor:(NSInteger)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(NSInteger)protectionClass;
+(NSInteger)receiveSyncObjects:(id)arg0 syncStore:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg0 ;
+(id)_earnedInstancesWithPredicate:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)_insertEarnedInstance:(id)arg0 provenance:(NSInteger)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)_insertEarnedInstances:(id)arg0 provenance:(NSInteger)arg1 profile:(id)arg2 databaseContext:(id)arg3 error:(*id)arg4 ;
+(id)allEarnedInstancesWithProfile:(id)arg0 error:(*id)arg1 ;
+(id)codableEarnedInstanceForEarnedInstanceInDatabase:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)createTableSQL;
+(id)databaseTable;
+(id)decodeSyncObjectWithData:(id)arg0 ;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)insertEarnedInstances:(id)arg0 provenance:(NSInteger)arg1 profile:(id)arg2 databaseContext:(id)arg3 error:(*id)arg4 ;
+(id)journalEntryAppliedObserver;
+(id)propertyForSyncProvenance;
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg0 ;
+(id)syncEntityIdentifier;
+(id)syncedEarnedInstancesObserver;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
+(void)setJournalEntryAppliedObserver:(id)arg0 ;
+(void)setSyncedEarnedInstancesObserver:(id)arg0 ;


@end


#endif