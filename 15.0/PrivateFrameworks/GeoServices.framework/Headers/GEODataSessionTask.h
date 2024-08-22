// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEODATASESSIONTASK_H
#define GEODATASESSIONTASK_H

@class NSString, NSURL, NSError, NSData;
@protocol GEODataSessionTaskDelegate, GEODataSessionTask, OS_os_activity, OS_dispatch_queue, NSObject, GEORequestCounterTicket;

#import <Foundation/Foundation.h>

#import "GEOClientMetrics.h"
#import "GEODataSession.h"
#import "GEODataURLSessionTask.h"

@interface GEODataSessionTask : NSObject <GEODataSessionTaskDelegate, GEODataSessionTask>

 {
    CGFloat _startTime;
    CGFloat _endTime;
    BOOL _didStart;
    BOOL _willSendRequestDelegateCalled;
}


@property (readonly, nonatomic) NSObject<OS_os_activity> *activity; // ivar: _activity
@property (readonly, nonatomic) GEOClientMetrics *clientMetrics;
@property (retain, nonatomic) NSObject<GEODataSessionTask> *completedSubtask; // ivar: _completedSubtask
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GEODataSessionTaskDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSURL *downloadedFileURL;
@property (readonly, nonatomic) CGFloat elapsedTime;
@property (readonly, nonatomic) NSString *entityTag;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL failedDueToCancel;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger incomingPayloadSize;
@property (readonly, nonatomic) NSUInteger incomingPayloadSize;
@property (readonly, nonatomic) CGFloat loadTime;
@property (readonly, nonatomic) BOOL mptcpNegotiated;
@property (readonly, nonatomic) NSURL *originalRequestURL;
@property (readonly, nonatomic) NSUInteger outgoingPayloadSize;
@property (readonly, nonatomic) NSObject<NSObject> *parsedResponse;
@property float priority;
@property (readonly, nonatomic) BOOL protocolBufferHasPreamble;
@property (readonly, nonatomic) BOOL protocolBufferHasPreamble;
@property (readonly, nonatomic) NSData *receivedData;
@property (readonly, nonatomic) NSData *receivedData;
@property (readonly, nonatomic) NSUInteger receivedDataLength;
@property (readonly, nonatomic) NSUInteger receivedDataLength;
@property (readonly, nonatomic) BOOL receivedRNFNotification;
@property (readonly, nonatomic) NSString *remoteAddressAndPort;
@property (readonly, nonatomic) NSObject<GEORequestCounterTicket> *requestCounterTicket;
@property (readonly, nonatomic) ? requestKind; // ivar: _requestKind
@property (readonly, nonatomic) NSUInteger requestedMultipathServiceType;
@property (readonly, nonatomic) NSInteger responseSource;
@property (weak, nonatomic) GEODataSession *session; // ivar: _session
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionIsolation; // ivar: _sessionIsolation
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) GEODataURLSessionTask *urlTask; // ivar: _urlTask


-(BOOL)didValidateEntityTagForData:(*id)arg0 entityTag:(*id)arg1 ;
-(BOOL)getHeaderValue:(*id)arg0 forField:(id)arg1 ;
-(BOOL)validateTileResponse:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)validateTransportWithError:(*id)arg0 ;
-(CGFloat)loadTimeIncludingTask:(id)arg0 ;
-(id)initWithSession:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 requestKind:(struct ? )arg3 requestCounterTicket:(id)arg4 ;
-(void)_didCompleteSubtask:(id)arg0 ;
-(void)cancel;
-(void)dataSession:(id)arg0 didCompleteTask:(id)arg1 ;
-(void)dataSession:(id)arg0 shouldConvertDataTask:(id)arg1 toDownloadTaskForEstimatedResponseSize:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)dataSession:(id)arg0 willSendRequest:(id)arg1 forTask:(id)arg2 completionHandler:(id)arg3 ;
-(void)start;


@end


#endif