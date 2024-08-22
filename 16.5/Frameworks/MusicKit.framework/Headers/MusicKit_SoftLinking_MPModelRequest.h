// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELREQUEST_H
#define MUSICKIT_SOFTLINKING_MPMODELREQUEST_H

@class MPModelRequest;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPModelRequest : NSObject {
    MPModelRequest *_underlyingRequest;
}


@property (readonly, nonatomic) MPModelRequest *_underlyingRequest;


+(id)_albumSupportedProperties;
+(id)_albumSupportedPropertiesForPlayback;
+(id)_artistSupportedProperties;
+(id)_composerSupportedProperties;
+(id)_genreSupportedProperties;
+(id)_localFileAssetSupportedProperties;
+(id)_movieSupportedProperties;
+(id)_movieSupportedPropertiesForPlayback;
+(id)_playbackItemSupportedProperties;
+(id)_playbackPositionSupportedProperties;
+(id)_playbackSectionSupportedProperties;
+(id)_playlistEntrySupportedProperties;
+(id)_playlistEntrySupportedPropertiesForPlayback;
+(id)_playlistSupportedProperties;
+(id)_playlistSupportedPropertiesForPlayback;
+(id)_propertySetForRawProperties:(id)arg0 relationships:(id)arg1 ;
+(id)_radioStationSupportedPropertiesForPlayback;
+(id)_recentlyAddedObjectSupportedProperties;
+(id)_socialPersonSupportedProperties;
+(id)_songSupportedProperties;
+(id)_songSupportedPropertiesForPlayback;
+(id)_storeAssetSupportedProperties;
+(id)_supportedPropertiesForModelObjectType:(NSInteger)arg0 ;
+(id)_tvEpisodeSupportedProperties;
+(id)_tvEpisodeSupportedPropertiesForPlayback;
+(id)_tvSeasonSupportedProperties;
+(id)_tvSeasonSupportedPropertiesForPlayback;
+(id)_tvShowSupportedProperties;
+(id)defaultUnpersonalizedRequest;
-(id)_initWithUnderlyingRequest:(id)arg0 ;


@end


#endif