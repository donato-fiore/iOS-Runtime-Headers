// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSQLITEMETAENTITY_H
#define HDSQLITEMETAENTITY_H



#import "HDSQLiteEntity.h"

@interface HDSQLiteMetaEntity : HDSQLiteEntity



+(id)databaseTable;
+(id)queryWithDatabase:(id)arg0 type:(id)arg1 ;
+(id)queryWithDatabase:(id)arg0 type:(id)arg1 tableName:(id)arg2 ;
+(id)queryWithDatabase:(id)arg0 types:(id)arg1 tableName:(id)arg2 ;
-(id)SQLWithDatabase:(id)arg0 ;
-(id)nameWithDatabase:(id)arg0 ;
-(id)tableNameWithDatabase:(id)arg0 ;
-(id)typeWithDatabase:(id)arg0 ;


@end


#endif