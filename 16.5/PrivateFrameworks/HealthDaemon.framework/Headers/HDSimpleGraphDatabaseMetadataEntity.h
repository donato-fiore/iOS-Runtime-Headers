// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSIMPLEGRAPHDATABASEMETADATAENTITY_H
#define HDSIMPLEGRAPHDATABASEMETADATAENTITY_H



#import "HDSQLiteEntity.h"

@interface HDSimpleGraphDatabaseMetadataEntity : HDSQLiteEntity



+(BOOL)enumerateMetadataValuesWithPredicate:(id)arg0 database:(id)arg1 error:(*id)arg2 enumerationHandler:(id)arg3 ;
+(BOOL)metadataValueForKey:(id)arg0 valueOut:(*id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(BOOL)setMetadataValue:(id)arg0 forKey:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)databaseTable;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(id)init;


@end


#endif