// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCPLAYERAUDIOFORMAT_H
#define MPCPLAYERAUDIOFORMAT_H

@class NSString, NSDictionary, MPNowPlayingInfoAudioFormat;
@protocol MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying;

#import <Foundation/Foundation.h>


@interface MPCPlayerAudioFormat : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying>



@property (readonly, nonatomic) NSString *audioChannelLayoutDescription; // ivar: _audioChannelLayoutDescription
@property (readonly, nonatomic) NSInteger bitDepth; // ivar: _bitDepth
@property (readonly, nonatomic) NSInteger bitrate; // ivar: _bitrate
@property (readonly, nonatomic) unsigned int channelLayout; // ivar: _channelLayout
@property (readonly, nonatomic) unsigned int codec; // ivar: _codec
@property (readonly, nonatomic) NSString *debugBitDepthDescription;
@property (readonly, nonatomic) NSString *debugBitRateDescription;
@property (readonly, nonatomic) NSString *debugChannelCountDescription;
@property (readonly, nonatomic) NSString *debugChannelLayoutDescription;
@property (readonly, nonatomic) NSString *debugCodecDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *debugSampleRateDescription;
@property (readonly, nonatomic) NSString *debugTierDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *humanDescription;
@property (readonly, nonatomic, getter=isMultiChannel) BOOL multiChannel; // ivar: _multiChannel
@property (readonly, nonatomic) MPNowPlayingInfoAudioFormat *nowPlayingAudioFormat;
@property (nonatomic) unsigned int originChannelLayout; // ivar: _originChannelLayout
@property (readonly, nonatomic) NSInteger sampleRate; // ivar: _sampleRate
@property (readonly, nonatomic, getter=isSpatialized) BOOL spatialized; // ivar: _spatialized
@property (readonly, copy, nonatomic) NSString *stableVariantID; // ivar: _stableVariantID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger tier; // ivar: _tier


+(id)payloadValueFromJSONValue:(id)arg0 ;
-(BOOL)_isBinauralFormat:(id)arg0 ;
-(BOOL)_isDerivedFromSpatialFormat:(id)arg0 ;
-(BOOL)_isHLSVersion:(id)arg0 greatherThanOrEqualTo:(id)arg1 ;
-(BOOL)_isMultichannelFormat:(id)arg0 ;
-(BOOL)_isSpatialFormat:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_computedTierFromHLSDataWithChannelCount:(NSInteger)arg0 ;
-(id)_descriptionForChannelLayoutTag:(unsigned int)arg0 ;
-(id)analyticsFormatInfo;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugOriginChannelCountDescription;
-(id)debugOriginChannelLayoutDescription;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithJSONDictionaryRepresentation:(id)arg0 stableVariantID:(id)arg1 ;
-(id)initWithNowPlayingInfoAudioFormat:(id)arg0 ;
-(id)mpc_jsonValue;
-(unsigned int)_computedChannelLayoutTagFromHLSData:(id)arg0 channelCount:(NSInteger)arg1 ;


@end


#endif