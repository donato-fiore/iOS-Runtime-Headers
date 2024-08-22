// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3DATABASEEXCEPTION_H
#define ML3DATABASEEXCEPTION_H

@class NSError;


#import "MLException.h"

@interface ML3DatabaseException : MLException

@property (readonly, nonatomic) NSError *sqliteError; // ivar: _sqliteError


+(id)databaseExceptionWithReason:(id)arg0 sqliteError:(id)arg1 ;
-(id)init;
-(id)initWithReason:(id)arg0 sqliteError:(id)arg1 ;
-(void)_SQLITE_ABORT;
-(void)_SQLITE_AUTH;
-(void)_SQLITE_BUSY;
-(void)_SQLITE_CANTOPEN;
-(void)_SQLITE_CONSTRAINT;
-(void)_SQLITE_CORRUPT;
-(void)_SQLITE_DONE;
-(void)_SQLITE_EMPTY;
-(void)_SQLITE_ERROR;
-(void)_SQLITE_FORMAT;
-(void)_SQLITE_FULL;
-(void)_SQLITE_INTERNAL;
-(void)_SQLITE_INTERRUPT;
-(void)_SQLITE_IOERR;
-(void)_SQLITE_LOCKED;
-(void)_SQLITE_MISMATCH;
-(void)_SQLITE_MISUSE;
-(void)_SQLITE_NOLFS;
-(void)_SQLITE_NOMEM;
-(void)_SQLITE_NOTADB;
-(void)_SQLITE_NOTFOUND;
-(void)_SQLITE_PERM;
-(void)_SQLITE_PROTOCOL;
-(void)_SQLITE_RANGE;
-(void)_SQLITE_READONLY;
-(void)_SQLITE_ROW;
-(void)_SQLITE_SCHEMA;
-(void)_SQLITE_TOOBIG;
-(void)raise;


@end


#endif