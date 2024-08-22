// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEODATAREQUEST_H
#define GEODATAREQUEST_H

@class NSURL, NSDictionary, NSString, NSData;
@protocol GEORequestCounterTicket;

#import <Foundation/Foundation.h>

#import "GEOApplicationAuditToken.h"
#import "GEODataRequestThrottlerToken.h"

@interface GEODataRequest : NSObject {
    NSUInteger _options;
}


@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSDictionary *additionalHTTPHeaders; // ivar: _additionalHTTPHeaders
@property (readonly, nonatomic) BOOL allowTLSSessionTicketUse;
@property (readonly, copy, nonatomic) GEOApplicationAuditToken *auditToken; // ivar: _auditToken
@property (readonly, nonatomic) NSString *backgroundSessionIdentifier; // ivar: _backgroundSessionIdentifier
@property (readonly, copy, nonatomic) NSData *bodyData; // ivar: _bodyData
@property (copy, nonatomic) NSData *cachedData; // ivar: _cachedData
@property (readonly, nonatomic) ? kind; // ivar: _kind
@property (readonly, nonatomic) NSUInteger multipathAlternatePort; // ivar: _multipathAlternatePort
@property (readonly, nonatomic) NSUInteger multipathServiceType; // ivar: _multipathServiceType
@property (readonly, nonatomic) BOOL needsProxy;
@property (readonly, nonatomic) NSObject<GEORequestCounterTicket> *requestCounterTicket; // ivar: _requestCounterTicket
@property (readonly, nonatomic) BOOL requireInexpensiveNetwork;
@property (readonly, nonatomic) BOOL requirePluggedIn;
@property (readonly, nonatomic) BOOL requireUnconstrainedNetwork;
@property (readonly, nonatomic) GEODataRequestThrottlerToken *throttleToken; // ivar: _throttleToken
@property (readonly, nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval
@property (readonly, nonatomic) BOOL useHTTPPost;


-(id)description;
-(id)init;
-(id)initForAnalyticsUploadRequest:(id)arg0 toURL:(id)arg1 requiresProxy:(BOOL)arg2 backgroundIdentifier:(id)arg3 compressRequest:(BOOL)arg4 allowCellular:(BOOL)arg5 allowBattery:(BOOL)arg6 timeToLive:(CGFloat)arg7 requestCounterTicket:(id)arg8 throttleToken:(id)arg9 ;
-(id)initHttpOnlyRequestWithKind:(struct ? )arg0 protobufRequest:(id)arg1 URL:(id)arg2 additionalHTTPHeaders:(id)arg3 needsProxy:(BOOL)arg4 allowCellularUse:(BOOL)arg5 compressRequest:(BOOL)arg6 requestCounterTicket:(id)arg7 multipathServiceType:(NSUInteger)arg8 multipathAlternatePort:(NSUInteger)arg9 throttleToken:(id)arg10 ;
-(id)initWithKind:(struct ? )arg0 URL:(id)arg1 auditToken:(id)arg2 timeoutInterval:(CGFloat)arg3 additionalHTTPHeaders:(id)arg4 bodyData:(id)arg5 userAgent:(id)arg6 entityTag:(id)arg7 cachedData:(id)arg8 requestCounterTicket:(id)arg9 multipathServiceType:(NSUInteger)arg10 multipathAlternatePort:(NSUInteger)arg11 backgroundSessionIdentifier:(id)arg12 throttleToken:(id)arg13 options:(NSUInteger)arg14 ;
-(id)initWithKind:(struct ? )arg0 URL:(id)arg1 auditToken:(id)arg2 timeoutInterval:(CGFloat)arg3 additionalHTTPHeaders:(id)arg4 bodyData:(id)arg5 userAgent:(id)arg6 entityTag:(id)arg7 cachedData:(id)arg8 requestCounterTicket:(id)arg9 multipathServiceType:(NSUInteger)arg10 multipathAlternatePort:(NSUInteger)arg11 throttleToken:(id)arg12 options:(NSUInteger)arg13 ;
-(id)initWithKind:(struct ? )arg0 protobufRequest:(id)arg1 URL:(id)arg2 additionalHTTPHeaders:(id)arg3 needsProxy:(BOOL)arg4 auditToken:(id)arg5 timeoutInterval:(CGFloat)arg6 traits:(id)arg7 requestCounterTicket:(id)arg8 multipathServiceType:(NSUInteger)arg9 multipathAlternatePort:(NSUInteger)arg10 throttleToken:(id)arg11 ;
-(id)publicLogDescription;
-(id)updatedRequestWithNewBodyData:(id)arg0 ;
-(id)updatedRequestWithNewProtobufRequest:(id)arg0 ;


@end


#endif