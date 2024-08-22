// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SYSHAREDSERVICEDB_H
#define _SYSHAREDSERVICEDB_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _SYSharedServiceDB : NSObject {
    os_unfair_lock_s _lock;
    *sqlite3 _db;
    NSString *_name;
    NSMutableDictionary *_schemaSetupCallbacks;
}


@property (readonly, nonatomic, getter=_dbPath) NSString *dbPath;


+(id)sharedInstanceForServiceName:(id)arg0 ;
+(void)_releaseSharedInstanceForServiceName:(id)arg0 ;
+(void)initialize;
+(void)pairingStorePathWasReset;
-(BOOL)_LOCKED_createOrOpenDBForServiceName:(id)arg0 error:(*id)arg1 ;
-(BOOL)_LOCKED_ensureDBExists;
-(BOOL)_LOCKED_hasSchemaVersionForClient:(id)arg0 ;
-(BOOL)_addSkipBackupAttributeToItemAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)_ensureParentExists:(id)arg0 error:(*id)arg1 ;
// -(BOOL)_runTransactionBlock:(id)arg0 exclusive:(unk)arg1  ;
-(BOOL)inExclusiveTransaction:(id)arg0 ;
-(BOOL)inTransaction:(id)arg0 ;
-(NSInteger)_LOCKED_getClientVersion:(id)arg0 ;
-(NSInteger)schemaVersionForClient:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(void)_LOCKED_ensureSchemaVersionsTableInDB:(struct sqlite3 *)arg0 ;
// -(void)_LOCKED_runSchemaUpdate:(id)arg0 forClientNamed:(unk)arg1  ;
-(void)_LOCKED_setVersion:(NSInteger)arg0 forClient:(id)arg1 ;
-(void)_ensureSchemaVersionsTable;
-(void)dealloc;
-(void)setSchemaVersion:(NSInteger)arg0 forClient:(id)arg1 ;
-(void)updateSchemaForClient:(id)arg0 usingBlock:(id)arg1 ;
-(void)withDBRef:(id)arg0 ;


@end


#endif