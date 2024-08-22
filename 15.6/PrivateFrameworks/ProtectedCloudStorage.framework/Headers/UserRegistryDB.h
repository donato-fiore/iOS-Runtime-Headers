// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef USERREGISTRYDB_H
#define USERREGISTRYDB_H

@class NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface UserRegistryDB : NSObject

@property *sqlite3_stmt deleteEscrowKey; // ivar: _deleteEscrowKey
@property *sqlite3_stmt deleteMirrorKeys; // ivar: _deleteMirrorKeys
@property *sqlite3_stmt deleteStatment; // ivar: _deleteStatment
@property (retain) NSString *dsid; // ivar: _dsid
@property *sqlite3_stmt insertEscrowKey; // ivar: _insertEscrowKey
@property *sqlite3_stmt insertMirrorKey; // ivar: _insertMirrorKey
@property *sqlite3_stmt insertWatch; // ivar: _insertWatch
@property *sqlite3_stmt insertWatchKey; // ivar: _insertWatchKey
@property *sqlite3_stmt markMirrorKey; // ivar: _markMirrorKey
@property (retain) NSObject<OS_os_log> *oslog; // ivar: _oslog
@property *sqlite3_stmt queryEscrowKey; // ivar: _queryEscrowKey
@property *sqlite3_stmt queryEscrowKeysAll; // ivar: _queryEscrowKeysAll
@property *sqlite3_stmt queryMissingKeys; // ivar: _queryMissingKeys
@property *sqlite3_stmt queryWatches; // ivar: _queryWatches
@property *sqlite3_stmt recordIDStatment; // ivar: _recordIDStatment
@property *sqlite3_stmt replaceStatment; // ivar: _replaceStatment
@property *sqlite3_stmt resetCurrentMirrorKey; // ivar: _resetCurrentMirrorKey
@property *sqlite3 sqliteHandle; // ivar: _sqliteHandle
@property *sqlite3_stmt updateEscrowKey; // ivar: _updateEscrowKey
@property *sqlite3_stmt updateMirrorKey; // ivar: _updateMirrorKey
@property *sqlite3_stmt updateWatch; // ivar: _updateWatch


-(?)preparestatement;
-(BOOL)beginExclusiveTransaction;
-(BOOL)deleteEscrowKey:(id)arg0 ;
-(BOOL)deleteMirrorKeys:(int)arg0 ;
-(BOOL)deleteRecordAll;
-(BOOL)deleteRecordID:(id)arg0 ;
-(BOOL)endTransaction:(BOOL)arg0 ;
-(BOOL)markMirrorKey:(int)arg0 type:(int)arg1 ;
-(BOOL)replaceConfigRecord:(id)arg0 data:(id)arg1 ;
-(BOOL)replaceRecord:(id)arg0 type:(int)arg1 data:(id)arg2 publicKey:(id)arg3 ;
-(BOOL)replaceRecordID:(id)arg0 data:(id)arg1 publicKey:(id)arg2 ;
-(BOOL)setEscrowKey:(id)arg0 escrowBlob:(id)arg1 ;
-(BOOL)setMirrorKey:(id)arg0 service:(int)arg1 type:(int)arg2 publicIdentity:(id)arg3 ;
-(BOOL)setupDatabase;
-(BOOL)syncedKeyToDevice:(id)arg0 type:(int)arg1 device:(id)arg2 ;
-(BOOL)updateEscrowKey:(id)arg0 escrowBlob:(id)arg1 ;
-(BOOL)updateMirrorKey:(id)arg0 service:(int)arg1 type:(int)arg2 newType:(int)arg3 current:(BOOL)arg4 ;
-(BOOL)updateSyncDevice:(id)arg0 seen:(id)arg1 version:(id)arg2 ;
-(id)getConfigData:(id)arg0 ;
-(id)getData:(id)arg0 type:(int)arg1 ;
-(id)getRecordIDData:(id)arg0 ;
-(id)initWithDSID:(id)arg0 ;
-(id)missingKeysFromDevice:(id)arg0 type:(int)arg1 ;
-(id)queryEscrowKey:(id)arg0 ;
-(id)syncDevices;
-(void)dealloc;


@end


#endif