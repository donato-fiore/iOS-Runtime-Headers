// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTSQLSTORAGE_H
#define PPTSQLSTORAGE_H

@class NSDictionary, NSMutableSet;


#import "PPTStorage.h"

@interface PPTSQLStorage : PPTStorage

@property (retain) NSDictionary *connectionByStorage; // ivar: _connectionByStorage
@property (retain) NSMutableSet *entryKeysToSetup; // ivar: _entryKeysToSetup
@property BOOL storageStarted; // ivar: _storageStarted


+(id)trimConditionsForCESQLWithTrimDate:(id)arg0 ;
+(id)trimConditionsForEPSQLWithTrimDate:(id)arg0 ;
+(id)trimConditionsForEntryKey:(id)arg0 trimDate:(CGFloat)arg1 currDate:(CGFloat)arg2 ;
+(id)trimConditionsForPLSQLWithTrimDate:(id)arg0 ;
+(id)trimConditionsForStorage:(int)arg0 trimDate:(id)arg1 ;
-(BOOL)updateTable:(id)arg0 transferDataForKeys:(id)arg1 ;
-(id)CESQLConnection;
-(id)EPSQLConnection;
-(id)PLSQLConnection;
-(id)PreUnlockEPSQLConnection;
-(id)connectionForKey:(id)arg0 ;
-(id)init;
-(id)metricsToAddForStorage:(id)arg0 processedMetrics:(id)arg1 ;
-(id)metricsToUpdateForStorage:(id)arg0 processedMetrics:(id)arg1 ;
-(id)setupDBConnectionAtPath:(id)arg0 ;
-(int)storageForConnection:(id)arg0 ;
-(void)closeAllConnections;
-(void)createMetadataTable;
-(void)deleteOldMetadataStore;
-(void)handleMetadataVersionChange;
-(void)handleSchemaMismatchForTable:(id)arg0 ;
-(void)persistMetadata;
-(void)setupDBConnections;
-(void)setupFolders;
-(void)setupMetadataStorage;
-(void)setupStorageForEntryKey:(id)arg0 ;
-(void)setupTableForEntryKey:(id)arg0 ;
-(void)setupTableForEntryKey:(id)arg0 withName:(id)arg1 ;
-(void)startStorage;
-(void)updateMetadata:(id)arg0 updateMetrics:(id)arg1 addMetrics:(id)arg2 ;


@end


#endif