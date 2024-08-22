// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELSONGPLAYBACKITEMMETADATA_H
#define MPMODELSONGPLAYBACKITEMMETADATA_H



#import "MPModelObjectPlaybackItemMetadata.h"
#import "MPModelGenericObject.h"
#import "MPModelSong.h"

@interface MPModelSongPlaybackItemMetadata : MPModelObjectPlaybackItemMetadata {
    MPModelGenericObject *_modelGenericObject;
}


@property (retain, nonatomic) MPModelSong *song; // ivar: _song


+(id)requiredProperties;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExplicitTrack;
-(BOOL)showComposer;
-(CGFloat)expectedDuration;
-(NSInteger)albumStoreAdamID;
-(NSInteger)artistStoreAdamID;
-(NSInteger)storeAdamID;
-(NSInteger)storeSubscriptionAdamID;
-(NSUInteger)contentType;
-(NSUInteger)hash;
-(NSUInteger)storeSagaID;
-(float)volumeNormalization;
-(id)albumArtistName;
-(id)albumTitle;
-(id)artistName;
-(id)artworkCatalogForPlaybackTime:(CGFloat)arg0 ;
-(id)composerName;
-(id)contentTitle;
-(id)copyrightText;
-(id)homeSharingAsset;
-(id)localFileAsset;
-(id)mediaItem;
-(id)modelGenericObject;
-(id)playbackPosition;
-(id)storeAsset;
-(void)_invalidateModelObjectPlaybackItemMetadata;


@end


#endif