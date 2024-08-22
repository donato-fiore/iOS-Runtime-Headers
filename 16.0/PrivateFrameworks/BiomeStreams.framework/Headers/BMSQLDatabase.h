// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSQLDATABASE_H
#define BMSQLDATABASE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface BMSQLDatabase : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSArray *accessedColumns; // ivar: _accessedColumns
@property (readonly, nonatomic) *sqlite3 db; // ivar: _db
@property (readonly, nonatomic) BOOL isColumnAccessLoggingEnabled; // ivar: _isColumnAccessLoggingEnabled
@property (readonly, copy, nonatomic) NSArray *privileges; // ivar: _privileges
@property (readonly, nonatomic) NSArray *virtualTables; // ivar: _virtualTables


-(BOOL)attachDatabase:(id)arg0 name:(id)arg1 error:(*id)arg2 ;
-(BOOL)executeStatement:(id)arg0 error:(*id)arg1 ;
// -(BOOL)registerFunctionWithName:(id)arg0 numArgs:(int)arg1 function:(id)arg2 error:(unk)arg3  ;
-(id)SQLSchemaString;
-(id)_executeQuery:(id)arg0 ;
-(id)description;
-(id)executeQuery:(id)arg0 ;
-(id)init;
-(id)initWithAdditionalVirtualTables:(id)arg0 privileges:(id)arg1 isColumnAccessLoggingEnabled:(BOOL)arg2 ;
-(id)initWithPrivileges:(id)arg0 isColumnAccessLoggingEnabled:(BOOL)arg1 ;
-(id)initWithStreams:(id)arg0 library:(id)arg1 privileges:(id)arg2 isColumnAccessLoggingEnabled:(BOOL)arg3 error:(*id)arg4 ;
-(id)initWithVirtualTables:(id)arg0 privileges:(id)arg1 isColumnAccessLoggingEnabled:(BOOL)arg2 enableAuthorizer:(BOOL)arg3 error:(*id)arg4 ;
-(id)virtualTableForName:(id)arg0 ;
-(void)dealloc;
-(void)logColumnAccess:(id)arg0 tableName:(id)arg1 ;
-(void)resetColumnAccessLog;


@end


#endif