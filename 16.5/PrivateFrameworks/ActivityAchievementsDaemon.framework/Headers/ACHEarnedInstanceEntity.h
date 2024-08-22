// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
+(BOOL)removeEarnedInstancesForTemplateUniqueName:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)supportsSyncStore:(id)arg0 ;
+(NSInteger)nextSyncAnchorWithSession:(id)arg0 startSyncAnchor:(NSInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(NSInteger)receiveSyncObjects:(id)arg0 version:(struct ? )arg1 syncStore:(id)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(NSUInteger)_countOfEarnedInstancesWithPredicate:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(NSUInteger)countOfEarnedInstancesForTemplateUniqueName:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg0 ;
+(id)_earnedInstancesWithPredicate:(id)arg0 limit:(NSUInteger)arg1 ascendingByEarnedDate:(BOOL)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(id)_earnedInstancesWithPredicate:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)_insertEarnedInstance:(id)arg0 provenance:(NSInteger)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)_insertEarnedInstances:(id)arg0 provenance:(NSInteger)arg1 profile:(id)arg2 databaseContext:(id)arg3 error:(*id)arg4 ;
+(id)allEarnedInstancesWithProfile:(id)arg0 error:(*id)arg1 ;
+(id)codableEarnedInstanceForEarnedInstanceInDatabase:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)createTableSQL;
+(id)databaseTable;
+(id)decodeSyncObjectWithData:(id)arg0 ;
+(id)earnedInstancesForDateComponents:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)earnedInstancesForTemplateUniqueName:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)insertEarnedInstances:(id)arg0 provenance:(NSInteger)arg1 profile:(id)arg2 databaseContext:(id)arg3 error:(*id)arg4 ;
+(id)journalEntryAppliedObserver;
+(id)mostRecentEarnedInstanceForTemplateUniqueName:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)propertyForSyncProvenance;
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg0 ;
+(id)syncEntityIdentifier;
+(id)syncedEarnedInstancesObserver;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
+(void)setJournalEntryAppliedObserver:(id)arg0 ;
+(void)setSyncedEarnedInstancesObserver:(id)arg0 ;


@end


#endif