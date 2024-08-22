// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDELETEDSAMPLEENTITY_H
#define HDDELETEDSAMPLEENTITY_H



#import "HDDeletedObjectEntity.h"

@interface HDDeletedSampleEntity : HDDeletedObjectEntity



+(BOOL)addCodableObject:(id)arg0 toCollection:(id)arg1 ;
+(BOOL)enumerateDeletedSamplesWithTypes:(id)arg0 profile:(id)arg1 restrictedSourceEntities:(id)arg2 limit:(NSUInteger)arg3 anchor:(NSInteger)arg4 error:(*id)arg5 handler:(id)arg6 ;
+(BOOL)enumerateEntitiesForSyncWithProperties:(id)arg0 predicate:(id)arg1 session:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange )arg3 limit:(NSUInteger)arg4 lastSyncAnchor:(*NSInteger)arg5 healthDatabase:(id)arg6 error:(*id)arg7 block:(id)arg8 ;
+(BOOL)insertCodableDeletedSamples:(id)arg0 provenance:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)isConcreteEntity;
+(Class)_entityClassForDeletion;
+(NSInteger)nextSyncAnchorWithStartAnchor:(NSInteger)arg0 predicate:(id)arg1 session:(id)arg2 healthDatabase:(id)arg3 error:(*id)arg4 ;
+(NSInteger)protectionClass;
+(id)codableObjectsFromObjectCollection:(id)arg0 ;
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)insertDeletedObject:(id)arg0 dataType:(id)arg1 provenanceIdentifier:(id)arg2 deletionDate:(id)arg3 persistStartAndEndDates:(BOOL)arg4 startTimestamp:(CGFloat)arg5 endTimestamp:(CGFloat)arg6 inDatabase:(id)arg7 error:(*id)arg8 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif