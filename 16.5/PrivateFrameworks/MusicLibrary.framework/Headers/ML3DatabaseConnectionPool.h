// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3DATABASECONNECTIONPOOL_H
#define ML3DATABASECONNECTIONPOOL_H

@class NSMutableDictionary, NSUUID, NSString;
@protocol OS_dispatch_queue, ML3DatabaseConnectionPoolDelegate;

#import <Foundation/Foundation.h>

#import "_ML3DatabaseConnectionSubPool.h"

@interface ML3DatabaseConnectionPool : NSObject {
    _ML3DatabaseConnectionSubPool *_readersSubPool;
    _ML3DatabaseConnectionSubPool *_writersSubPool;
    NSMutableDictionary *_identifiersConnectionsMap;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSUUID *_poolStorageKey;
    BOOL _useDistantWriterConnections;
    _opaque_pthread_cond_t _poolLockCondition;
    _opaque_pthread_mutex_t _poolLockMutex;
}


@property (nonatomic, getter=isClosed) BOOL closed; // ivar: _closed
@property (nonatomic) NSUInteger connectionsJournalingMode; // ivar: _connectionsJournalingMode
@property (readonly, nonatomic) NSString *databasePath; // ivar: _databasePath
@property (weak, nonatomic) NSObject<ML3DatabaseConnectionPoolDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isCurrentThreadConnectionInTransaction;
@property (readonly, nonatomic, getter=isLocked) BOOL locked; // ivar: _locked
@property (readonly, nonatomic) NSUInteger maxReaders; // ivar: _maxReaders
@property (readonly, nonatomic) NSUInteger maxWriters; // ivar: _maxWriters
@property (nonatomic) BOOL useDistantWriterConnections;


-(id)_connectionForIdentifier:(id)arg0 ;
-(id)_connectionForWriting:(BOOL)arg0 useThreadConnection:(BOOL)arg1 storeThreadLocalConnection:(BOOL)arg2 ;
-(id)_generateDiagnostic;
-(id)_localConnectionForThread:(id)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithDatabasePath:(id)arg0 maxReaders:(NSUInteger)arg1 ;
-(id)initWithDatabasePath:(id)arg0 maxReaders:(NSUInteger)arg1 maxWriters:(NSUInteger)arg2 ;
-(id)readerConnection;
-(id)writerConnection;
-(void)_closeAllConnectionsAndWaitForBusyConnections:(BOOL)arg0 ;
-(void)_setConnection:(id)arg0 forIdentifier:(id)arg1 ;
-(void)_setLocalConnection:(id)arg0 forThread:(id)arg1 ;
-(void)checkInConnection:(id)arg0 ;
-(void)closeAllConnections;
-(void)dealloc;
-(void)lock;
-(void)lockAndCloseAllConnectionsForTermination;
-(void)unlock;


@end


#endif