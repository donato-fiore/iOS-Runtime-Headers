// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11PODCASTSKIT7CATALOG_H
#define _TTC11PODCASTSKIT7CATALOG_H

@protocol PKCatalog;

#import <Foundation/Foundation.h>


@interface _TtC11PodcastsKit7Catalog : NSObject <PKCatalog>





-(id)init;
-(void)fetchEpisodesWithStoreIds:(id)arg0 resultsHandler:(id)arg1 ;
-(void)fetchShowsWithStoreIds:(id)arg0 resultsHandler:(id)arg1 ;


@end


#endif