// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSQLSTATEMENT_H
#define PLSQLSTATEMENT_H

@class NSString;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface PLSQLStatement : NSObject

@property *sqlite3 dbConnection; // ivar: _dbConnection
@property (retain) NSObject<OS_dispatch_semaphore> *dbSem; // ivar: _dbSem
@property (readonly) BOOL isDelete; // ivar: _isDelete
@property (readonly) BOOL isInsert; // ivar: _isInsert
@property (retain) NSString *sqlQuery; // ivar: _sqlQuery
@property *sqlite3_stmt statement; // ivar: _statement


-(id)description;
-(id)initWithSQLQuery:(id)arg0 forDatabase:(struct sqlite3 *)arg1 withDBSem:(id)arg2 result:(*int)arg3 ;
-(id)perform;
-(int)bindValue:(id)arg0 withFormater:(short)arg1 atPosition:(int)arg2 ;
-(void)dealloc;
-(void)finalize;
-(void)reset;


@end


#endif