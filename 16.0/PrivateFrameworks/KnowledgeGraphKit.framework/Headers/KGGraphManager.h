// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KGGRAPHMANAGER_H
#define KGGRAPHMANAGER_H

@class NSURL, NSMutableArray;
@protocol KGEntityFactory, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "KGDatabaseNameCache.h"
#import "KGDegasGraphStore.h"

@interface KGGraphManager : NSObject {
    os_unfair_lock_s _lock;
    NSURL *_url;
    id<KGEntityFactory> *_entityFactory;
    int _readRunningCount;
    BOOL _readFeeding;
    NSObject<OS_dispatch_queue> *_writeFeederQueue;
    NSObject<OS_dispatch_queue> *_readFeederQueue;
    NSObject<OS_dispatch_queue> *_executionQueue;
    char _readStoreBooking;
    KGDatabaseNameCache *_nameCache;
    BOOL _closed;
    NSMutableArray *_readOnlyStores;
    KGDegasGraphStore *_readWriteStore;
}




-(BOOL)checkValidState;
-(BOOL)replaceFromGraph:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 entityFactory:(id)arg1 ;
-(id)obtainReadOnlyStore:(*id)arg0 ;
-(id)obtainReadWriteStore:(*id)arg0 ;
-(void)asyncClose:(id)arg0 ;
-(void)checkinReadOnlyStore:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)decrementReadCount;
-(void)doClose;
-(void)incrementReadCount;
-(void)performAsyncExclusiveBlock:(id)arg0 ;
-(void)performAsyncReadBlock:(id)arg0 ;
-(void)performAsyncWriteBlock:(id)arg0 ;
-(void)performExclusiveBlock:(id)arg0 ;
-(void)performReadBlock:(id)arg0 ;
-(void)performWriteBlock:(id)arg0 ;
// -(void)submitExclusiveBlock:(id)arg0 async:(unk)arg1  ;
// -(void)submitReadBlock:(id)arg0 async:(unk)arg1  ;
// -(void)submitWriteBlock:(id)arg0 async:(unk)arg1  ;


@end


#endif