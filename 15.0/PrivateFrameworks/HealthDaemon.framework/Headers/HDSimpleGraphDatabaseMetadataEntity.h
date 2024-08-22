// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSIMPLEGRAPHDATABASEMETADATAENTITY_H
#define HDSIMPLEGRAPHDATABASEMETADATAENTITY_H



#import "HDSQLiteEntity.h"

@interface HDSimpleGraphDatabaseMetadataEntity : HDSQLiteEntity



+(BOOL)setMetadataValue:(id)arg0 forKey:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
+(id)databaseTable;
+(id)metadataValueForKey:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;
-(id)init;


@end


#endif