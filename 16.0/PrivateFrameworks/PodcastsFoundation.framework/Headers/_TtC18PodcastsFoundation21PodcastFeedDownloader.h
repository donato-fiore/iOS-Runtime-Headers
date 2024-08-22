// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18PODCASTSFOUNDATION21PODCASTFEEDDOWNLOADER_H
#define _TTC18PODCASTSFOUNDATION21PODCASTFEEDDOWNLOADER_H


#import <Foundation/Foundation.h>


@interface _TtC18PodcastsFoundation21PodcastFeedDownloader : NSObject {
    ? mediaRequestController;
}




-(id)init;
-(void)downloadPodcast:(id)arg0 triggerBy:(id)arg1 allowEpisodesTo404:(BOOL)arg2 isImplicitActionRequest:(BOOL)arg3 completion:(id)arg4 ;


@end


#endif