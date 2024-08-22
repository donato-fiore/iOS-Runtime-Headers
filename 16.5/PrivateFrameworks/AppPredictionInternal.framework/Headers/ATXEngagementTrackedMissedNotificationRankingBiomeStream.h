// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXENGAGEMENTTRACKEDMISSEDNOTIFICATIONRANKINGBIOMESTREAM_H
#define ATXENGAGEMENTTRACKEDMISSEDNOTIFICATIONRANKINGBIOMESTREAM_H

@protocol ATXNotificationResolutionSourceProtocol;

#import <Foundation/Foundation.h>

#import "ATXCompletedMissedNotificationRankingStream.h"

@interface ATXEngagementTrackedMissedNotificationRankingBiomeStream : NSObject {
    ATXCompletedMissedNotificationRankingStream *_completedRankingStream;
    id<ATXNotificationResolutionSourceProtocol> *_resolutionSource;
}




-(id)init;
-(id)initFromCompletedMNRBiomeStream:(id)arg0 ;
-(id)initFromCompletedMNRBiomeStream:(id)arg0 resolutionSource:(id)arg1 ;
-(id)publisherFromStartTime:(CGFloat)arg0 ;


@end


#endif