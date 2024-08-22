// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELPLAYLISTENTRYSONGPLAYBACKITEMMETADATA_H
#define MPMODELPLAYLISTENTRYSONGPLAYBACKITEMMETADATA_H



#import "MPModelSongPlaybackItemMetadata.h"
#import "MPModelGenericObject.h"
#import "MPModelPlaylistEntry.h"

@interface MPModelPlaylistEntrySongPlaybackItemMetadata : MPModelSongPlaybackItemMetadata {
    MPModelGenericObject *_modelGenericObject;
}


@property (retain, nonatomic) MPModelPlaylistEntry *playlistEntry; // ivar: _playlistEntry


+(id)requiredProperties;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)modelGenericObject;
-(id)song;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(void)setSong:(id)arg0 ;


@end


#endif