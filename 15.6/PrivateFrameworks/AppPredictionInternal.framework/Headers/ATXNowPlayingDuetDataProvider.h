// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXNOWPLAYINGDUETDATAPROVIDER_H
#define ATXNOWPLAYINGDUETDATAPROVIDER_H



#import "ATXDuetDataProvider.h"

@interface ATXNowPlayingDuetDataProvider : ATXDuetDataProvider



+(Class)supportedDuetEventClass;
+(NSInteger)supportedCoreDuetStream;
-(id)convertNowPlayingEventsToAppLaunchEvents:(id)arg0 ;
-(id)mostRecentPlayingNowPlayingEventWithMaxAgeInSeconds:(CGFloat)arg0 ;
-(id)playbackEventsAfterSecondsOfInactivity:(CGFloat)arg0 betweenStartDate:(id)arg1 endDate:(id)arg2 ;


@end


#endif