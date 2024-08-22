// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBATCHREQUEST_H
#define HMBATCHREQUEST_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "HMClientContext.h"
#import "HMReportContext.h"

@interface HMBatchRequest : NSObject

@property (retain, nonatomic) HMClientContext *clientContext; // ivar: _clientContext
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (retain, nonatomic) HMReportContext *reportContext; // ivar: _reportContext
@property (retain, nonatomic) NSArray *requests; // ivar: _requests


+(BOOL)validateRequestTypes:(id)arg0 requestClass:(Class)arg1 ;
+(id)batchRequestWithExecuteRequests:(id)arg0 ;
+(id)batchRequestWithReadRequests:(id)arg0 ;
+(id)batchRequestWithWriteRequests:(id)arg0 ;
-(id)initWithRequests:(id)arg0 requestClass:(Class)arg1 ;


@end


#endif