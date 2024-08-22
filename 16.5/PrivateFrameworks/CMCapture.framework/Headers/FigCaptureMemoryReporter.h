// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTUREMEMORYREPORTER_H
#define FIGCAPTUREMEMORYREPORTER_H

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

#import <Foundation/Foundation.h>

#import "BWMemoryPool.h"

@interface FigCaptureMemoryReporter : NSObject {
    NSObject<OS_dispatch_queue> *_memoryReporterDispatchQueue;
    NSObject<OS_dispatch_source> *_memoryReporterTimer;
    NSObject<OS_dispatch_source> *_memgraphCoolDownTimer;
    os_unfair_lock_s _lock;
    os_unfair_lock_s _memgraphLock;
    BOOL _stateChangedSinceLastReport;
    int _numActiveClients;
    BOOL _activeClientsIncludeCamera;
    BOOL _activeClientsIncludeCameraMessagesApp;
    unsigned int _hostPort;
    NSUInteger _pageSize;
    int _my_pid;
    BOOL _alwaysGenerateMemGraph;
    BOOL _alwaysListTransactions;
    BOOL _alwaysGenerateLog;
    unsigned int _memGraphFootprintLowerKb;
    unsigned int _listTransactionsFootprintLowerKb;
    unsigned int _reportFootprintUpperBandkB;
    unsigned int _reportFootprintLowerBandkB;
    unsigned int _reportWiredUpperBandkB;
    unsigned int _reportWiredLowerBandkB;
    BOOL _anyLoggingEnabled;
    NSUInteger _highFrequencyMilliseconds;
    NSUInteger _lowFrequencyMilliSeconds;
    os_unfair_lock_s _peakFootprintLock;
    NSUInteger _peakFootprint;
    NSUInteger _sessionStartFootprint;
    NSObject<OS_os_log> *_log;
    BWMemoryPool *_memoryPool;
}


@property (readonly) NSUInteger currentFootprint; // ivar: _currentFootprint


+(id)sharedInstance;
-(NSUInteger)footprintDeltaSinceActiveClientStart;
-(id)init;
-(void)dealloc;
-(void)decrementActiveClientCount:(BOOL)arg0 clientIsCameraMessagesApp:(BOOL)arg1 ;
-(void)incrementActiveClientCount:(BOOL)arg0 clientIsCameraMessagesApp:(BOOL)arg1 withMemoryPool:(id)arg2 ;
-(void)resetPeakFootprint;


@end


#endif