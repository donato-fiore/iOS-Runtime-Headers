// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELTVEPISODEPLAYBACKITEMMETADATA_H
#define MPMODELTVEPISODEPLAYBACKITEMMETADATA_H



#import "MPModelSongPlaybackItemMetadata.h"
#import "MPModelGenericObject.h"
#import "MPModelTVEpisode.h"

@interface MPModelTVEpisodePlaybackItemMetadata : MPModelSongPlaybackItemMetadata {
    MPModelGenericObject *_modelGenericObject;
}


@property (retain, nonatomic) MPModelTVEpisode *episode; // ivar: _episode


+(id)requiredProperties;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExplicitTrack;
-(CGFloat)expectedDuration;
-(NSInteger)albumStoreAdamID;
-(NSInteger)artistStoreAdamID;
-(NSInteger)storeAdamID;
-(NSInteger)storeSubscriptionAdamID;
-(NSUInteger)contentType;
-(NSUInteger)hash;
-(NSUInteger)storeSagaID;
-(id)albumArtistName;
-(id)albumTitle;
-(id)artistName;
-(id)artworkCatalogForPlaybackTime:(CGFloat)arg0 ;
-(id)contentTitle;
-(id)localFileAsset;
-(id)mediaItem;
-(id)modelGenericObject;
-(id)playbackPosition;
-(id)storeAsset;
-(void)_invalidateModelObjectPlaybackItemMetadata;


@end


#endif