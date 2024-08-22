// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEODATAURLSESSIONTASK_H
#define GEODATAURLSESSIONTASK_H

@class NSError, NSMutableData, NSURLSessionTaskMetrics, NSDate, NSURL, NSURLSessionTask, NSData, NSString, NSURLRequest, NSHTTPURLResponse;
@protocol GEODataSessionTask, GEODataSessionUpdatableTask, OS_dispatch_queue, NSObject, OS_voucher, OS_os_activity, GEODataSessionTaskDelegate, GEORequestCounterTicket;

#import <Foundation/Foundation.h>

#import "GEOClientMetrics.h"
#import "GEODataRequest.h"

@interface GEODataURLSessionTask : NSObject <GEODataSessionTask, GEODataSessionUpdatableTask>

 {
    NSObject<OS_dispatch_queue> *_sessionIsolation;
    NSError *_nonBackingTaskError;
    NSMutableData *_receivedData;
    NSURLSessionTaskMetrics *_urlTaskMetrics;
    CGFloat _endTime;
    float _priority;
    BOOL _backingTaskNeedsResume;
    unsigned int _qos;
    id<NSObject> *_parsedResponse;
    NSDate *_originalStartDate;
    NSObject<OS_voucher> *_voucher;
    NSURL *_downloadedFileURL;
    NSUInteger _cachedDownloadFileSize;
}


@property (readonly, nonatomic) NSInteger HTTPStatusCode;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity; // ivar: _activity
@property (readonly, nonatomic) NSURLSessionTask *backingTask; // ivar: _backingTask
@property (copy, nonatomic) NSData *cachedData; // ivar: _cachedData
@property (readonly, nonatomic) GEOClientMetrics *clientMetrics;
@property (readonly, nonatomic) NSUInteger contentLength;
@property (readonly, nonatomic) NSString *contentLengthString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<GEODataSessionTaskDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSURL *downloadedFileURL;
@property (readonly, nonatomic) CGFloat elapsedTime;
@property (readonly, nonatomic) NSString *entityTag;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL failedDueToCancel;
@property (readonly, nonatomic) BOOL failedDueToCancel;
@property (readonly, nonatomic) BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger incomingPayloadSize;
@property (readonly, nonatomic) CGFloat loadTime;
@property (readonly, nonatomic) BOOL mptcpNegotiated; // ivar: _mptcpNegotiated
@property (readonly, nonatomic) NSURL *originalRequestURL;
@property (readonly, nonatomic) NSURLRequest *originalURLRequest;
@property (readonly, nonatomic) NSUInteger outgoingPayloadSize;
@property (readonly, nonatomic) NSObject<NSObject> *parsedResponse;
@property float priority;
@property (readonly, nonatomic) BOOL protocolBufferHasPreamble;
@property (readonly, nonatomic) NSData *receivedData;
@property (readonly, nonatomic) NSUInteger receivedDataLength;
@property (nonatomic) BOOL receivedRNFNotification; // ivar: _receivedRNFNotification
@property (readonly, nonatomic) NSString *remoteAddressAndPort;
@property (readonly, nonatomic) GEODataRequest *request; // ivar: _request
@property (readonly, nonatomic) NSObject<GEORequestCounterTicket> *requestCounterTicket;
@property (readonly, nonatomic) ? requestKind; // ivar: _requestKind
@property (readonly, nonatomic) NSUInteger requestedMultipathServiceType;
@property (readonly, nonatomic) NSHTTPURLResponse *response;
@property (nonatomic) unsigned int sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURLSessionTaskMetrics *urlTaskMetrics;


-(BOOL)didValidateEntityTagForData:(*id)arg0 entityTag:(*id)arg1 ;
-(BOOL)validateContentLengthWithError:(*id)arg0 ;
-(BOOL)validateNonEmptyResponseWithError:(*id)arg0 ;
-(BOOL)validateTileResponse:(BOOL)arg0 error:(*id)arg1 ;
-(CGFloat)loadTimeIncludingTask:(id)arg0 ;
-(id)_createBackingTaskWithRequest:(id)arg0 session:(id)arg1 ;
-(id)createURLRequest;
-(id)createURLSessionTaskWithSession:(id)arg0 request:(id)arg1 ;
-(id)init;
-(id)initWithSession:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2 requestKind:(struct ? )arg3 priority:(float)arg4 ;
-(void)_prepareForRestart;
-(void)_start;
-(void)backingTask:(id)arg0 didBecomeDownloadTask:(id)arg1 ;
-(void)cancel;
-(void)dataSession:(id)arg0 didReceiveResponse:(id)arg1 completionHandler:(id)arg2 ;
-(void)dataSession:(id)arg0 taskDidCompleteWithError:(id)arg1 ;
-(void)dataSession:(id)arg0 willSendRequestForEstablishedConnection:(id)arg1 completionHandler:(id)arg2 ;
-(void)delegateAsync:(id)arg0 ;
-(void)didCollectMetrics:(id)arg0 ;
-(void)didFinishDownloadingToURL:(id)arg0 ;
-(void)didReceiveData:(id)arg0 ;
-(void)notifyDelegateWithSession:(id)arg0 ;
-(void)start;
-(void)updateRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif