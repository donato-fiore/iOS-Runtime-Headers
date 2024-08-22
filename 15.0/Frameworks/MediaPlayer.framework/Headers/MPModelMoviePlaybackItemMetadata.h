// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELMOVIEPLAYBACKITEMMETADATA_H
#define MPMODELMOVIEPLAYBACKITEMMETADATA_H



#import "MPModelSongPlaybackItemMetadata.h"
#import "MPModelGenericObject.h"
#import "MPModelMovie.h"

@interface MPModelMoviePlaybackItemMetadata : MPModelSongPlaybackItemMetadata {
    MPModelGenericObject *_modelGenericObject;
}


@property (retain, nonatomic) MPModelMovie *movie; // ivar: _movie


+(id)requiredProperties;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExplicitTrack;
-(CGFloat)expectedDuration;
-(NSInteger)storeAdamID;
-(NSInteger)storeSubscriptionAdamID;
-(NSUInteger)contentType;
-(NSUInteger)hash;
-(NSUInteger)storeSagaID;
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