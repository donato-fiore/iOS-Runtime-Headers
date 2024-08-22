// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLXSCHEMACDMREPETITIONRESULT_H
#define NLXSCHEMACDMREPETITIONRESULT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NLXSchemaCDMRepetitionResult : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int asrHypothesisIndex; // ivar: _asrHypothesisIndex
@property (nonatomic) BOOL hasAsrHypothesisIndex;
@property (nonatomic) BOOL hasRepetitionType;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int repetitionType; // ivar: _repetitionType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAsrHypothesisIndex;
-(void)deleteRepetitionType;
-(void)writeTo:(id)arg0 ;


@end


#endif