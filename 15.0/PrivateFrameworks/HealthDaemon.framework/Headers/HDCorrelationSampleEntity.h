// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCORRELATIONSAMPLEENTITY_H
#define HDCORRELATIONSAMPLEENTITY_H



#import "HDSampleEntity.h"

@interface HDCorrelationSampleEntity : HDSampleEntity



+(BOOL)acceptsObject:(id)arg0 ;
+(BOOL)addCodableObject:(id)arg0 toCollection:(id)arg1 ;
+(BOOL)isBackedByTable;
+(BOOL)isConcreteEntity;
+(BOOL)requiresSampleTypePredicate;
+(id)codableObjectsFromObjectCollection:(id)arg0 ;
+(id)createTableSQL;
+(id)deleteStatementsForRelatedEntitiesWithTransaction:(id)arg0 ;
+(id)entityEncoderForProfile:(id)arg0 transaction:(id)arg1 purpose:(NSInteger)arg2 encodingOptions:(id)arg3 authorizationFilter:(id)arg4 ;
+(id)insertDataObject:(id)arg0 withProvenance:(id)arg1 inDatabase:(id)arg2 persistentID:(id)arg3 error:(*id)arg4 ;
-(BOOL)deleteFromDatabase:(id)arg0 error:(*id)arg1 ;


@end


#endif