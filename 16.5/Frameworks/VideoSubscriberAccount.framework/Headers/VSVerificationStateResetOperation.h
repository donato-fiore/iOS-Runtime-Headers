// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSVERIFICATIONSTATERESETOPERATION_H
#define VSVERIFICATIONSTATERESETOPERATION_H

@class NSOperationQueue, NSURLSessionTask;


#import "VSAsyncOperation.h"
#import "VSAuditToken.h"
#import "VSOptional.h"

@interface VSVerificationStateResetOperation : VSAsyncOperation

@property (copy, nonatomic) VSAuditToken *auditToken; // ivar: _auditToken
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) NSURLSessionTask *resetStateTask; // ivar: _resetStateTask
@property (retain, nonatomic) VSOptional *result; // ivar: _result


-(id)init;
-(void)_resetVerificationStateWithURL:(id)arg0 ;
-(void)cancel;
-(void)executionDidBegin;


@end


#endif