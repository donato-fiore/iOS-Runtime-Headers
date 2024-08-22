// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBSQLQUERYSTATEMENT_H
#define HMBSQLQUERYSTATEMENT_H

@class NSDictionary;


#import "HMBSQLStatement.h"

@interface HMBSQLQueryStatement : HMBSQLStatement

@property (readonly, nonatomic) NSDictionary *arguments; // ivar: _arguments


-(id)initWithContext:(id)arg0 statement:(id)arg1 ;
-(id)initWithContext:(id)arg0 statement:(struct sqlite3_stmt *)arg1 queryPlans:(id)arg2 arguments:(id)arg3 ;


@end


#endif