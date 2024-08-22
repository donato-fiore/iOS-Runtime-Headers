// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NETWORKANALYTICSQUEUESTATISTICSSLOTENTRY_H
#define NETWORKANALYTICSQUEUESTATISTICSSLOTENTRY_H


#import <Foundation/Foundation.h>


@interface NetworkAnalyticsQueueStatisticsSlotEntry : NSObject

@property (nonatomic) NSUInteger averageQueueDelay; // ivar: _averageQueueDelay
@property (nonatomic) NSUInteger maximumQueueDelay; // ivar: _maximumQueueDelay
@property (nonatomic) NSUInteger minimumQueueDelay; // ivar: _minimumQueueDelay
@property (nonatomic) unsigned char slot; // ivar: _slot


-(id)description;


@end


#endif