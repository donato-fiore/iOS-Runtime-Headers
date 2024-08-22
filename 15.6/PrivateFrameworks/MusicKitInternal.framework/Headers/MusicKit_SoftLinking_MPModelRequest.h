// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
+(id)_genreSupportedProperties;
+(id)_playlistEntrySupportedProperties;
+(id)_playlistSupportedProperties;
+(id)_recentlyAddedObjectSupportedProperties;
+(id)_songSupportedProperties;
+(id)_supportedPropertiesForModelType:(NSInteger)arg0 ;
+(id)defaultUnpersonalizedRequest;
-(id)_initWithUnderlyingRequest:(id)arg0 ;


@end


#endif