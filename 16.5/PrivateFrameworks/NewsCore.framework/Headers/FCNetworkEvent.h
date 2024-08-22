// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCNETWORKEVENT_H
#define FCNETWORKEVENT_H

@class NSString, NSDictionary, NSURL, NSDateInterval, NSError;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCNetworkEvent : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *HTTPMethod; // ivar: _HTTPMethod
@property (readonly, copy, nonatomic) NSDictionary *HTTPResponseHeaders; // ivar: _HTTPResponseHeaders
@property (readonly, nonatomic) NSUInteger HTTPStatusCode; // ivar: _HTTPStatusCode
@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) CGFloat connectDuration; // ivar: _connectDuration
@property (readonly, copy, nonatomic) NSString *containerName; // ivar: _containerName
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) CGFloat dnsDuration; // ivar: _dnsDuration
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) NSString *operationID; // ivar: _operationID
@property (readonly, nonatomic) CGFloat requestDuration; // ivar: _requestDuration
@property (readonly, nonatomic) NSUInteger requestSize; // ivar: _requestSize
@property (readonly, copy, nonatomic) NSString *requestUUID; // ivar: _requestUUID
@property (readonly, nonatomic) CGFloat responseDuration; // ivar: _responseDuration
@property (readonly, copy, nonatomic) NSString *responseMIMEType; // ivar: _responseMIMEType
@property (readonly, nonatomic) NSUInteger responseSize; // ivar: _responseSize
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly, nonatomic) CGFloat totalDuration;
@property (readonly, nonatomic) int type; // ivar: _type


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithType:(int)arg0 URL:(id)arg1 operationID:(id)arg2 requestUUID:(id)arg3 responseMIMEType:(id)arg4 HTTPStatusCode:(NSUInteger)arg5 HTTPMethod:(id)arg6 HTTPResponseHeaders:(id)arg7 containerName:(id)arg8 error:(id)arg9 startTime:(CGFloat)arg10 dnsDuration:(CGFloat)arg11 connectDuration:(CGFloat)arg12 requestDuration:(CGFloat)arg13 responseDuration:(CGFloat)arg14 requestSize:(CGFloat)arg15 responseSize:(CGFloat)arg16 ;
-(id)initWithType:(int)arg0 URLRequest:(id)arg1 operationID:(id)arg2 requestUUID:(id)arg3 startTime:(CGFloat)arg4 HTTPResponse:(id)arg5 metrics:(id)arg6 containerName:(id)arg7 error:(id)arg8 ;
-(id)initWithType:(int)arg0 ckRequestInfo:(id)arg1 operationID:(id)arg2 startTime:(CGFloat)arg3 containerName:(id)arg4 error:(id)arg5 ;
-(id)initWithType:(int)arg0 rcNetworkEvent:(id)arg1 ;


@end


#endif