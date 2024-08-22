// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTPODCASTPLAYLISTSETTINGS_H
#define MTPODCASTPLAYLISTSETTINGS_H

@class NSManagedObject, NSOrderedSet, NSString;


#import "MTPlaylist.h"
#import "MTPodcast.h"

@interface MTPodcastPlaylistSettings : NSManagedObject

@property (nonatomic) int downloaded;
@property (retain, nonatomic) NSOrderedSet *episodes;
@property (nonatomic) NSInteger episodesToShow;
@property (nonatomic) NSInteger flags;
@property (nonatomic) NSInteger mediaType;
@property (nonatomic) NSInteger playOrder;
@property (retain, nonatomic) MTPlaylist *playlist;
@property (retain, nonatomic) MTPlaylist *playlistIfDefault;
@property (retain, nonatomic) MTPodcast *podcast;
@property (nonatomic) BOOL showPlayedEpisodes;
@property (nonatomic) NSInteger sortOrder;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) BOOL visible;




@end


#endif