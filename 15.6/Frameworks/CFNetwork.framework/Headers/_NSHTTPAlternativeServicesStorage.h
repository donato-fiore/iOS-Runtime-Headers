// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSHTTPALTERNATIVESERVICESSTORAGE_H
#define _NSHTTPALTERNATIVESERVICESSTORAGE_H

@class NSURL, NSMutableSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _NSHTTPAlternativeServicesStorage : NSObject {
    NSURL *_path;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _garbageCollectionDispatched;
    BOOL _dbInitialized;
    BOOL _isMemoryStore;
    os_unfair_lock_s lock;
    NSMutableSet *memoryEntries;
    NSMutableSet *clearEntries;
    NSMutableDictionary *speculativeEntries;
    *sqlite3 dbConnection;
    *sqlite3_stmt selectAllEntriesStmt;
    *sqlite3_stmt selectAllValidEntriesStmt;
    *sqlite3_stmt selectEntriesStmt;
    *sqlite3_stmt selectEntriesWithRegistrableDomainStmt;
    *sqlite3_stmt insertEntriesStmt;
    *sqlite3_stmt deleteWithTimeStmt;
    *sqlite3_stmt deleteWithHostAndPortStmt;
    *sqlite3_stmt deleteWithRegistrableDomainStmt;
    *sqlite3_stmt deleteExpiredEntriesStmt;
    *sqlite3_stmt trimDbStmt;
}


@property (readonly, nonatomic) NSURL *path;


+(id)sharedPersistentStore;
-(id)HTTPServiceEntriesWithFilter:(id)arg0 ;
-(id)HTTPServiceEntriesWithRegistrableDomain:(id)arg0 ;
-(id)entries;
-(id)init;
-(id)initInMemoryStore;
-(id)initPersistentStoreWithURL:(id)arg0 ;
-(void)dealloc;
-(void)removeHTTPAlternativeServiceEntriesCreatedAfterDate:(id)arg0 ;
-(void)removeHTTPAlternativeServiceEntriesWithHost:(id)arg0 port:(NSInteger)arg1 ;
-(void)removeHTTPAlternativeServiceEntriesWithRegistrableDomain:(id)arg0 ;
-(void)storeHTTPServiceEntry:(id)arg0 ;


@end


#endif