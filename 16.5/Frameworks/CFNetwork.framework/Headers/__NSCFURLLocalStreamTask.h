// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSCFURLLOCALSTREAMTASK_H
#define __NSCFURLLOCALSTREAMTASK_H

@class NSMutableArray, NSData, NSString, NSDictionary, NSUUID, NSError;
@protocol OS_dispatch_queue, OS_dispatch_source;


#import "NSURLSessionStreamTask.h"
#import "NSURLRequest.h"
#import "NSURLResponse.h"

@interface __NSCFURLLocalStreamTask : NSURLSessionStreamTask {
    *BaseSocketStreamClient _socketStreamClient;
    NSMutableArray *_extraWork;
    int _connectionState;
    NSObject<OS_dispatch_queue> *_workQueueForStreamTask;
    *__CFReadStream _readStream;
    *__CFWriteStream _writeStream;
    NSMutableArray *_pendingWork;
    BOOL _doingWorkOnThisQueue;
    NSData *_readBuffer;
    BOOL _readSignaled;
    BOOL _readEOF;
    ? _readError;
    NSData *_writeBuffer;
    BOOL _writeSignaled;
    BOOL _writeEOF;
    BOOL _deliveredConnectionEstablished;
    ? _writeError;
    NSInteger _writeBufferAlreadyWrittenForNextWrite;
    NSMutableArray *_finalizationQueue;
    NSMutableArray *_afterConnectQueue;
    NSObject<OS_dispatch_source> *_tickerTimeoutTimer;
    id *_disavow;
    CGFloat _timeWindowDelay;
    CGFloat _timeWindowDuration;
    CGFloat startTime;
    NSInteger _priorityValue;
    CGFloat _loadingPriorityValue;
    NSString *_boundInterfaceIdentifier;
    BOOL _disallowCellular;
    int _allowsExpensiveOverride;
    int _allowsConstrainedOverride;
    int _allowsCellularOverride;
    int _networkServiceType;
    NSDictionary *_legacySocketStreamProperties;
    BOOL _betterRouteDiscovered;
    BOOL _didIssueCancel;
    float priority;
}


@property (copy) NSData *_TCPConnectionMetadata; // ivar: __TCPConnectionMetadata
@property (readonly) BOOL _goneSecure; // ivar: _goneSecure
@property (copy) NSData *_initialDataPayload; // ivar: __initialDataPayload
@property CGFloat _timeoutIntervalForResource;
@property (readonly, copy) NSUUID *_uniqueIdentifier; // ivar: _uniqueIdentifier
@property NSInteger countOfBytesClientExpectsToReceive; // ivar: _countOfBytesClientExpectsToReceive
@property NSInteger countOfBytesClientExpectsToSend; // ivar: _countOfBytesClientExpectsToSend
@property NSInteger countOfBytesExpectedToReceive; // ivar: _countOfBytesExpectedToReceive
@property NSInteger countOfBytesExpectedToSend; // ivar: _countOfBytesExpectedToSend
@property NSInteger countOfBytesReceived; // ivar: _countOfBytesReceived
@property NSInteger countOfBytesSent; // ivar: _countOfBytesSent
@property (copy) NSURLRequest *currentRequest; // ivar: _currentRequest
@property (copy) NSError *error; // ivar: _error
@property (copy) NSURLRequest *originalRequest; // ivar: _originalRequest
@property (copy) NSURLResponse *response; // ivar: _response
@property NSInteger state; // ivar: _state
@property (copy) NSString *taskDescription; // ivar: _taskDescription
@property NSUInteger taskIdentifier; // ivar: _taskIdentifier


-(BOOL)_cacheOnly;
-(BOOL)_disallowCellular;
-(CGFloat)_timeWindowDelay;
-(CGFloat)_timeWindowDuration;
-(NSInteger)computeAdjustedPoolPriority;
-(float)priority;
-(id)_boundInterfaceIdentifier;
-(id)_effectiveConfiguration;
-(id)_initWithExistingTask:(id)arg0 disavow:(id)arg1 ;
-(id)_legacySocketStreamProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithHost:(id)arg0 port:(NSInteger)arg1 taskGroup:(id)arg2 disavow:(id)arg3 ;
-(id)initWithNetService:(id)arg0 taskGroup:(id)arg1 disavow:(id)arg2 ;
-(id)workQueue;
-(int)_allowsCellularOverride;
-(int)_allowsConstrainedOverride;
-(int)_allowsExpensiveOverride;
-(int)_networkServiceType;
-(struct __CFDictionary *)_copySocketStreamProperties;
-(void)_adoptEffectiveConfiguration:(id)arg0 ;
-(void)_onSessionQueue_cleanupAndBreakCycles;
-(void)_onSessionQueue_disavow;
-(void)_onqueue_resume;
-(void)_task_onqueue_didFinish;
-(void)_task_onqueue_didReceiveDispatchData:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancel;
-(void)captureStreams;
-(void)closeRead;
-(void)closeWrite;
-(void)copyStreamProperty:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)readDataOfMinLength:(NSUInteger)arg0 maxLength:(NSUInteger)arg1 timeout:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)resume;
-(void)setPriority:(float)arg0 ;
-(void)set_allowsCellularOverride:(int)arg0 ;
-(void)set_allowsConstrainedOverride:(int)arg0 ;
-(void)set_allowsExpensiveOverride:(int)arg0 ;
-(void)set_boundInterfaceIdentifier:(id)arg0 ;
-(void)set_disallowCellular:(BOOL)arg0 ;
-(void)set_legacySocketStreamProperties:(id)arg0 ;
-(void)set_networkServiceType:(int)arg0 ;
-(void)set_timeWindowDelay:(CGFloat)arg0 ;
-(void)set_timeWindowDuration:(CGFloat)arg0 ;
-(void)startSecureConnection;
-(void)stopSecureConnection;
-(void)suspend;
-(void)writeData:(id)arg0 timeout:(CGFloat)arg1 completionHandler:(id)arg2 ;


@end


#endif