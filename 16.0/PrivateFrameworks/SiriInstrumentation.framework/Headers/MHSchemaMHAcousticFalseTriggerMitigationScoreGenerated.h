// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MHSCHEMAMHACOUSTICFALSETRIGGERMITIGATIONSCOREGENERATED_H
#define MHSCHEMAMHACOUSTICFALSETRIGGERMITIGATIONSCOREGENERATED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger audioDurationInNs; // ivar: _audioDurationInNs
@property (nonatomic) BOOL hasAudioDurationInNs;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL hasThreshold;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float score; // ivar: _score
@property (nonatomic) float threshold; // ivar: _threshold


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAudioDurationInNs;
-(void)deleteScore;
-(void)deleteThreshold;
-(void)writeTo:(id)arg0 ;


@end


#endif