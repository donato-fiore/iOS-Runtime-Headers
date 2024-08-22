// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDSQLSELECTQUERY_H
#define IMDSQLSELECTQUERY_H



#import "IMDSqlQuery.h"

@interface IMDSqlSelectQuery : IMDSqlQuery



+(id)selectQueryForTable:(id)arg0 ;
+(id)selectQueryForTable:(id)arg0 withColumns:(id)arg1 ;
+(id)selectQueryForTable:(id)arg0 withColumns:(id)arg1 where:(id)arg2 ;
-(id)createQueryString;
-(id)initWithTableName:(id)arg0 ;


@end


#endif