// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMISSEDNOTIFICATIONRANKINGFEEDBACKPROCESSINGPIPELINE_H
#define ATXMISSEDNOTIFICATIONRANKINGFEEDBACKPROCESSINGPIPELINE_H

@class NSString;
@protocol BMBookmark;

#import <Foundation/Foundation.h>

#import "ATXEngagementTrackedMissedNotificationRankingBiomeStream.h"

@interface ATXMissedNotificationRankingFeedbackProcessingPipeline : NSObject {
    id<BMBookmark> *_bookmark;
    NSString *_path;
    ATXEngagementTrackedMissedNotificationRankingBiomeStream *_trackedMNRStream;
}




-(BOOL)_fileExistsAtPath:(id)arg0 ;
-(id)init;
-(id)initWithBookmark:(id)arg0 path:(id)arg1 trackedMNRStream:(id)arg2 ;
-(void)_readBookmarkFromPath;
-(void)_writeBookmarkToPath;
-(void)logMetrics;
-(void)logMetricsForRanking:(id)arg0 ;
-(void)logMetricsWithXPCActivity:(id)arg0 ;


@end


#endif