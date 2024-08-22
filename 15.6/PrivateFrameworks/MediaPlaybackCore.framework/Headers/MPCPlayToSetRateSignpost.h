// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCPLAYTOSETRATESIGNPOST_H
#define MPCPLAYTOSETRATESIGNPOST_H



#import "MPCAnalyticsSignpost.h"

@interface MPCPlayToSetRateSignpost : MPCAnalyticsSignpost



+(void)beginWithIdentifier:(NSUInteger)arg0 ;
+(void)endWithIdentifier:(NSUInteger)arg0 error:(id)arg1 ;
+(void)endWithIdentifier:(NSUInteger)arg0 item:(id)arg1 ;


@end


#endif