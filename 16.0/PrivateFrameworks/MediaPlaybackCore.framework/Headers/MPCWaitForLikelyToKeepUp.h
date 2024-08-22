// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCWAITFORLIKELYTOKEEPUP_H
#define MPCWAITFORLIKELYTOKEEPUP_H



#import "MPCAnalyticsSignpost.h"

@interface MPCWaitForLikelyToKeepUp : MPCAnalyticsSignpost



+(void)beginWithIdentifier:(NSUInteger)arg0 ;
+(void)endWithIdentifier:(NSUInteger)arg0 error:(id)arg1 ;
+(void)endWithIdentifier:(NSUInteger)arg0 item:(id)arg1 machContinuousTime:(NSUInteger)arg2 ;


@end


#endif