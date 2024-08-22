// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MHSCHEMAMHUNINTENDEDRESPONSESUPPRESSIONSTARTED_H
#define MHSCHEMAMHUNINTENDEDRESPONSESUPPRESSIONSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated.h"
#import "MHSchemaMHLatticeFalseTriggerMitigationEnded.h"

@interface MHSchemaMHUnintendedResponseSuppressionStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated *aftmScore; // ivar: _aftmScore
@property (nonatomic) BOOL hasAftmScore; // ivar: _hasAftmScore
@property (nonatomic) BOOL hasLrnnScore; // ivar: _hasLrnnScore
@property (nonatomic) BOOL hasNumAsrRecords;
@property (nonatomic) BOOL hasNumTokensTopPath;
@property (nonatomic) BOOL hasTrailingSilenceDurationInNs;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) MHSchemaMHLatticeFalseTriggerMitigationEnded *lrnnScore; // ivar: _lrnnScore
@property (nonatomic) unsigned int numAsrRecords; // ivar: _numAsrRecords
@property (nonatomic) unsigned int numTokensTopPath; // ivar: _numTokensTopPath
@property (nonatomic) NSUInteger trailingSilenceDurationInNs; // ivar: _trailingSilenceDurationInNs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif