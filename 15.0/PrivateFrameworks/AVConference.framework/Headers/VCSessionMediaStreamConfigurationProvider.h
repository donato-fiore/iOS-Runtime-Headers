// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSESSIONMEDIASTREAMCONFIGURATIONPROVIDER_H
#define VCSESSIONMEDIASTREAMCONFIGURATIONPROVIDER_H

@class NSMutableArray, NSArray;
@protocol VCIDSStreamIDGenerator;

#import <Foundation/Foundation.h>


@interface VCSessionMediaStreamConfigurationProvider : NSObject {
    NSMutableArray *_allocatedStreamIDs;
    NSInteger _sessionMode;
    unsigned int _internalAudioPacketsPerSecond;
    BOOL _use96Tier;
    id<VCIDSStreamIDGenerator> *_streamIDGenerator;
}


@property (readonly, nonatomic) NSArray *audioStreamConfigurations; // ivar: _audioStreamConfigurations
@property (readonly, nonatomic) NSInteger highestEncodingResolution; // ivar: _highestEncodingResolution
@property (readonly, nonatomic) BOOL isEncodingSqaures; // ivar: _isEncodingSqaures
@property (readonly, nonatomic) NSArray *videoStreamConfigurations; // ivar: _videoStreamConfigurations


+(BOOL)isAudioStreamOnDemand:(struct _VCMediaStreamConfigurationProviderAudio *)arg0 isLowestQualityAudio:(BOOL)arg1 ;
+(BOOL)isVideoStreamOnDemand:(struct _VCMediaStreamConfigurationProviderVideo *)arg0 ;
+(void)computeMaxNetworkBitrate:(*unsigned int)arg0 maxMediaBitrate:(*unsigned int)arg1 maxPacketsPerSecond:(*float)arg2 audioStreamIndex:(unsigned int)arg3 internalPacketsPerSecond:(unsigned int)arg4 ;
+(void)computeMaxNetworkBitrate:(*unsigned int)arg0 maxMediaBitrate:(*unsigned int)arg1 maxPacketsPerSecond:(*float)arg2 maxIDSStreamIDCount:(unsigned int)arg3 internalPacketsPerSecond:(unsigned int)arg4 audioConfig:(struct _VCMediaStreamConfigurationProviderAudio *)arg5 ;
-(BOOL)initializeAudioStreamWithConfig:(struct _VCMediaStreamConfigurationProviderAudio *)arg0 maxIDSStreamIDCount:(unsigned int)arg1 supportedAudioRules:(id)arg2 isLowestQualityAudio:(BOOL)arg3 ;
-(BOOL)initializeAudioStreamsWithSupportedRules:(id)arg0 ;
-(BOOL)initializeStreamsWithSupportedAudioRules:(id)arg0 ;
-(BOOL)initializeVideoStreamWithConfig:(struct _VCMediaStreamConfigurationProviderVideo *)arg0 streamIndex:(unsigned int)arg1 ;
-(BOOL)initializeVideoStreamWithDefaults;
-(BOOL)initializeVideoStreams;
-(id)audioRuleCollectionWithAudioConfig:(struct _VCMediaStreamConfigurationProviderAudio *)arg0 supportedAudioRules:(id)arg1 ;
-(id)initWithStreamIDGenerator:(id)arg0 sessionMode:(NSInteger)arg1 supportedAudioRules:(id)arg2 ;
-(int)streamPayloadFromProviderConfig:(struct _VCMediaStreamConfigurationProviderVideo *)arg0 ;
-(void)audioStreamConfigs:(struct _VCMediaStreamConfigurationProviderAudio **)arg0 configCount:(*unsigned int)arg1 ;
-(void)dealloc;


@end


#endif