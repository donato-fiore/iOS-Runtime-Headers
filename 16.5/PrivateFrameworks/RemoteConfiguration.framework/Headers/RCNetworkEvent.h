// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCNETWORKEVENT_H
#define RCNETWORKEVENT_H

@class NSError, NSURLSessionTaskTransactionMetrics, NSString, NSURLRequest, NSHTTPURLResponse, NSDate;

#import <Foundation/Foundation.h>


@interface RCNetworkEvent : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSURLSessionTaskTransactionMetrics *metrics; // ivar: _metrics
@property (readonly, nonatomic) NSString *operationID; // ivar: _operationID
@property (readonly, nonatomic) NSURLRequest *request; // ivar: _request
@property (readonly, nonatomic) NSString *requestID; // ivar: _requestID
@property (readonly, nonatomic) NSHTTPURLResponse *response; // ivar: _response
@property (readonly, nonatomic) NSInteger resultType; // ivar: _resultType
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)initWithResultType:(NSInteger)arg0 request:(id)arg1 startDate:(id)arg2 operationID:(id)arg3 requestID:(id)arg4 response:(id)arg5 metrics:(id)arg6 error:(id)arg7 ;


@end


#endif