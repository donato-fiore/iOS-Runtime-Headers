// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTSQLSTORAGE_H
#define PPTSQLSTORAGE_H

@class NSDictionary;


#import "PPTStorage.h"

@interface PPTSQLStorage : PPTStorage

@property (retain) NSDictionary *connectionByStorage; // ivar: _connectionByStorage
@property BOOL storageStarted; // ivar: _storageStarted


+(id)trimConditionsForEPSQLWithTrimDate:(id)arg0 ;
+(id)trimConditionsForEntryKey:(id)arg0 trimDate:(CGFloat)arg1 currDate:(CGFloat)arg2 ;
+(id)trimConditionsForPLSQLWithTrimDate:(id)arg0 ;
+(id)trimConditionsForStorage:(int)arg0 trimDate:(id)arg1 ;
-(BOOL)updateTable:(id)arg0 transferDataForKeys:(id)arg1 ;
-(id)EPSQLConnection;
-(id)PLSQLConnection;
-(id)PreUnlockEPSQLConnection;
-(id)connectionForKey:(id)arg0 ;
-(id)init;
-(id)setupDBConnectionAtPath:(id)arg0 ;
-(short)verifyVersionForTable:(id)arg0 matches:(id)arg1 ;
-(void)closeAllConnections;
-(void)handleSchemaMismatchForTable:(id)arg0 expectedVersion:(id)arg1 ;
-(void)setupDBConnections;
-(void)setupFolders;
-(void)setupLogVersions:(id)arg0 version:(CGFloat)arg1 ;
-(void)setupStorageForEntryKey:(id)arg0 ;
-(void)setupStorageVersions;
-(void)setupTableForEntryKey:(id)arg0 ;
-(void)setupTableForEntryKey:(id)arg0 withName:(id)arg1 ;
-(void)startStorage;


@end


#endif