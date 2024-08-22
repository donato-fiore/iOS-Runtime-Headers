// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELSTOREBROWSECONTENTITEMBUILDER_H
#define MPMODELSTOREBROWSECONTENTITEMBUILDER_H



#import "MPStoreModelObjectBuilder.h"
#import "MPStoreModelAlbumBuilder.h"
#import "MPStoreModelArtistBuilder.h"
#import "MPStoreModelCuratorBuilder.h"
#import "MPStoreModelTVEpisodeBuilder.h"
#import "MPStoreModelMovieBuilder.h"
#import "MPStoreModelRadioStationBuilder.h"
#import "MPStoreModelSocialPersonBuilder.h"
#import "MPStoreModelPlaylistBuilder.h"
#import "MPStoreModelTVSeasonBuilder.h"
#import "MPStoreModelSongBuilder.h"
#import "MPStoreModelTVShowBuilder.h"
#import "MPStoreModelTVShowCreatorBuilder.h"
#import "MPStoreModelRecordLabelBuilder.h"

@interface MPModelStoreBrowseContentItemBuilder : MPStoreModelObjectBuilder {
    ? _requestedBrowseContentItemProperties;
    MPStoreModelAlbumBuilder *_albumBuilder;
    MPStoreModelArtistBuilder *_artistBuilder;
    MPStoreModelCuratorBuilder *_curatorBuilder;
    MPStoreModelTVEpisodeBuilder *_episodeBuilder;
    MPStoreModelMovieBuilder *_movieBuilder;
    MPStoreModelRadioStationBuilder *_radioStationBuilder;
    MPStoreModelSocialPersonBuilder *_socialPersonBuilder;
    MPStoreModelPlaylistBuilder *_playlistBuilder;
    MPStoreModelTVSeasonBuilder *_seasonBuilder;
    MPStoreModelSongBuilder *_songBuilder;
    MPStoreModelTVShowBuilder *_showBuilder;
    MPStoreModelTVShowCreatorBuilder *_showCreatorBuilder;
    MPStoreModelRecordLabelBuilder *_recordLabelBuilder;
    BOOL _shouldFakeEpisodes;
}


@property (nonatomic) BOOL allowsRadioStations; // ivar: _allowsRadioStations
@property (nonatomic) BOOL allowsVideoContent; // ivar: _allowsVideoContent


+(id)allSupportedProperties;
-(NSInteger)contentItemTypeForMusicAPIType:(id)arg0 ;
-(NSInteger)contentItemTypeForRawResponseKindIdentifierValue:(NSInteger)arg0 ;
-(NSInteger)contentItemTypeForRawResponseKindIdentifiers:(id)arg0 ;
-(NSInteger)contentItemTypeForStoreItemMetadata:(id)arg0 ;
-(id)initWithRequestedPropertySet:(id)arg0 ;
-(id)modelObjectWithStoreItemMetadata:(id)arg0 sourceModelObject:(id)arg1 userIdentity:(id)arg2 ;
-(void)setPreventStoreItemMetadataCaching:(BOOL)arg0 ;


@end


#endif