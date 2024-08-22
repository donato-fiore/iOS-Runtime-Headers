// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDPERSISTENCEDATABASECONNECTIONPOOL_H
#define EDPERSISTENCEDATABASECONNECTIONPOOL_H

@class NSLock, NSMutableSet, NSMapTable, EFResourcePool;
@protocol EDPersistenceDatabaseConnectionPoolDelegate;

#import <Foundation/Foundation.h>

#import "_EDPersistenceDatabaseConnectionWrapper.h"

@interface EDPersistenceDatabaseConnectionPool : NSObject {
    NSLock *_cacheLock;
    NSMutableSet *_cache;
    NSUInteger _cacheSize;
    NSUInteger _cacheGeneration;
    NSLock *_checkoutLock;
    NSMapTable *_checkoutMap;
    NSLock *_writerLock;
    _EDPersistenceDatabaseConnectionWrapper *_writerConnection;
    int _writersWaiting;
    int _backgroundReadersWaiting;
    EFResourcePool *_backgroundReaderResources;
}


@property (readonly, nonatomic) NSUInteger backgroundReadersWaiting;
@property (nonatomic) NSUInteger cacheSize;
@property (weak, nonatomic) NSObject<EDPersistenceDatabaseConnectionPoolDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger maxConcurrentBackgroundReaders; // ivar: _maxConcurrentBackgroundReaders
@property (readonly, nonatomic) NSUInteger writersWaiting;


-(BOOL)_lockForConnectionType:(NSUInteger)arg0 resource:(*id)arg1 ;
-(NSUInteger)maxConcurrentReaders;
-(id)_connectionWithType:(NSUInteger)arg0 ;
-(id)backgroundReaderConnection;
-(id)init;
-(id)initWithDelegate:(id)arg0 maxConcurrentBackgroundReaders:(NSUInteger)arg1 ;
-(id)readerConnection;
-(id)writerConnection;
-(void)_unlockForConnectionType:(NSUInteger)arg0 resource:(id)arg1 ;
-(void)checkInConnection:(id)arg0 ;
-(void)dealloc;
-(void)flush;


@end


#endif