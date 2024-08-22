// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXDIGESTFEEDBACKPROCESSINGPIPELINE_H
#define ATXDIGESTFEEDBACKPROCESSINGPIPELINE_H

@class NSString;
@protocol BMBookmark;

#import <Foundation/Foundation.h>

#import "ATXEngagementTrackedDigestBiomeStream.h"
#import "ATXNotificationDigestFeedbackLogger.h"

@interface ATXDigestFeedbackProcessingPipeline : NSObject {
    id<BMBookmark> *_bookmark;
    NSString *_path;
    ATXEngagementTrackedDigestBiomeStream *_trackedDigestStream;
    ATXNotificationDigestFeedbackLogger *_feedbackLogger;
}




-(BOOL)_fileExistsAtPath:(id)arg0 ;
-(id)init;
-(id)initWithBookmark:(id)arg0 path:(id)arg1 trackedDigestStream:(id)arg2 ;
-(id)initWithBookmark:(id)arg0 path:(id)arg1 trackedDigestStream:(id)arg2 digestFeedbackLogger:(id)arg3 ;
-(void)_readBookmarkFromPath;
-(void)_writeBookmarkToPath;
-(void)logFeedbackForDigest:(id)arg0 ;
-(void)logMetrics;
-(void)logMetricsForDigest:(id)arg0 ;
-(void)logMetricsWithXPCActivity:(id)arg0 ;


@end


#endif