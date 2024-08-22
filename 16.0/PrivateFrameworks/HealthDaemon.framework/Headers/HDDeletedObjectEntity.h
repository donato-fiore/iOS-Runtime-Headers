// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDELETEDOBJECTENTITY_H
#define HDDELETEDOBJECTENTITY_H



#import "HDDataEntity.h"

@interface HDDeletedObjectEntity : HDDataEntity



+(BOOL)deleteEntitiesWithPredicate:(id)arg0 healthDatabase:(id)arg1 error:(*id)arg2 ;
+(BOOL)deleteObjectsWithPredicate:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)requiresSampleTypePredicate;
+(Class)baseDataEntityClass;
+(NSInteger)preferredEntityType;
+(id)deletedObjectEntityForDeletedObject:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)insertDeletedObject:(id)arg0 provenanceIdentifier:(id)arg1 deletionDate:(id)arg2 inDatabase:(id)arg3 error:(*id)arg4 ;


@end


#endif