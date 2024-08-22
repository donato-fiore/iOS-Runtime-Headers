// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELPODCASTEPISODE_H
#define MPMODELPODCASTEPISODE_H

@class NSString, NSDate, NSDateComponents, NSURL;


#import "MPModelObject.h"
#import "MPModelPodcastAuthor.h"
#import "MPModelFileAsset.h"
#import "MPModelPlaybackPosition.h"
#import "MPModelPodcast.h"

@interface MPModelPodcastEpisode : MPModelObject

@property (copy, nonatomic) id *artworkCatalogBlock;
@property (retain, nonatomic) MPModelPodcastAuthor *author;
@property (copy, nonatomic) NSString *commentText; // ivar: _commentText
@property (copy, nonatomic) NSDate *datePlayed;
@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) CGFloat duration;
@property (readonly, nonatomic) NSInteger episodeNumber;
@property (readonly, nonatomic) NSInteger episodeType;
@property (nonatomic, getter=isExplicitEpisode) BOOL explicitEpisode;
@property (readonly, nonatomic) BOOL hasVideo;
@property (retain, nonatomic) MPModelFileAsset *localFileAsset;
@property (retain, nonatomic) MPModelPlaybackPosition *playbackPosition;
@property (retain, nonatomic) MPModelPodcast *podcast;
@property (copy, nonatomic) NSDateComponents *releaseDateComponents;
@property (readonly, nonatomic) NSInteger seasonNumber;
@property (copy, nonatomic) NSURL *shareURL;
@property (copy, nonatomic) NSURL *streamURL;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) float userRating;


+(NSInteger)genericObjectType;
+(id)__explicitEpisode_KEY;
+(id)kindWithVariants:(NSUInteger)arg0 ;
+(id)kindWithVariants:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)artworkCatalog;
-(id)humanDescription;


@end


#endif