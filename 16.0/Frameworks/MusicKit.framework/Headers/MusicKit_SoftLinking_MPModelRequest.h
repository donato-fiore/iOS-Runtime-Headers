// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELREQUEST_H
#define MUSICKIT_SOFTLINKING_MPMODELREQUEST_H

@class MPModelRequest;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPModelRequest : NSObject {
    MPModelRequest *_underlyingRequest;
}


@property (readonly, nonatomic) MPModelRequest *_underlyingRequest;


+(id)_albumSupportedProperties;
+(id)_artistSupportedProperties;
+(id)_composerSupportedProperties;
+(id)_genreSupportedProperties;
+(id)_localFileAssetSupportedProperties;
+(id)_movieSupportedProperties;
+(id)_playlistEntrySupportedProperties;
+(id)_playlistSupportedProperties;
+(id)_propertySetForRawProperties:(id)arg0 ;
+(id)_recentlyAddedObjectSupportedProperties;
+(id)_songSupportedProperties;
+(id)_storeAssetSupportedProperties;
+(id)_supportedPropertiesForModelObjectType:(NSInteger)arg0 ;
+(id)_tvEpisodeSupportedProperties;
+(id)_tvSeasonSupportedProperties;
+(id)_tvShowSupportedProperties;
+(id)defaultUnpersonalizedRequest;
-(id)_initWithUnderlyingRequest:(id)arg0 ;


@end


#endif