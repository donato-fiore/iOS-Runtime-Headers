// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18PODCASTSFOUNDATION28ADDINGPODCASTSTATEDATASOURCE_H
#define _TTC18PODCASTSFOUNDATION28ADDINGPODCASTSTATEDATASOURCE_H


#import <Foundation/Foundation.h>


@interface _TtC18PodcastsFoundation28AddingPodcastStateDataSource : NSObject {
    ? delegate;
    ? refreshQueue;
    ? lock;
    ? currentlyAddingShows;
}




-(id)init;
-(void)updateAddingShowsWithStoreCollectionIds:(id)arg0 ;


@end


#endif