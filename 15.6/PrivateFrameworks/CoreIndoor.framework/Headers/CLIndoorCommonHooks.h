// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLINDOORCOMMONHOOKS_H
#define CLINDOORCOMMONHOOKS_H


#import <Foundation/Foundation.h>


@interface CLIndoorCommonHooks : NSObject



+(id)filterLocationGroups:(id)arg0 isRegionalSupported:(BOOL)arg1 ;
+(id)nearestVenues:(struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> )arg0 availableVenues:(id)arg1 latestPosition:(id)arg2 availabilityZScoreConfidenceInterval:(CGFloat)arg3 settings:(struct NearestVenueSettings *)arg4 isAllowedMultipleVenues:(BOOL)arg5 ;


@end


#endif