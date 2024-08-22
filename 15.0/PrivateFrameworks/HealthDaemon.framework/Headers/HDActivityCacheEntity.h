// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDACTIVITYCACHEENTITY_H
#define HDACTIVITYCACHEENTITY_H



#import "HDSampleEntity.h"

@interface HDActivityCacheEntity : HDSampleEntity



+(BOOL)addCodableObject:(id)arg0 toCollection:(id)arg1 ;
+(BOOL)isConcreteEntity;
+(BOOL)supportsObjectMerging;
+(BOOL)validateEntityWithProfile:(id)arg0 error:(*id)arg1 validationErrorHandler:(id)arg2 ;
+(id)activityCacheForIndex:(NSInteger)arg0 profile:(id)arg1 encodingOptions:(id)arg2 error:(*id)arg3 ;
+(id)codableObjectsFromObjectCollection:(id)arg0 ;
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)foreignKeys;
+(id)indices;
+(id)insertDataObject:(id)arg0 withProvenance:(id)arg1 inDatabase:(id)arg2 persistentID:(id)arg3 error:(*id)arg4 ;
+(id)mergeDataObject:(id)arg0 provenance:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(*id)arg4 insertHandler:(id)arg5 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif