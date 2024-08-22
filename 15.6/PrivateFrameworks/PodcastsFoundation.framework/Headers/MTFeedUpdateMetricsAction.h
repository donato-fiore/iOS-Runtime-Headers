// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTFEEDUPDATEMETRICSACTION_H
#define MTFEEDUPDATEMETRICSACTION_H


#import <Foundation/Foundation.h>


@interface MTFeedUpdateMetricsAction : NSObject



+(id)error;
+(id)fetchFeedsExpectedToUpdate;
+(id)finishedWithoutURL;
+(id)notificationReceived;
+(id)notificationScheduled;
+(id)notificationScheduledViaCarousel;
+(id)notificationSetRetryFlag;
+(id)notificationTapped;
+(id)parser;
+(id)podcastDataSource;
+(id)processCarouselTask;
-(id)init;


@end


#endif