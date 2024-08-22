// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DODMLASRSCHEMADODMLASRCHOICEINFO_H
#define DODMLASRSCHEMADODMLASRCHOICEINFO_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface DODMLASRSchemaDODMLASRChoiceInfo : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) float acousticCost; // ivar: _acousticCost
@property (nonatomic) float graphCost; // ivar: _graphCost
@property (nonatomic) BOOL hasAcousticCost;
@property (nonatomic) BOOL hasGraphCost;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *tokens; // ivar: _tokens


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(id)tokensAtIndex:(NSUInteger)arg0 ;
-(void)addTokens:(id)arg0 ;
-(void)clearTokens;
-(void)deleteAcousticCost;
-(void)deleteGraphCost;
-(void)deleteTokens;
-(void)writeTo:(id)arg0 ;


@end


#endif