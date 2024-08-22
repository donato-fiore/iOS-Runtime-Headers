// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSQLITESTORE_H
#define WBSSQLITESTORE_H

@class NSURL;
@protocol OS_dispatch_queue, WBSSQLiteStoreDelegate;

#import <Foundation/Foundation.h>

#import "WBSSQLiteDatabase.h"

@interface WBSSQLiteStore : NSObject {
    NSInteger _databaseLockingPolicy;
    NSInteger _protectionType;
    int _databaseCoordinationLockFileDescriptor;
    BOOL _fallBackToMemoryStoreIfError;
}


@property (readonly, nonatomic) WBSSQLiteDatabase *database; // ivar: _database
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue; // ivar: _databaseQueue
@property (readonly, nonatomic) NSURL *databaseURL; // ivar: _databaseURL
@property (weak, nonatomic) NSObject<WBSSQLiteStoreDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isOpen;


-(BOOL)_acquireDatabaseCoordinationLockForDatabaseURL:(id)arg0 ;
-(BOOL)_confirmDatabaseIntegrityIsOK;
-(BOOL)_isDatabaseLocked;
-(id)_databaseCoordinationLockURLForDatabaseURL:(id)arg0 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 protectionType:(NSInteger)arg1 ;
-(int)_createFreshDatabaseSchema;
-(int)_currentSchemaVersion;
-(int)_migrateToCurrentSchemaVersionIfNecessary;
-(int)_migrateToSchemaVersion:(int)arg0 ;
-(void)_closeDatabase;
-(void)_handleOpenFailureWithStatus:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)_openDatabase:(id)arg0 createIfNeeded:(BOOL)arg1 checkIntegrity:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_releaseDatabaseCoordinationLock;
-(void)closeWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)openAndCheckIntegrity:(BOOL)arg0 createIfNeeded:(BOOL)arg1 fallBackToMemoryStoreIfError:(BOOL)arg2 lockingPolicy:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)savePendingChangesBeforeTermination;


@end


#endif