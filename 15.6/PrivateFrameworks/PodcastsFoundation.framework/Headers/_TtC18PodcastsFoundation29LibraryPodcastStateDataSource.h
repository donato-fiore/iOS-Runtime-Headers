// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18PODCASTSFOUNDATION29LIBRARYPODCASTSTATEDATASOURCE_H
#define _TTC18PODCASTSFOUNDATION29LIBRARYPODCASTSTATEDATASOURCE_H

@class SwiftObject;



@interface _TtC18PodcastsFoundation29LibraryPodcastStateDataSource : SwiftObject {
    ? workerQueue;
    ? readWriteQueue;
    ? syncQueue;
    ? observer;
    ? dataSourceDelegate;
    ? activated;
    ? refreshDataWorkController;
    ? expectedPodcastStatesByAdamId;
    ? expectedPodcastStatesByUuid;
    ? previouslyAddedPodcastAdamIds;
    ? previouslyAddedPodcastUuids;
    ? contextProvider;
}






@end


#endif