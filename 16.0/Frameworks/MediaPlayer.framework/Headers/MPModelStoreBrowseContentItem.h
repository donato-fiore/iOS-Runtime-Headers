// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELSTOREBROWSECONTENTITEM_H
#define MPMODELSTOREBROWSECONTENTITEM_H

@class NSString;


#import "MPModelObject.h"
#import "MPModelAlbum.h"
#import "MPModelArtist.h"
#import "MPModelCurator.h"
#import "MPModelTVEpisode.h"
#import "MPModelMediaClip.h"
#import "MPModelMovie.h"
#import "MPModelPlaylist.h"
#import "MPModelRadioStation.h"
#import "MPModelRecordLabel.h"
#import "MPModelTVSeason.h"
#import "MPModelTVShow.h"
#import "MPModelTVShowCreator.h"
#import "MPModelSocialPerson.h"
#import "MPModelSong.h"

@interface MPModelStoreBrowseContentItem : MPModelObject

@property (retain, nonatomic) MPModelAlbum *album;
@property (retain, nonatomic) MPModelArtist *artist;
@property (copy, nonatomic) NSString *artistUploadedContentType;
@property (retain, nonatomic) MPModelCurator *curator;
@property (nonatomic) NSInteger detailedItemType;
@property (retain, nonatomic) MPModelTVEpisode *episode;
@property (nonatomic) NSUInteger itemType;
@property (retain, nonatomic) MPModelMediaClip *mediaClip;
@property (retain, nonatomic) MPModelMovie *movie;
@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (retain, nonatomic) MPModelRecordLabel *recordLabel;
@property (retain, nonatomic) MPModelTVSeason *season;
@property (retain, nonatomic) MPModelTVShow *show;
@property (retain, nonatomic) MPModelTVShowCreator *showCreator;
@property (retain, nonatomic) MPModelSocialPerson *socialPerson;
@property (retain, nonatomic) MPModelSong *song;


+(id)requiredStoreLibraryPersonalizationProperties;
-(id)innerObject;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg0 ;
-(id)personalizationScopedPropertiesForProperties:(id)arg0 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;


@end


#endif