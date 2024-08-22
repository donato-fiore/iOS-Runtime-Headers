// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MHSCHEMAMHSPEAKERFALSETRIGGERMITIGATED_H
#define MHSCHEMAMHSPEAKERFALSETRIGGERMITIGATED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHSpeakerFalseTriggerMitigated : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int errorCode; // ivar: _errorCode
@property (copy, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasErrorMessage; // ivar: _hasErrorMessage
@property (nonatomic) BOOL hasModelVersion; // ivar: _hasModelVersion
@property (nonatomic) BOOL hasProcessedAudioDurationInNs;
@property (nonatomic) BOOL hasSpeakerMatchScore;
@property (nonatomic) BOOL hasThresholdScore;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (nonatomic) CGFloat processedAudioDurationInNs; // ivar: _processedAudioDurationInNs
@property (nonatomic) float speakerMatchScore; // ivar: _speakerMatchScore
@property (nonatomic) float thresholdScore; // ivar: _thresholdScore


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteErrorCode;
-(void)deleteErrorMessage;
-(void)deleteModelVersion;
-(void)deleteProcessedAudioDurationInNs;
-(void)deleteSpeakerMatchScore;
-(void)deleteThresholdScore;
-(void)writeTo:(id)arg0 ;


@end


#endif