// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICURLPERFORMANCEMETRICS_H
#define ICURLPERFORMANCEMETRICS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ICURLPerformanceMetrics : NSObject

@property (readonly, nonatomic) NSString *appleTimingApp; // ivar: _appleTimingApp
@property (readonly, nonatomic) BOOL cachedResponse; // ivar: _cachedResponse
@property (readonly, nonatomic) CGFloat connectionEndTime; // ivar: _connectionEndTime
@property (readonly, nonatomic) BOOL connectionReused; // ivar: _connectionReused
@property (readonly, nonatomic) CGFloat connectionStartTime; // ivar: _connectionStartTime
@property (readonly, nonatomic) NSString *connectionType; // ivar: _connectionType
@property (readonly, nonatomic) CGFloat domainLookupEndTime; // ivar: _domainLookupEndTime
@property (readonly, nonatomic) CGFloat domainLookupStartTime; // ivar: _domainLookupStartTime
@property (readonly, nonatomic) NSString *edgeNodeCacheStatus; // ivar: _edgeNodeCacheStatus
@property (readonly, nonatomic) NSString *environmentDataCenter; // ivar: _environmentDataCenter
@property (readonly, nonatomic) CGFloat fetchStartTime; // ivar: _fetchStartTime
@property (readonly, nonatomic) NSUInteger redirectCount; // ivar: _redirectCount
@property (readonly, nonatomic) NSUInteger requestMessageSize; // ivar: _requestMessageSize
@property (readonly, nonatomic) CGFloat requestStartTime; // ivar: _requestStartTime
@property (readonly, nonatomic) NSString *requestUrl; // ivar: _requestUrl
@property (readonly, nonatomic) NSString *resolvedIPAddress; // ivar: _resolvedIPAddress
@property (readonly, nonatomic) NSString *responseDate; // ivar: _responseDate
@property (readonly, nonatomic) CGFloat responseEndTime; // ivar: _responseEndTime
@property (readonly, nonatomic) NSUInteger responseMessageSize; // ivar: _responseMessageSize
@property (readonly, nonatomic) CGFloat responseStartTime; // ivar: _responseStartTime
@property (readonly, nonatomic) CGFloat secureConnectionStartTime; // ivar: _secureConnectionStartTime
@property (readonly, nonatomic) NSUInteger statusCode; // ivar: _statusCode


+(CGFloat)networkingTimeFromMetrics:(id)arg0 ;
-(id)initWithTransactionMetrics:(id)arg0 request:(id)arg1 ;


@end


#endif