// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELPODCAST_H
#define MPMODELPODCAST_H

@class NSURL, NSString;


#import "MPModelObject.h"
#import "MPModelPodcastAuthor.h"

@interface MPModelPodcast : MPModelObject

@property (copy, nonatomic) id *artworkCatalogBlock;
@property (retain, nonatomic) MPModelPodcastAuthor *author;
@property (copy, nonatomic) NSURL *feedURL;
@property (copy, nonatomic) NSURL *shareURL;
@property (nonatomic) BOOL supportsSubscription;
@property (copy, nonatomic) NSString *title;


+(NSInteger)genericObjectType;
+(id)kindWithEpisodeKind:(id)arg0 ;
-(id)artworkCatalog;
-(id)humanDescription;


@end


#endif