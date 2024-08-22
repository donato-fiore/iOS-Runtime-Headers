// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELPLAYLISTENTRYMOVIEPLAYBACKITEMMETADATA_H
#define MPMODELPLAYLISTENTRYMOVIEPLAYBACKITEMMETADATA_H



#import "MPModelMoviePlaybackItemMetadata.h"
#import "MPModelGenericObject.h"
#import "MPModelPlaylistEntry.h"

@interface MPModelPlaylistEntryMoviePlaybackItemMetadata : MPModelMoviePlaybackItemMetadata {
    MPModelGenericObject *_modelGenericObject;
}


@property (retain, nonatomic) MPModelPlaylistEntry *playlistEntry; // ivar: _playlistEntry


+(id)requiredProperties;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)modelGenericObject;
-(id)movie;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(void)setMovie:(id)arg0 ;


@end


#endif