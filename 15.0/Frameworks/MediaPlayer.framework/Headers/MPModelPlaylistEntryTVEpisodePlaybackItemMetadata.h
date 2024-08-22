// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELPLAYLISTENTRYTVEPISODEPLAYBACKITEMMETADATA_H
#define MPMODELPLAYLISTENTRYTVEPISODEPLAYBACKITEMMETADATA_H



#import "MPModelTVEpisodePlaybackItemMetadata.h"
#import "MPModelGenericObject.h"
#import "MPModelPlaylistEntry.h"

@interface MPModelPlaylistEntryTVEpisodePlaybackItemMetadata : MPModelTVEpisodePlaybackItemMetadata {
    MPModelGenericObject *_modelGenericObject;
}


@property (retain, nonatomic) MPModelPlaylistEntry *playlistEntry; // ivar: _playlistEntry


+(id)requiredProperties;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)episode;
-(id)modelGenericObject;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(void)setEpisode:(id)arg0 ;


@end


#endif