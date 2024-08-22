// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PASSQLITEDEFAULTERRORHANDLER_H
#define _PASSQLITEDEFAULTERRORHANDLER_H

@class NSString;
@protocol _PASSqliteErrorHandlerProtocol;

#import <Foundation/Foundation.h>


@interface _PASSqliteDefaultErrorHandler : NSObject <_PASSqliteErrorHandlerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(BOOL)_abortDueToSqliteError:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_ABORT:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_ABORT_ROLLBACK:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_AUTH:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_AUTH_USER:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_BUSY:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_BUSY_RECOVERY:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_BUSY_SNAPSHOT:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_CANTOPEN:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_CANTOPEN_CONVPATH:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_CANTOPEN_FULLPATH:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_CANTOPEN_ISDIR:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_CANTOPEN_NOTEMPDIR:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_CONSTRAINT:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_CONSTRAINT_CHECK:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_CONSTRAINT_COMMITHOOK:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_CONSTRAINT_FOREIGNKEY:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_CONSTRAINT_FUNCTION:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_CONSTRAINT_NOTNULL:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_CONSTRAINT_PRIMARYKEY:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_CONSTRAINT_ROWID:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_CONSTRAINT_TRIGGER:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_CONSTRAINT_UNIQUE:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_CONSTRAINT_VTAB:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_CORRUPT:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_CORRUPT_VTAB:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_EMPTY:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_ERROR:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_FORMAT:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_FULL:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_INTERNAL:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_INTERRUPT:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_ACCESS:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_AUTH:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_BLOCKED:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_CHECKRESERVEDLOCK:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_CLOSE:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_CONVPATH:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_DELETE:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_DELETE_NOENT:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_DIR_CLOSE:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_DIR_FSYNC:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_FSTAT:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_FSYNC:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_GETTEMPPATH:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_LOCK:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_MMAP:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_NOMEM:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_RDLOCK:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_READ:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_SEEK:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_SHMLOCK:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_SHMMAP:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_SHMOPEN:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_SHMSIZE:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_SHORT_READ:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_TRUNCATE:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_UNLOCK:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_VNODE:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_IOERR_WRITE:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_LOCKED:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_LOCKED_SHAREDCACHE:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_MISMATCH:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_MISUSE:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_NOLFS:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_NOMEM:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_NOTADB:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_NOTFOUND:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_NOTICE:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_NOTICE_RECOVER_ROLLBACK:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_NOTICE_RECOVER_WAL:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_PERM:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_PROTOCOL:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_RANGE:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_READONLY:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_READONLY_CANTLOCK:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_READONLY_DBMOVED:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_READONLY_RECOVERY:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_READONLY_ROLLBACK:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_SCHEMA:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_TOOBIG:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_WARNING:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_SQLITE_WARNING_AUTOINDEX:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)_handle_UNKNOWN_ERROR:(id)arg0 onError:(id)arg1 db:(unk)arg2  ;
// -(BOOL)handleSqliteError:(int)arg0 error:(id)arg1 onError:(id)arg2 db:(unk)arg3  ;


@end


#endif