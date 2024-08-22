// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBSQLSTATEMENT_H
#define HMBSQLSTATEMENT_H

@class HMFObject, NSArray;


#import "HMBSQLContext.h"

@interface HMBSQLStatement : HMFObject

@property (readonly, weak, nonatomic) HMBSQLContext *context; // ivar: _context
@property (readonly, nonatomic) NSArray *queryPlans; // ivar: _queryPlans
@property (nonatomic) *sqlite3_stmt statement; // ivar: _statement


+(BOOL)explainStatements;
+(id)queryPlansForContext:(id)arg0 statement:(id)arg1 ;
+(struct sqlite3_stmt *)sqlStatementForContext:(id)arg0 statement:(id)arg1 ;
+(void)setExplainStatements:(BOOL)arg0 ;
-(id)initWithContext:(id)arg0 statement:(id)arg1 ;
-(id)initWithContext:(id)arg0 statement:(struct sqlite3_stmt *)arg1 queryPlans:(id)arg2 ;
-(void)dealloc;
-(void)finalize;


@end


#endif