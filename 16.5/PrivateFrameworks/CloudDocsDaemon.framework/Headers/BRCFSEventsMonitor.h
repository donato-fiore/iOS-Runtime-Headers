// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCFSEVENTSMONITOR_H
#define BRCFSEVENTSMONITOR_H

@class NSString, NSMutableArray, PQLConnection;
@protocol BRCModule, BRCSuspendable, OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore, BRCFSEventsDelegate;

#import <Foundation/Foundation.h>

#import "BRCAccountSession.h"
#import "BRCFSEventsPersistedState.h"
#import "BRCFairSource.h"
#import "BRCVolume.h"
#import "BRCRelativePath.h"

@interface BRCFSEventsMonitor : NSObject <BRCModule, BRCSuspendable>

 {
    BRCAccountSession *_session;
    NSString *_name;
    uint8_t _suspendCount;
    uint8_t _resetCount;
    BRCFSEventsPersistedState *_persistedState;
    NSString *_devicePath;
    NSObject<OS_dispatch_source> *_rootVnodeWatcher;
    *__FSEventStream _stream;
    NSObject<OS_dispatch_queue> *_streamQueue;
    NSObject<OS_dispatch_source> *_historicalEventSource;
    NSObject<OS_dispatch_queue> *_processQueue;
    BRCFairSource *_fseventsProcessSource;
    NSMutableArray *_fseventsToProcess;
    NSUInteger _maxFSEventQueueSize;
    NSUInteger _fseventProcessBatchSize;
    BOOL _hasMarkSelf;
    BRCFSEventsPersistedState *_rendezVous;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    BOOL _drainEvents;
    BRCVolume *_volume;
}


@property (retain, nonatomic, setter=setDB:) PQLConnection *db; // ivar: _db
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<BRCFSEventsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly, nonatomic) BRCRelativePath *root; // ivar: _root
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL volumeIsCaseSensitive;


-(BOOL)_queueEvents:(id)arg0 markSelfEncountered:(BOOL)arg1 ;
-(BOOL)openWithRoot:(id)arg0 isImmutableRoot:(BOOL)arg1 volume:(id)arg2 error:(*id)arg3 ;
-(BOOL)openWithRoot:(id)arg0 volume:(id)arg1 error:(*id)arg2 ;
-(BOOL)setUpRoot:(id)arg0 isImmutableRoot:(BOOL)arg1 volume:(id)arg2 error:(*id)arg3 ;
-(BOOL)setUpStreamSynchronously:(BOOL)arg0 reason:(id)arg1 error:(*id)arg2 ;
-(id)initWithAccountSession:(id)arg0 ;
-(id)initWithAccountSession:(id)arg0 name:(id)arg1 ;
-(void)_cancel;
-(void)_close;
-(void)_updatePersistedStateWithState:(id)arg0 ;
-(void)cancel;
-(void)close;
-(void)dealloc;
-(void)didProcessEventID:(NSUInteger)arg0 ;
-(void)flushStream;
-(void)fseventAtPath:(id)arg0 withFlags:(unsigned int)arg1 andID:(NSUInteger)arg2 eventIndex:(unsigned int)arg3 eventCount:(unsigned int)arg4 initialScan:(BOOL)arg5 ;
-(void)fseventOnRootWithEventID:(NSUInteger)arg0 andReason:(id)arg1 ;
-(void)processFseventBatch;
-(void)queueEvents:(id)arg0 markSelfEncountered:(BOOL)arg1 ;
-(void)resetWithReason:(id)arg0 ;
-(void)resetWithReason:(id)arg0 dropFSEventID:(BOOL)arg1 ;
-(void)resume;
-(void)signalAfterCurrentFSEvent:(id)arg0 ;
-(void)stopWatcher;
-(void)suspend;


@end


#endif