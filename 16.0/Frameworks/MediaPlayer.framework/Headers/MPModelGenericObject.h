// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELGENERICOBJECT_H
#define MPMODELGENERICOBJECT_H



#import "MPModelObject.h"
#import "MPModelAlbum.h"
#import "MPModelArtist.h"
#import "MPModelComposer.h"
#import "MPModelCurator.h"
#import "MPModelGenre.h"
#import "MPModelGroup.h"
#import "MPModelMediaClip.h"
#import "MPModelMovie.h"
#import "MPModelPlaylist.h"
#import "MPModelPlaylistEntry.h"
#import "MPModelPodcast.h"
#import "MPModelPodcastEpisode.h"
#import "MPModelRadioStation.h"
#import "MPModelRadioStationEvent.h"
#import "MPModelRecordLabel.h"
#import "MPModelTVSeason.h"
#import "MPModelTVShow.h"
#import "MPModelSocialPerson.h"
#import "MPModelSong.h"
#import "MPModelTVEpisode.h"

@interface MPModelGenericObject : MPModelObject

@property (retain, nonatomic) MPModelAlbum *album;
@property (retain, nonatomic) MPModelArtist *artist;
@property (retain, nonatomic) MPModelComposer *composer;
@property (retain, nonatomic) MPModelCurator *curator;
@property (retain, nonatomic) MPModelGenre *genre;
@property (retain, nonatomic) MPModelGroup *group;
@property (retain, nonatomic) MPModelMediaClip *mediaClip;
@property (retain, nonatomic) MPModelMovie *movie;
@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (retain, nonatomic) MPModelPlaylistEntry *playlistEntry;
@property (retain, nonatomic) MPModelPodcast *podcast;
@property (retain, nonatomic) MPModelPodcastEpisode *podcastEpisode;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (readonly, nonatomic) MPModelRadioStationEvent *radioStationEvent;
@property (retain, nonatomic) MPModelRecordLabel *recordLabel;
@property (retain, nonatomic) MPModelTVSeason *season;
@property (retain, nonatomic) MPModelTVShow *show;
@property (retain, nonatomic) MPModelSocialPerson *socialPerson;
@property (retain, nonatomic) MPModelSong *song;
@property (retain, nonatomic) MPModelTVEpisode *tvEpisode;


+(id)genericObjectWithModelObject:(id)arg0 ;
+(id)kindWithRelationshipKinds:(id)arg0 ;
+(id)relationshipKeyForGenericObjectType:(NSInteger)arg0 ;
+(id)requiredStoreLibraryPersonalizationProperties;
-(NSInteger)type;
-(id)anyObject;
-(id)artworkCatalog;
-(id)copyWithIdentifiers:(id)arg0 block:(id)arg1 ;
-(id)copyWithIdentifiers:(id)arg0 propertySet:(id)arg1 ;
-(id)flattenedGenericObject;
-(id)humanDescription;
-(id)identifiers;
-(id)mediaItemPropertyValues;
-(id)mergeWithObject:(id)arg0 ;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg0 ;
-(id)personalizationScopedPropertiesForProperties:(id)arg0 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;


@end


#endif