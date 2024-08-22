// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPQLCACHE_H
#define CKDPQLCACHE_H

@class NSHashTable, NSArray, PQLConnection, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKDPQLCache : NSObject

@property (readonly, nonatomic) NSHashTable *containers; // ivar: _containers
@property (readonly, nonatomic) NSArray *createInitialTablesSQL;
@property (readonly, nonatomic) PQLConnection *database; // ivar: _pdb
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dbQueue; // ivar: _dbQueue
@property (readonly, nonatomic) BOOL isOpen;
@property (nonatomic) NSUInteger openHandles; // ivar: _openHandles
@property (readonly, nonatomic) NSString *path;


-(BOOL)_closeWithError:(*id)arg0 force:(BOOL)arg1 ;
-(BOOL)_lockedOpenDatabase:(*id)arg0 ;
-(BOOL)_setupCacheWithError:(*id)arg0 ;
-(BOOL)_setupConnectionWithError:(*id)arg0 ;
-(BOOL)_truncateAndReconnectToDatabaseWithError:(*id)arg0 ;
-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)forceCloseWithError:(*id)arg0 ;
-(BOOL)openWithError:(*id)arg0 ;
-(BOOL)removeCorruptDatabaseWithError:(*id)arg0 ;
-(BOOL)removeDatabaseFilesWithError:(*id)arg0 ;
-(BOOL)resetWithError:(*id)arg0 ;
-(id)_newConnection:(id)arg0 ;
-(id)infoToUpgradeFromVersion:(NSUInteger)arg0 ;
-(id)initWithContainer:(id)arg0 ;
-(void)performOnDBQueue:(id)arg0 ;


@end


#endif