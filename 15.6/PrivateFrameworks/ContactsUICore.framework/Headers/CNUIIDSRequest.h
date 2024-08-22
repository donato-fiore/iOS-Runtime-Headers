// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUIIDSREQUEST_H
#define CNUIIDSREQUEST_H


#import <Foundation/Foundation.h>


@interface CNUIIDSRequest : NSObject



+(BOOL)isDestinationAvailable:(id)arg0 givenStatusesByDestination:(id)arg1 ;
+(BOOL)isStatusOfAnyDestinationUnknown:(id)arg0 ;
+(BOOL)shouldRetryRefreshingIDSStatusOfDesinationsGivenResult:(id)arg0 ;
+(id)IDSResponseQueue;
+(id)IDSServiceForService:(NSInteger)arg0 ;
+(id)afterDelayRetryRefreshingStatusOfDestinations:(id)arg0 forService:(id)arg1 queryControllerWrapper:(id)arg2 scheduler:(id)arg3 ;
+(id)errorRefreshingHandles:(id)arg0 forService:(id)arg1 ;
+(id)refreshStatusOfDestinations:(id)arg0 forService:(id)arg1 queryControllerWrapper:(id)arg2 ;
+(id)refreshStatusOfDestinations:(id)arg0 forService:(id)arg1 queryControllerWrapper:(id)arg2 delay:(CGFloat)arg3 scheduler:(id)arg4 ;
+(id)resultsForIDSControllerResult:(id)arg0 handlesByDestination:(id)arg1 ;
+(id)validHandlesFromHandles:(id)arg0 ;
+(id)validateHandles:(id)arg0 forService:(NSInteger)arg1 scheduler:(id)arg2 queryControllerWrapper:(id)arg3 ;


@end


#endif