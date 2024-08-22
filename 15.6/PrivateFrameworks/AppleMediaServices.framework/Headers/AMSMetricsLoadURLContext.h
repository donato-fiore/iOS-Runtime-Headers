// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSMETRICSLOADURLCONTEXT_H
#define AMSMETRICSLOADURLCONTEXT_H

@class NSDictionary, NSError, NSData, NSURLSession, NSURLSessionTask, NSURLSessionTaskMetrics;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>

#import "AMSProcessInfo.h"
#import "AMSURLRequestProperties.h"

@interface AMSMetricsLoadURLContext : NSObject

@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) NSDictionary *decodedResponseBody; // ivar: _decodedResponseBody
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) AMSProcessInfo *processInfo; // ivar: _processInfo
@property (retain, nonatomic) AMSURLRequestProperties *properties; // ivar: _properties
@property (retain, nonatomic) NSData *responseBody; // ivar: _responseBody
@property (retain, nonatomic) NSURLSession *session; // ivar: _session
@property (retain, nonatomic) NSURLSessionTask *task; // ivar: _task
@property (retain, nonatomic) NSURLSessionTaskMetrics *taskMetrics; // ivar: _taskMetrics


-(id)initWithTask:(id)arg0 metrics:(id)arg1 ;
-(id)initWithTaskInfo:(id)arg0 serverPayload:(id)arg1 ;


@end


#endif