// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSAMSREQUESTOPERATION_H
#define VSAMSREQUESTOPERATION_H

@class NSOperationQueue;


#import "VSAsyncOperation.h"
#import "VSAMSRequest.h"
#import "VSOptional.h"

@interface VSAMSRequestOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (copy, nonatomic) VSAMSRequest *request; // ivar: _request
@property (retain, nonatomic) VSOptional *result; // ivar: _result


-(id)init;
-(id)initWithRequest:(id)arg0 ;
-(void)cancel;
-(void)executionDidBegin;
-(void)urlForRequestType:(NSUInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif