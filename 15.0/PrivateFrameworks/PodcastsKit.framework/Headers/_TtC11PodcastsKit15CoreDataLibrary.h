// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC11PODCASTSKIT15COREDATALIBRARY_H
#define _TTC11PODCASTSKIT15COREDATALIBRARY_H

@protocol PKLibrary, PKSubscriptionController;

#import <Foundation/Foundation.h>


@interface _TtC11PodcastsKit15CoreDataLibrary : NSObject <PKLibrary>



@property (nonatomic, retain) NSObject<PKSubscriptionController> *subscriptionController; // ivar: subscriptionController


-(id)init;
-(void)fetchAllShowsWithResultsHandler:(id)arg0 ;
-(void)fetchMatchesFor:(id)arg0 limit:(NSInteger)arg1 resultsHandler:(id)arg2 ;


@end


#endif