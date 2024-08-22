// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GRRSCHEMAGRRRANKING_H
#define GRRSCHEMAGRRRANKING_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface GRRSchemaGRRRanking : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasParseId; // ivar: _hasParseId
@property (nonatomic) BOOL hasParseType;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *parseId; // ivar: _parseId
@property (nonatomic) int parseType; // ivar: _parseType
@property (nonatomic) CGFloat score; // ivar: _score


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteParseId;
-(void)deleteParseType;
-(void)deleteScore;
-(void)writeTo:(id)arg0 ;


@end


#endif