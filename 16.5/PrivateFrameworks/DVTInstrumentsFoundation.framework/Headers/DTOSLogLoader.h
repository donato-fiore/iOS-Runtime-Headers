// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTOSLOGLOADER_H
#define DTOSLOGLOADER_H

@class XRMobileAgentQueueStop, OSLogEventStreamBase, OSLogEventStore, OSLogEventLiveStore, OSLogEventLiveStream, NSDate, NSArray, NSDictionary, XRMobileAgent<DTOSLogLoaderVisitor>, NSMutableData, XRIntKeyedDictionary, NSMutableDictionary, NSMutableArray, NSError, NSPredicate;
@protocol DTOSLogLoaderDelegate;


#import "DTOSLogLoaderFetchTicket.h"

@interface DTOSLogLoader : XRMobileAgentQueueStop {
    OSLogEventStreamBase *_deserializedEventStream;
    BOOL _deserializedEventStreamIsActivated;
    OSLogEventStore *_loggedEventStore;
    OSLogEventStreamBase *_loggedStream;
    OSLogEventLiveStore *_liveEventStore;
    OSLogEventLiveStream *_liveStream;
    NSDate *_startTime;
    NSDate *_endTime;
    NSArray *_dynamicTracingEnabledSubsystems;
    NSDictionary *_loggingSubsystemCategoryPairsToEnable;
    NSDictionary *_signpostSubsystemCategoryPairsToEnable;
    NSUInteger _slackInMachTimeUnits;
    XRMobileAgent<DTOSLogLoaderVisitor> *_agentWaitingForStop;
    DTOSLogLoaderFetchTicket *_lastFetchTicket;
    _opaque_pthread_cond_t _stateChanged;
    _opaque_pthread_mutex_t _stateLock;
    NSUInteger _machTimeAdjustment;
    mach_timebase_info _machTimebase;
    NSUInteger _machContinuousStart;
    NSUInteger _mode;
    unique_ptr<DTOSLogTableLoader, std::default_delete<DTOSLogTableLoader>> _tableLoader;
    DTStateActionEncoder _encoder;
    NSUInteger _lastMachTime;
    XRMobileAgent<DTOSLogLoaderVisitor> *_agentWaitingForEvents;
    NSMutableData *_workingBuffer;
    StackReference _deviceSessionRef;
    StackReference _defaultLevelRef;
    StackReference _infoLevelRef;
    StackReference _debugLevelRef;
    StackReference _errorLevelRef;
    StackReference _faultLevelRef;
    StackReference _beginRef;
    StackReference _emitRef;
    StackReference _endRef;
    StackReference _threadScopeRef;
    StackReference _processScopeRef;
    StackReference _systemScopeRef;
    XRIntKeyedDictionary *_pushedProcessesByPid;
    XRIntKeyedDictionary *_pushedThreadsByTid;
    NSMutableDictionary *_repeatedStrings;
    NSMutableDictionary *_repeatedUUIDs;
    NSMutableDictionary *_repeatedPlaceholders;
    NSMutableArray *_argReferenceConstants;
    int _rowsSent;
    unsigned int _lostEventAccumulator;
    BOOL _workingBufferFull;
    BOOL _workingBufferCanBeReplaced;
    BOOL _didHandleRecord;
    BOOL _ignoreNextRecord;
    BOOL _calledForHelp;
    BOOL _isLastBuffer;
    BOOL _running;
    NSUInteger _signpostConfig;
    NSUInteger _exclusions;
    NSUInteger _columnInclusions;
    BOOL _trackPIDToExecNameMapping;
    XRIntKeyedDictionary *_pidToExecNameMapping;
    vector<unsigned short, std::allocator<unsigned short>> _argTemporaryTypeStorage;
}


@property (weak, nonatomic) NSObject<DTOSLogLoaderDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSError *failureReason; // ivar: _failureReason
@property (retain, nonatomic) NSPredicate *filterPredicate; // ivar: _filterPredicate


+(id)heartbeatPredicate;
+(void)heartbeat;
-(BOOL)_holdReceivedAgent:(id)arg0 ticket:(id)arg1 ;
-(id)_setupLoggedStreamForNextChunk:(id)arg0 ;
-(id)_stackReferenceForRepeatedString:(id)arg0 ;
-(id)_stackReferenceForRepeatedUUID:(id)arg0 ;
-(id)init;
-(id)ticketToFetchData:(id)arg0 window:(CGFloat)arg1 ;
-(id)ticketToPrepare:(id)arg0 filterPredicate:(id)arg1 signposting:(NSUInteger)arg2 exclusions:(NSUInteger)arg3 columnInclusions:(NSUInteger)arg4 mode:(NSUInteger)arg5 machTimebase:(struct mach_timebase_info )arg6 importedFileURL:(id)arg7 importForcedStartDate:(id)arg8 importForcedEndDate:(id)arg9 machContinuousStart:(NSUInteger)arg10 trackPidToExecNameMapping:(BOOL)arg11 dynamicTracingEnabledSubsystems:(id)arg12 loggingSubsystemCategoryPairsToEnable:(id)arg13 signpostSubsystemCategoryPairsToEnable:(id)arg14 ;
-(id)ticketToStartStream:(id)arg0 ;
-(id)ticketToStopStream:(id)arg0 ;
-(void)_escortAgentToExit:(id)arg0 withTicket:(id)arg1 ;
-(void)_handleRecord:(id)arg0 ;
-(void)_performResetOnOutputStream;
-(void)_prepareAgentToExecute:(id)arg0 withTicket:(id)arg1 ;
-(void)_setupCommonStreamParameters:(id)arg0 ;
-(void)_setupLiveStream:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif