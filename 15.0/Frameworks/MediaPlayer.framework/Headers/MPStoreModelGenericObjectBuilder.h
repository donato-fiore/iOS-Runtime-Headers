// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTOREMODELGENERICOBJECTBUILDER_H
#define MPSTOREMODELGENERICOBJECTBUILDER_H

@class NSMapTable;


#import "MPStoreModelObjectBuilder.h"
#import "MPStoreModelAlbumBuilder.h"
#import "MPStoreModelArtistBuilder.h"
#import "MPStoreModelMovieBuilder.h"
#import "MPStoreModelPlaylistBuilder.h"
#import "MPStoreModelSongBuilder.h"
#import "MPStoreModelTVEpisodeBuilder.h"
#import "MPStoreModelTVSeasonBuilder.h"
#import "MPStoreModelTVShowBuilder.h"
#import "MPStoreModelRecordLabelBuilder.h"

@interface MPStoreModelGenericObjectBuilder : MPStoreModelObjectBuilder {
    NSMapTable *_baseContentItemIDToOccurrenceCount;
    MPStoreModelAlbumBuilder *_albumBuilder;
    MPStoreModelArtistBuilder *_artistBuilder;
    MPStoreModelMovieBuilder *_movieBuilder;
    MPStoreModelPlaylistBuilder *_playlistBuilder;
    MPStoreModelSongBuilder *_songBuilder;
    MPStoreModelTVEpisodeBuilder *_tvEpisodeBuilder;
    MPStoreModelTVSeasonBuilder *_tvSeasonBuilder;
    MPStoreModelTVShowBuilder *_tvShowBuilder;
    MPStoreModelRecordLabelBuilder *_recordLabelBuilder;
}


@property (nonatomic) BOOL shouldUsePlaylistEntry; // ivar: _shouldUsePlaylistEntry


-(id)_modelObjectWithUniqueContentItemIDForModelObject:(id)arg0 ;
-(id)modelObjectWithStoreItemMetadata:(id)arg0 sourceModelObject:(id)arg1 userIdentity:(id)arg2 ;
-(void)setPreventStoreItemMetadataCaching:(BOOL)arg0 ;


@end


#endif