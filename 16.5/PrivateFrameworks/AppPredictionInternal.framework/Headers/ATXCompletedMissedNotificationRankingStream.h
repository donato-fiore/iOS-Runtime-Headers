// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCOMPLETEDMISSEDNOTIFICATIONRANKINGSTREAM_H
#define ATXCOMPLETEDMISSEDNOTIFICATIONRANKINGSTREAM_H

@class ATXMissedNotificationRankingBiomeStream;

#import <Foundation/Foundation.h>


@interface ATXCompletedMissedNotificationRankingStream : NSObject {
    ATXMissedNotificationRankingBiomeStream *_rawMNREventStream;
}




-(id)init;
-(id)initFromMissedNotificationRankingEventBiomeStream:(id)arg0 ;
-(id)publisherFromStartTime:(CGFloat)arg0 ;


@end


#endif