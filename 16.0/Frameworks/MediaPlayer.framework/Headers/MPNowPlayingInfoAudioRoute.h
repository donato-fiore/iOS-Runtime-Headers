// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPNOWPLAYINGINFOAUDIOROUTE_H
#define MPNOWPLAYINGINFOAUDIOROUTE_H

@class MRContentItemMetadataAudioRoute, NSString;

#import <Foundation/Foundation.h>


@interface MPNowPlayingInfoAudioRoute : NSObject

@property (readonly, nonatomic) MRContentItemMetadataAudioRoute *mediaRemoteAudioRoute; // ivar: _mediaRemoteAudioRoute
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isSpatializationEnabled) BOOL spatializationEnabled;
@property (nonatomic) BOOL supportsSpatialization;
@property (nonatomic) NSInteger type;


-(id)initWithMediaRemoteAudioRoute:(id)arg0 ;


@end


#endif