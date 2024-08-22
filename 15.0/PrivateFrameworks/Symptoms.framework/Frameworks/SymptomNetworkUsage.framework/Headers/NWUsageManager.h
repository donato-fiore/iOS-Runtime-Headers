// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWUSAGEMANAGER_H
#define NWUSAGEMANAGER_H

@class NSMutableSet, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue, NWUsageManagerDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NWPollHandler.h"
#import "NWUsageMonitor.h"

@interface NWUsageManager : NSObject {
    int _interfaceTraceFd;
    char * _iftracebuf;
    unsigned int _continuationCount;
    NSUInteger _currentPollReference;
    NSUInteger _nextPollReference;
    uint8_t _pollsOutstanding;
}


@property (retain) NWPollHandler *activePoll; // ivar: _activePoll
@property (retain) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property BOOL configured; // ivar: _configured
@property NSUInteger currentQueryAllReference; // ivar: _currentQueryAllReference
@property (weak, nonatomic) NSObject<NWUsageManagerDelegate> *delegate; // ivar: _delegate
@property (retain) NSMutableSet *interfaceSources; // ivar: _interfaceSources
@property (retain) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain) NSMutableDictionary *internalSources; // ivar: _internalSources
@property (getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property NSUInteger querySequenceNumber; // ivar: _querySequenceNumber
@property (retain) NSMutableArray *queuedPolls; // ivar: _queuedPolls
@property char * readBuffer; // ivar: _readBuffer
@property (retain) NSObject<OS_dispatch_source> *readSource; // ivar: _readSource
@property int sockfd; // ivar: _sockfd
@property (retain) NWUsageMonitor *usageMonitor; // ivar: _usageMonitor


-(BOOL)_setThresholds:(id)arg0 ;
-(BOOL)configure:(id)arg0 ;
// -(BOOL)enumerateFlowsUsingBlock:(id)arg0 completionBlock:(unk)arg1  ;
// -(BOOL)enumerateSelectFlows:(id)arg0 deliveryBlock:(id)arg1 completionBlock:(unk)arg2  ;
-(BOOL)initialConfigure:(id)arg0 ;
-(BOOL)reconfigure:(id)arg0 ;
-(id)_stage2InitWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)stateDictionary;
-(int)flowEnumerationCurrentUsage;
-(void)_addAllForProvider:(int)arg0 filter:(NSUInteger)arg1 events:(NSUInteger)arg2 ;
-(void)_handleCompletion:(NSUInteger)arg0 ;
-(void)_handleCounts:(struct nstat_msg_src_counts *)arg0 ;
-(void)_handleMessage:(struct nstat_msg_hdr *)arg0 length:(NSInteger)arg1 ;
-(void)_handleReadEvent;
-(void)_handleRemoveForSource:(id)arg0 ;
-(void)_noteInterfaceSrcRef:(NSUInteger)arg0 forInterface:(unsigned int)arg1 threshold:(NSUInteger)arg2 ;
-(void)_removeSourceInternal:(NSUInteger)arg0 ;
-(void)_restartPoll:(id)arg0 ;
-(void)_sendMessage:(struct nstat_msg_hdr *)arg0 length:(NSInteger)arg1 ;
-(void)_sendPoll;
-(void)_sendRemoveSource:(NSUInteger)arg0 ;
-(void)_sendUpdateRequestMessage:(NSUInteger)arg0 ;
-(void)_setInterfaceTraceFd:(int)arg0 ;
-(void)_setThreshold:(NSUInteger)arg0 onInterface:(unsigned int)arg1 ;
-(void)_startPoll:(id)arg0 ;
-(void)_startQueuedPoll;
-(void)_trace:(char *)arg0 ;
-(void)_traceMemoryBuf:(char *)arg0 length:(NSInteger)arg1 tag:(char *)arg2 ;
-(void)dealloc;
-(void)enumerateChangedFlowsUsingBlock:(id)arg0 ;
-(void)enumerateFlowsUsingBlock:(id)arg0 ;
-(void)enumerateSelectFlows:(id)arg0 deliveryBlock:(id)arg1 ;
-(void)ignoreFlow:(NSUInteger)arg0 ;
-(void)invalidate;


@end


#endif