// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELARTISTKIND_H
#define MUSICKIT_SOFTLINKING_MPMODELARTISTKIND_H

@class MPModelKind;


#import "MusicKit_SoftLinking_MPModelAlbumKind.h"

@interface MusicKit_SoftLinking_MPModelArtistKind : MPModelKind

@property (readonly, copy, nonatomic) MusicKit_SoftLinking_MPModelAlbumKind *albumKind; // ivar: _albumKind


-(id)init;
-(id)initWithAlbumKind:(id)arg0 ;


@end


#endif