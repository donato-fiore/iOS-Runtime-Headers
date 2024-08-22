// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18PODCASTSFOUNDATION21PODCASTFEEDDOWNLOADER_H
#define _TTC18PODCASTSFOUNDATION21PODCASTFEEDDOWNLOADER_H


#import <Foundation/Foundation.h>


@interface _TtC18PodcastsFoundation21PodcastFeedDownloader : NSObject {
    ? mediaRequestController;
}




-(id)init;
-(void)downloadPodcast:(id)arg0 etag:(id)arg1 triggerBy:(id)arg2 allowEpisodesTo404:(BOOL)arg3 isImplicitActionRequest:(BOOL)arg4 completion:(id)arg5 ;


@end


#endif