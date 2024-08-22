// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMACDMREFORMEDTURNINPUTBUNDLE_H
#define NLXSCHEMACDMREFORMEDTURNINPUTBUNDLE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "NLXSchemaCDMTurnInput.h"

@interface NLXSchemaCDMReformedTurnInputBundle : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) NLXSchemaCDMTurnInput *currentTurn; // ivar: _currentTurn
@property (nonatomic) BOOL hasCurrentTurn; // ivar: _hasCurrentTurn
@property (nonatomic) BOOL hasPreviousTurnsSkip;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int previousTurnsSkip; // ivar: _previousTurnsSkip
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCurrentTurn;
-(void)deletePreviousTurnsSkip;
-(void)deleteType;
-(void)writeTo:(id)arg0 ;


@end


#endif