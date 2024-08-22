// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLBATCHREQUEST_H
#define SLBATCHREQUEST_H

@class NSMutableArray;


#import "SLRequest.h"

@interface SLBatchRequest : SLRequest {
    NSMutableArray *_requests;
}




-(id)initWithServiceType:(id)arg0 URL:(id)arg1 parameters:(id)arg2 requestMethod:(NSInteger)arg3 ;
-(id)preparedURLRequest;
-(void)addRequest:(id)arg0 ;


@end


#endif