// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __CFN_TRANSACTIONMETRICS_H
#define __CFN_TRANSACTIONMETRICS_H

@class NSUUID, NSData, NSDictionary;
@protocol NSSecureCoding, OS_nw_data_transfer_report;

#import <Foundation/Foundation.h>

#import "__CFN_TaskMetrics.h"
#import "NSURLRequest.h"
#import "NSURLResponse.h"
#import "__CFN_ConnectionMetrics.h"

@interface __CFN_TransactionMetrics : NSObject <NSSecureCoding>

 {
    BOOL _scheduledOriginLoad;
    BOOL _firstOnConnection;
    BOOL _pushed;
    BOOL _APSRelayAttempted;
    BOOL _APSRelaySucceeded;
    int _pidForHAR;
    __CFN_TaskMetrics *_taskMetrics;
    NSInteger _lastResponseHeaderSize;
    NSInteger _lastResponseBodySize;
    NSInteger _lastResponseBodyTransferSize;
    NSUUID *_UUID;
    NSURLRequest *_request;
    NSURLRequest *_transferredRequest;
    NSURLResponse *_cachedResponse;
    NSURLResponse *_lastResponse;
    __CFN_ConnectionMetrics *_connectionMetrics;
    NSInteger _requestHeaderSize;
    NSInteger _requestBodySize;
    NSInteger _requestBodyTransferSize;
    NSInteger _responseHeaderSize;
    NSInteger _responseBodySize;
    NSInteger _responseBodyTransferSize;
    CGFloat _beginTime;
    CGFloat _endTime;
    CGFloat _cacheLookupBeginTime;
    CGFloat _cacheLookupEndTime;
    CGFloat _requestBeginTime;
    CGFloat _requestEndTime;
    CGFloat _responseBeginTime;
    CGFloat _responseEndTime;
    NSUInteger _endReason;
    NSInteger _schedulingTier;
    NSInteger _options;
    NSData *_cachedResponseBody;
    NSDictionary *_tcpInfoBegin;
    NSDictionary *_tcpInfoEnd;
    NSDictionary *_subflowCountsBegin;
    NSDictionary *_subflowCountsEnd;
    NSObject<OS_nw_data_transfer_report> *_dataTransferReport;
}


@property (readonly) __CFN_ConnectionMetrics *_daemon_connectionMetrics;
@property (readonly, nonatomic) NSInteger _daemon_requestBodyTransferSize;
@property (readonly, nonatomic) NSInteger _daemon_requestHeaderSize;
@property (readonly, nonatomic) NSInteger _daemon_responseBodyTransferSize;
@property (readonly, nonatomic) NSInteger _daemon_responseHeaderSize;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif