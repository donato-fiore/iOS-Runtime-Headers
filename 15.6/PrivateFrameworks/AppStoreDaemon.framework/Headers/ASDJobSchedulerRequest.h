// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDJOBSCHEDULERREQUEST_H
#define ASDJOBSCHEDULERREQUEST_H



#import "ASDEphemeralRequest.h"

@interface ASDJobSchedulerRequest : ASDEphemeralRequest



+(NSInteger)requestType;
-(id)initWithOptions:(id)arg0 ;
-(void)findNextJobsWithCompletionBlock:(id)arg0 ;


@end


#endif