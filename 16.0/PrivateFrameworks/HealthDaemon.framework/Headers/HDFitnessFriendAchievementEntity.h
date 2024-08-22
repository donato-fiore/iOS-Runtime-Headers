// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDFITNESSFRIENDACHIEVEMENTENTITY_H
#define HDFITNESSFRIENDACHIEVEMENTENTITY_H



#import "HDSampleEntity.h"

@interface HDFitnessFriendAchievementEntity : HDSampleEntity



+(BOOL)addCodableObject:(id)arg0 toCollection:(id)arg1 ;
+(BOOL)enumerateAchievementsWithPredicate:(id)arg0 anchor:(*id)arg1 profile:(id)arg2 error:(*id)arg3 handler:(id)arg4 ;
+(BOOL)isConcreteEntity;
+(NSInteger)protectionClass;
+(id)codableObjectsFromObjectCollection:(id)arg0 ;
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)insertDataObject:(id)arg0 withProvenance:(id)arg1 inDatabase:(id)arg2 persistentID:(id)arg3 error:(*id)arg4 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif