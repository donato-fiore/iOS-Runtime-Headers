// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSURLSESSIONMANAGER_H
#define SSURLSESSIONMANAGER_H

@class NSArray, NSString, NSMutableDictionary, NSMapTable;
@protocol NSCacheDelegate, NSURLSessionDataDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSCircularBuffer.h"
#import "SSMetricsController.h"

@interface SSURLSessionManager : NSObject <NSCacheDelegate, NSURLSessionDataDelegate>

 {
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned int _memoryPressureStatus;
    NSUInteger _memoryPressureCachedMaxSize;
}


@property (copy, nonatomic) NSArray *customURLProtocols; // ivar: _customURLProtocols
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // ivar: _eventQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SSCircularBuffer *httpArchiveBuffer; // ivar: _httpArchiveBuffer
@property (nonatomic) NSUInteger httpArchiveBufferSize;
@property (retain, nonatomic) SSMetricsController *metricsController; // ivar: _metricsController
@property (retain, nonatomic) NSMutableDictionary *recordResponseMap; // ivar: _recordResponseMap
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordResponseQueue; // ivar: _recordResponseQueue
@property (retain, nonatomic) NSMutableDictionary *requestData; // ivar: _requestData
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestDataQueue; // ivar: _requestDataQueue
@property (retain, nonatomic) NSMutableDictionary *responseData; // ivar: _responseData
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responseDataQueue; // ivar: _responseDataQueue
@property (retain, nonatomic) NSMutableDictionary *sendTimingDataMap; // ivar: _sendTimingDataMap
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sendTimingDataQueue; // ivar: _sendTimingDataQueue
@property (retain, nonatomic) NSMutableDictionary *sessions; // ivar: _sessions
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sessionsQueue; // ivar: _sessionsQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMapTable *taskDelegates; // ivar: _taskDelegates
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskDelegatesQueue; // ivar: _taskDelegatesQueue
@property (retain, nonatomic) NSMutableDictionary *taskMetrics; // ivar: _taskMetrics
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskMetricsQueue; // ivar: _taskMetricsQueue


+(BOOL)_fetchedFromCache:(id)arg0 ;
+(BOOL)_shouldCollectNetworkLogs;
+(BOOL)_shouldCreateLocalCache;
+(CGFloat)_localTimeIntervalToServerTimeInterval:(CGFloat)arg0 ;
+(CGFloat)_randomDouble;
+(CGFloat)_timingDataMetricToServerTimeInterval:(id)arg0 ;
+(NSUInteger)_messageSizeFromTask:(id)arg0 isRequest:(BOOL)arg1 delegate:(id)arg2 ;
+(id)_DNSServerIPAddresses;
+(id)_bagPerformanceValuesWithDelegate:(id)arg0 ;
+(id)_fetchNetworkQualityReports;
+(id)_legacyBagValueForKey:(id)arg0 ;
+(id)_metricsDictionaryWithDelegate:(id)arg0 ;
+(id)_resolvedIPAddressFromTask:(id)arg0 ;
+(id)_responseDateFromTask:(id)arg0 delegate:(id)arg1 ;
+(id)_tidStateForTask:(id)arg0 delegate:(id)arg1 ;
+(id)bagValueForKey:(id)arg0 delegate:(id)arg1 type:(NSUInteger)arg2 ;
+(id)eventFromTimingData:(id)arg0 delegate:(id)arg1 session:(id)arg2 task:(id)arg3 error:(id)arg4 ;
+(id)eventFromTimingData:(id)arg0 delegate:(id)arg1 task:(id)arg2 error:(id)arg3 ;
+(id)eventFromTimingData:(id)arg0 requestProperties:(id)arg1 task:(id)arg2 error:(id)arg3 ;
+(id)eventFromTimingData:(id)arg0 task:(id)arg1 ;
+(id)eventFromTimingData:(id)arg0 task:(id)arg1 error:(id)arg2 ;
+(id)sharedManager;
-(BOOL)_sendTimingDataForSessionTask:(id)arg0 ;
-(BOOL)_shouldDisableCellularForDelegate:(id)arg0 ;
-(BOOL)_shouldEnableAPSRWithTask:(id)arg0 ;
-(BOOL)_shouldEnableTLSSessionForDelegate:(id)arg0 ;
-(BOOL)_shouldRecordResponseBodyForDataTask:(id)arg0 ;
-(BOOL)_shouldRequireCelluarForDelegate:(id)arg0 ;
-(BOOL)_shouldSetCookiesForDelegate:(id)arg0 ;
-(id)_URLCacheForDelegate:(id)arg0 ;
-(id)_URLCacheIDForDelegate:(id)arg0 ;
-(id)_delegateForTask:(id)arg0 ;
-(id)_requestDataForSessionTask:(id)arg0 ;
-(id)_responseDataForSessionTask:(id)arg0 ;
-(id)_saveHTTPArchiveBufferToDiskDecompressed:(BOOL)arg0 ;
-(id)_sessionConfigurationWithDelegate:(id)arg0 collectTimingData:(BOOL)arg1 allowsTLSSessionTickets:(BOOL)arg2 ;
-(id)_sessionIDWithDelegate:(id)arg0 collectTimingData:(BOOL)arg1 allowsTLSSessionTickets:(BOOL)arg2 ;
-(id)_sessionWithDelegate:(id)arg0 collectTimingData:(*BOOL)arg1 ;
-(id)_taskMetricsForSessionTask:(id)arg0 ;
-(id)dataTaskWithRequest:(id)arg0 delegate:(id)arg1 ;
-(id)init;
-(int)_PIDFromAuditTokenData:(id)arg0 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)_appendResponseData:(id)arg0 forSessionTask:(id)arg1 ;
-(void)_insertEventIntoDatabase:(id)arg0 delegate:(id)arg1 ;
-(void)_listenForLowMemoryWarning;
-(void)_logAPSResultsWithTask:(id)arg0 ;
-(void)_logCacheHitForTask:(id)arg0 metrics:(id)arg1 ;
-(void)_removeDelegateForTask:(id)arg0 ;
-(void)_removeRecordResponseDataForSessionTask:(id)arg0 ;
-(void)_removeResponseDataForSessionTask:(id)arg0 ;
-(void)_setAPSTopicWithTask:(id)arg0 ;
-(void)_setDelegate:(id)arg0 forTask:(id)arg1 ;
-(void)_setSendTimingData:(id)arg0 forSessionTask:(id)arg1 ;
-(void)dealloc;
-(void)flushHTTPArchiveBuffer;


@end


#endif