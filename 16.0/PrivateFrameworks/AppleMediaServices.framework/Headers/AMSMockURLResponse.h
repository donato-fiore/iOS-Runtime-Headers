// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSMOCKURLRESPONSE_H
#define AMSMOCKURLRESPONSE_H

@class NSData, NSError, NSDictionary, NSURLRequest, NSMutableArray, NSURLSessionTask;

#import <Foundation/Foundation.h>


@interface AMSMockURLResponse : NSObject

@property (retain, nonatomic) NSData *body; // ivar: _body
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSDictionary *headers; // ivar: _headers
@property (readonly, nonatomic) NSURLRequest *originalRequest; // ivar: _originalRequest
@property (nonatomic) BOOL performActualRequest; // ivar: _performActualRequest
@property (retain, nonatomic) NSMutableArray *responseHandlerBlocks; // ivar: _responseHandlerBlocks
@property (retain, nonatomic) NSURLSessionTask *runningTask; // ivar: _runningTask
@property (nonatomic) NSUInteger statusCode; // ivar: _statusCode


+(id)responseFromActualResponse;
+(id)responseWithError:(id)arg0 ;
+(id)responseWithHARFile:(id)arg0 ;
+(id)responseWithStatus:(NSUInteger)arg0 headers:(id)arg1 body:(id)arg2 ;
-(id)init;
-(struct ? )handleReceivedRequest:(id)arg0 ;
-(void)addResponseHandler:(id)arg0 ;
-(void)stopRunningTasks;


@end


#endif