// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIPPLAYBACKINFO_H
#define MIPPLAYBACKINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface MIPPlaybackInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int beatsPerMinute; // ivar: _beatsPerMinute
@property (nonatomic) int bitRate; // ivar: _bitRate
@property (nonatomic) int codecSubType; // ivar: _codecSubType
@property (nonatomic) int codecType; // ivar: _codecType
@property (nonatomic) int dataKind; // ivar: _dataKind
@property (retain, nonatomic) NSString *dataUrl; // ivar: _dataUrl
@property (nonatomic) NSInteger durationInSamples; // ivar: _durationInSamples
@property (retain, nonatomic) NSString *eqPreset; // ivar: _eqPreset
@property (nonatomic) NSInteger gaplessEncodingDrainCode; // ivar: _gaplessEncodingDrainCode
@property (nonatomic) NSInteger gaplessFrameResyncCode; // ivar: _gaplessFrameResyncCode
@property (nonatomic) NSInteger gaplessHeuristicCode; // ivar: _gaplessHeuristicCode
@property (nonatomic) NSInteger gaplessHeuristicDelayCode; // ivar: _gaplessHeuristicDelayCode
@property (nonatomic) BOOL hasBeatsPerMinute;
@property (nonatomic) BOOL hasBitRate;
@property (nonatomic) BOOL hasCodecSubType;
@property (nonatomic) BOOL hasCodecType;
@property (nonatomic) BOOL hasDataKind;
@property (readonly, nonatomic) BOOL hasDataUrl;
@property (nonatomic) BOOL hasDurationInSamples;
@property (readonly, nonatomic) BOOL hasEqPreset;
@property (nonatomic) BOOL hasGaplessEncodingDrainCode;
@property (nonatomic) BOOL hasGaplessFrameResyncCode;
@property (nonatomic) BOOL hasGaplessHeuristicCode;
@property (nonatomic) BOOL hasGaplessHeuristicDelayCode;
@property (readonly, nonatomic) BOOL hasPlaybackFormat;
@property (nonatomic) BOOL hasProgressionDirection;
@property (nonatomic) BOOL hasRelativeVolume;
@property (nonatomic) BOOL hasSampleRate;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) BOOL hasStopTime;
@property (nonatomic) BOOL hasVolumeNormalizationEnergy;
@property (retain, nonatomic) NSString *playbackFormat; // ivar: _playbackFormat
@property (nonatomic) int progressionDirection; // ivar: _progressionDirection
@property (nonatomic) int relativeVolume; // ivar: _relativeVolume
@property (nonatomic) int sampleRate; // ivar: _sampleRate
@property (nonatomic) NSInteger startTime; // ivar: _startTime
@property (nonatomic) NSInteger stopTime; // ivar: _stopTime
@property (nonatomic) NSInteger volumeNormalizationEnergy; // ivar: _volumeNormalizationEnergy


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif