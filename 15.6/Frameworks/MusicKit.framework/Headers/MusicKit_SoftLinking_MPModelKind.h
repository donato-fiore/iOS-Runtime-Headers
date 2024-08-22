// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELKIND_H
#define MUSICKIT_SOFTLINKING_MPMODELKIND_H

@class MPModelKind;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPModelKind : NSObject {
    MPModelKind *_underlyingKind;
}


@property (readonly, nonatomic) MPModelKind *_underlyingKind;


+(BOOL)shouldShowAllExtendedVideoContent;
+(id)_defaultAlbumKind;
+(id)_defaultArtistKind;
+(id)_defaultCuratorKind;
+(id)_defaultFileAssetKind;
+(id)_defaultGenreKind;
+(id)_defaultMovieKind;
+(id)_defaultPlaylistEntryKind;
+(id)_defaultPlaylistEntryKindForMusicVideos;
+(id)_defaultPlaylistEntryKindForSongs;
+(id)_defaultPlaylistEntryKindForTracks;
+(id)_defaultPlaylistKind;
+(id)_defaultRadioStationKind;
+(id)_defaultRecentlyAddedObjectKind;
+(id)_defaultRecordLabelKind;
+(id)_defaultSongKind;
+(id)_defaultSongKindForTracks;
+(id)_defaultTVEpisodeKind;
+(id)_modelKindForModelType:(NSInteger)arg0 ;
+(id)_songKindForVariants:(NSUInteger)arg0 ;
+(id)_songKindForVariants:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
+(id)playlistEntryKindWithKinds:(id)arg0 ;
-(id)_initWithUnderlyingKind:(id)arg0 ;


@end


#endif