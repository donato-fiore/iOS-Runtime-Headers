// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC18PODCASTSFOUNDATION20PODCASTSMEDIALIBRARY19TASKMETRICSDELEGATE_H
#define _TTCC18PODCASTSFOUNDATION20PODCASTSMEDIALIBRARY19TASKMETRICSDELEGATE_H

@protocol AMSURLProtocolDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate;

#import <Foundation/Foundation.h>


@interface _TtCC18PodcastsFoundation20PodcastsMediaLibrary19TaskMetricsDelegate : NSObject <AMSURLProtocolDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate>

 {
    ? strongRef;
}




-(id)init;
-(void)URLSession:(id)arg0 task:(id)arg1 didFinishCollectingMetrics:(id)arg2 ;


@end


#endif