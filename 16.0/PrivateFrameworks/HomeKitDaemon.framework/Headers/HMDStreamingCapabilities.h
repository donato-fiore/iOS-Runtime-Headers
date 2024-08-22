// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSTREAMINGCAPABILITIES_H
#define HMDSTREAMINGCAPABILITIES_H

@class HMFObject, NSDictionary, NSSet;
@protocol NSSecureCoding;



@interface HMDStreamingCapabilities : HMFObject <NSSecureCoding>



@property (nonatomic) NSUInteger streamingTierType; // ivar: _streamingTierType
@property (readonly, nonatomic) NSDictionary *supportedAudioCodecs; // ivar: _supportedAudioCodecs
@property (readonly, nonatomic) NSSet *supportedAudioSampleRates; // ivar: _supportedAudioSampleRates
@property (readonly, nonatomic) NSSet *supportedBitRateSettings; // ivar: _supportedBitRateSettings
@property (readonly, nonatomic) NSSet *supportedH264Levels; // ivar: _supportedH264Levels
@property (readonly, nonatomic) NSSet *supportedH264Profiles; // ivar: _supportedH264Profiles
@property (readonly, nonatomic) NSSet *supportedPacketizationModes; // ivar: _supportedPacketizationModes
@property (readonly, nonatomic) NSSet *supportedVideoCodecs; // ivar: _supportedVideoCodecs
@property (readonly, nonatomic) NSSet *supportedVideoResolutions; // ivar: _supportedVideoResolutions
@property (nonatomic) BOOL supportsComfortNoise; // ivar: _supportsComfortNoise


+(BOOL)supportsSecureCoding;
+(NSUInteger)aspectRatioOfResolution:(id)arg0 ;
+(void)translateCapabilities:(id)arg0 ;
-(id)_supportedResolutionsWithOverrides;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStreamPreference:(id)arg0 ;
-(void)_updateWithStreamPreference:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithRemoteSettings:(id)arg0 ;


@end


#endif