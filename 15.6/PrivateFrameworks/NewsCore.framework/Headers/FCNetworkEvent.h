// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCNETWORKEVENT_H
#define FCNETWORKEVENT_H

@class NSString, NSDictionary, NSURL, NSError;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCNetworkEvent : NSObject <NSCopying>



@property (copy, nonatomic) NSString *HTTPMethod; // ivar: _HTTPMethod
@property (copy, nonatomic) NSDictionary *HTTPResponseHeaders; // ivar: _HTTPResponseHeaders
@property (nonatomic) NSUInteger HTTPStatusCode; // ivar: _HTTPStatusCode
@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) CGFloat connectDuration;
@property (copy, nonatomic) NSString *containerName; // ivar: _containerName
@property (readonly, nonatomic) CGFloat dnsDuration;
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) CGFloat fetchStartTime;
@property (copy, nonatomic) NSString *operationID; // ivar: _operationID
@property (readonly, nonatomic) CGFloat requestDuration;
@property (nonatomic) NSUInteger requestSize; // ivar: _requestSize
@property (copy, nonatomic) NSString *requestUUID; // ivar: _requestUUID
@property (readonly, nonatomic) CGFloat responseDuration;
@property (readonly, nonatomic) CGFloat responseEndTime;
@property (copy, nonatomic) NSString *responseMIMEType; // ivar: _responseMIMEType
@property (nonatomic) NSUInteger responseSize; // ivar: _responseSize
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly, nonatomic) CGFloat totalDuration;
@property (nonatomic) int type; // ivar: _type
@property (copy, nonatomic) NSDictionary *w3cNavigationTiming; // ivar: _w3cNavigationTiming


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;


@end


#endif