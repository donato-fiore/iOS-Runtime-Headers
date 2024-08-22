// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCNETWORKOPERATION_H
#define FCNETWORKOPERATION_H



#import "FCOperation.h"

@interface FCNetworkOperation : FCOperation

@property (readonly, nonatomic) CGFloat preferredTimeoutIntervalForRequest;


-(BOOL)canRetryWithError:(id)arg0 retryAfter:(*id)arg1 ;
-(BOOL)shouldStartThrottlingWithError:(id)arg0 retryAfter:(*CGFloat)arg1 ;
-(NSUInteger)maxRetries;


@end


#endif