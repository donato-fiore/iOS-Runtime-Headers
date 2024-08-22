// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDFITNESSFRIENDACTIVITYSNAPSHOTENTITY_H
#define HDFITNESSFRIENDACTIVITYSNAPSHOTENTITY_H



#import "HDSampleEntity.h"

@interface HDFitnessFriendActivitySnapshotEntity : HDSampleEntity



+(BOOL)addCodableObject:(id)arg0 toCollection:(id)arg1 ;
+(BOOL)enumerateSnapshotsWithPredicate:(id)arg0 anchor:(*id)arg1 profile:(id)arg2 error:(*id)arg3 handler:(id)arg4 ;
+(BOOL)isConcreteEntity;
+(BOOL)supportsObjectMerging;
+(NSInteger)protectionClass;
+(id)codableObjectsFromObjectCollection:(id)arg0 ;
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)insertDataObject:(id)arg0 withProvenance:(id)arg1 inDatabase:(id)arg2 persistentID:(id)arg3 error:(*id)arg4 ;
+(id)mergeDataObject:(id)arg0 provenance:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(*id)arg4 insertHandler:(id)arg5 ;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif