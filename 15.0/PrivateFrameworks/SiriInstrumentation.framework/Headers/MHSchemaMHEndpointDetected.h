// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MHSCHEMAMHENDPOINTDETECTED_H
#define MHSCHEMAMHENDPOINTDETECTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "MHSchemaMHStatisticDistributionInfo.h"
#import "MHSchemaMHEndpointFeaturesAtEndpoint.h"
#import "SISchemaVersion.h"

@interface MHSchemaMHEndpointDetected : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) MHSchemaMHStatisticDistributionInfo *asrFeatureLatencyDistribution; // ivar: _asrFeatureLatencyDistribution
@property (nonatomic) NSUInteger audioSkippedDurationInNs; // ivar: _audioSkippedDurationInNs
@property (nonatomic) BOOL derivedBufferTimeFromHistoricalAudio; // ivar: _derivedBufferTimeFromHistoricalAudio
@property (nonatomic) NSUInteger endpointAudioDurationInNs; // ivar: _endpointAudioDurationInNs
@property (retain, nonatomic) MHSchemaMHEndpointFeaturesAtEndpoint *endpointFeaturesAtEndpoint; // ivar: _endpointFeaturesAtEndpoint
@property (retain, nonatomic) SISchemaVersion *endpointModelConfigVersion; // ivar: _endpointModelConfigVersion
@property (nonatomic) NSUInteger endpointResetPositionInNs; // ivar: _endpointResetPositionInNs
@property (nonatomic) NSUInteger endpointedBufferTimeInNs; // ivar: _endpointedBufferTimeInNs
@property (nonatomic) NSUInteger endpointerDecisionLagInNs; // ivar: _endpointerDecisionLagInNs
@property (nonatomic) float endpointerScore; // ivar: _endpointerScore
@property (nonatomic) float endpointerThreshold; // ivar: _endpointerThreshold
@property (nonatomic) int endpointerType; // ivar: _endpointerType
@property (nonatomic) NSUInteger extraDelayInNs; // ivar: _extraDelayInNs
@property (nonatomic) NSUInteger firstBufferTimeInNs; // ivar: _firstBufferTimeInNs
@property (nonatomic) BOOL hasAsrFeatureLatencyDistribution; // ivar: _hasAsrFeatureLatencyDistribution
@property (nonatomic) BOOL hasAudioSkippedDurationInNs;
@property (nonatomic) BOOL hasDerivedBufferTimeFromHistoricalAudio;
@property (nonatomic) BOOL hasEndpointAudioDurationInNs;
@property (nonatomic) BOOL hasEndpointFeaturesAtEndpoint; // ivar: _hasEndpointFeaturesAtEndpoint
@property (nonatomic) BOOL hasEndpointModelConfigVersion; // ivar: _hasEndpointModelConfigVersion
@property (nonatomic) BOOL hasEndpointResetPositionInNs;
@property (nonatomic) BOOL hasEndpointedBufferTimeInNs;
@property (nonatomic) BOOL hasEndpointerDecisionLagInNs;
@property (nonatomic) BOOL hasEndpointerScore;
@property (nonatomic) BOOL hasEndpointerThreshold;
@property (nonatomic) BOOL hasEndpointerType;
@property (nonatomic) BOOL hasExtraDelayInNs;
@property (nonatomic) BOOL hasFirstBufferTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif