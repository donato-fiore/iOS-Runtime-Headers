// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAABEXPERIMENTSERVERFEATURETRIGGERED_H
#define SISCHEMAABEXPERIMENTSERVERFEATURETRIGGERED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface SISchemaABExperimentServerFeatureTriggered : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (nonatomic) BOOL hasExperimentId; // ivar: _hasExperimentId
@property (nonatomic) BOOL hasTurnId; // ivar: _hasTurnId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *turnId; // ivar: _turnId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteExperimentId;
-(void)deleteTurnId;
-(void)writeTo:(id)arg0 ;


@end


#endif