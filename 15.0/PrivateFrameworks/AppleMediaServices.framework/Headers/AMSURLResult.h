// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSURLRESULT_H
#define AMSURLRESULT_H

@class NSData, NSString, NSURLResponse, NSDictionary, NSURLSessionTask, NSURLSessionTaskMetrics;

#import <Foundation/Foundation.h>


@interface AMSURLResult : NSObject

@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSString *logUUID; // ivar: _logUUID
@property (retain, nonatomic) id *object; // ivar: _object
@property (retain, nonatomic) NSURLResponse *response; // ivar: _response
@property (readonly, nonatomic) NSString *responseCorrelationId;
@property (readonly, nonatomic) NSDictionary *responseHeaders;
@property (readonly, nonatomic) NSInteger responseStatusCode;
@property (retain, nonatomic) NSURLSessionTask *task; // ivar: _task
@property (readonly, nonatomic) NSURLSessionTaskMetrics *taskMetrics; // ivar: _taskMetrics


-(id)initWithResult:(id)arg0 ;
-(id)initWithTask:(id)arg0 response:(id)arg1 data:(id)arg2 object:(id)arg3 ;
-(id)initWithTaskInfo:(id)arg0 object:(id)arg1 ;


@end


#endif