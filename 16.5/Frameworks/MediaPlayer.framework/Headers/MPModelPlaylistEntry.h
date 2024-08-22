// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELPLAYLISTENTRY_H
#define MPMODELPLAYLISTENTRY_H



#import "MPModelObject.h"
#import "MPArtworkCatalog.h"
#import "MPModelMovie.h"
#import "MPModelPlaylist.h"
#import "MPModelSocialPerson.h"
#import "MPModelSong.h"
#import "MPModelTVEpisode.h"

@interface MPModelPlaylistEntry : MPModelObject

@property (retain, nonatomic) MPArtworkCatalog *_artworkCatalog;
@property (retain, nonatomic) MPModelMovie *movie;
@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (nonatomic) NSInteger position;
@property (retain, nonatomic) MPModelSocialPerson *socialContributor;
@property (retain, nonatomic) MPModelSong *song;
@property (retain, nonatomic) MPModelTVEpisode *tvEpisode;


+(BOOL)supportsKeepLocalStatusObservation;
+(BOOL)supportsLibraryAddStatusObservation;
+(BOOL)supportsLibraryRemoval;
+(NSInteger)genericObjectType;
+(id)kindWithKinds:(id)arg0 ;
+(id)requiredKeepLocalStatusObservationProperties;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)requiredLibraryRemovalProperties;
+(id)requiredStoreLibraryPersonalizationProperties;
-(NSInteger)libraryRemovalSupportedOptions;
-(NSInteger)type;
-(id)anyObject;
-(id)humanDescription;
-(id)mediaItemPropertyValues;
-(id)newKeepLocalStatusObserverConfiguration;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg0 ;
-(id)personalizationScopedPropertiesForProperties:(id)arg0 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(struct MPLibraryAddStatusObserverConfiguration )libraryAddStatusObserverConfiguration;


@end


#endif