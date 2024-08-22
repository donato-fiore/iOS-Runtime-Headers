// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWSTATISTICSMANAGER_H
#define NWSTATISTICSMANAGER_H

@class NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue, NWStatisticsManagerDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface NWStatisticsManager : NSObject {
    BOOL _systemInformationSubscribed;
    unsigned int _filter;
    unsigned int _continuationCount;
    NSUInteger _providerFilters;
    char * _iftracebuf;
    unsigned int _id;
    NSUInteger _numUpdatesDispatched;
    NSUInteger _numUpdatesSkipped;
    NSUInteger _numUpdatesLazyDispatched;
    NSUInteger _numUpdatesLazySkipped;
    NSUInteger _numSourceAddsReceived;
    NSUInteger _numSourceAddsSkipped;
    NSUInteger _numSourcesInserted;
    NSUInteger _numSourcesRemoved;
    NSUInteger _numSourcesQueried;
}


@property (retain) NSMutableDictionary *_internalSources; // ivar: __internalSources
@property (readonly) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (retain) NSMutableDictionary *currentQueries; // ivar: _currentQueries
@property NSUInteger currentQueryAllReference; // ivar: _currentQueryAllReference
@property (weak, nonatomic) NSObject<NWStatisticsManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) unsigned int filter;
@property (nonatomic) int interfaceSourceFd; // ivar: _interfaceSourceFd
@property (nonatomic) int interfaceTraceFd; // ivar: _interfaceTraceFd
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (nonatomic) unsigned int mgrflags; // ivar: _mgrflags
@property NSUInteger querySequenceNumber; // ivar: _querySequenceNumber
@property (retain) NSMutableDictionary *queuedQueryAlls; // ivar: _queuedQueryAlls
@property char * readBuffer; // ivar: _readBuffer
@property (retain) NSObject<OS_dispatch_source> *readSource; // ivar: _readSource
@property (getter=isReading) BOOL reading; // ivar: _reading
@property int sockfd; // ivar: _sockfd
@property (readonly) NSSet *sources;
@property (retain) id *strongDelegate; // ivar: _strongDelegate


-(BOOL)addAllForProvider:(int)arg0 filter:(NSUInteger)arg1 events:(NSUInteger)arg2 pid:(int)arg3 uuid:(*unsigned char)arg4 ;
-(BOOL)addAllRoute;
-(BOOL)addAllRoute:(NSUInteger)arg0 ;
-(BOOL)addAllTCP:(NSUInteger)arg0 ;
-(BOOL)addAllTCP:(NSUInteger)arg0 events:(NSUInteger)arg1 pid:(int)arg2 uuid:(*unsigned char)arg3 ;
-(BOOL)addAllUDP:(NSUInteger)arg0 ;
-(BOOL)addAllUDP:(NSUInteger)arg0 events:(NSUInteger)arg1 pid:(int)arg2 uuid:(*unsigned char)arg3 ;
-(BOOL)addSource:(id)arg0 request:(struct nstat_msg_add_src *)arg1 length:(NSUInteger)arg2 ;
-(BOOL)handleCompletion:(NSUInteger)arg0 message:(struct nstat_msg_hdr *)arg1 length:(unsigned int)arg2 ;
-(BOOL)handleCompletionMessage:(struct nstat_msg_hdr *)arg0 length:(unsigned int)arg1 ;
-(BOOL)performQuery:(unsigned int)arg0 sourceRef:(NSUInteger)arg1 completion:(id)arg2 ;
-(BOOL)queryAll:(id)arg0 ;
-(BOOL)sendMessage:(struct nstat_msg_hdr *)arg0 length:(NSInteger)arg1 ;
-(NSUInteger)_nextReferenceForTarget:(NSUInteger)arg0 command:(unsigned int)arg1 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(unsigned int)commandFromReference:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)dispatchDidAddSource:(id)arg0 ;
-(void)dispatchDidReceiveCounts:(id)arg0 fromUpdate:(BOOL)arg1 ;
-(void)dispatchDidReceiveDescription:(id)arg0 ;
-(void)dispatchDidReceiveType:(unsigned int)arg0 source:(id)arg1 ;
-(void)handleMessage:(struct nstat_msg_hdr *)arg0 length:(NSInteger)arg1 ;
-(void)handleReadEvent;
-(void)handleSystemInformationCounts:(struct nstat_sysinfo_counts *)arg0 ;
-(void)invalidate;
-(void)performAllCompletions:(id)arg0 ;
-(void)queryAllCounts:(id)arg0 ;
-(void)queryAllDescriptions:(id)arg0 ;
-(void)querySource:(id)arg0 completion:(id)arg1 ;
-(void)removeSource:(id)arg0 ;
-(void)removeSourceInternal:(NSUInteger)arg0 isFromClient:(BOOL)arg1 ;
-(void)reportInternalCounts;
-(void)sendRemoveSourceInternal:(NSUInteger)arg0 ;
-(void)sendRequestMessage:(int)arg0 sourceRef:(NSUInteger)arg1 ;
-(void)setQueuePriority:(NSInteger)arg0 ;
-(void)startQueuedQuery;
-(void)subscribeToSystemInformation;
-(void)trace:(char *)arg0 ;
-(void)traceMemoryBuf:(char *)arg0 length:(NSInteger)arg1 tag:(char *)arg2 ;


@end


#endif