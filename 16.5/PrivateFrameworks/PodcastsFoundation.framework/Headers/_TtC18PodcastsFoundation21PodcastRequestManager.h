// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18PODCASTSFOUNDATION21PODCASTREQUESTMANAGER_H
#define _TTC18PODCASTSFOUNDATION21PODCASTREQUESTMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC18PodcastsFoundation21PodcastRequestManager : NSObject {
    ? mediaRequestController;
}




+(id)sharedInstance;
-(id)init;
-(void)updatePodcastWithEpisodeAdamId:(id)arg0 completion:(id)arg1 ;
-(void)updatePodcastWithStoreId:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif