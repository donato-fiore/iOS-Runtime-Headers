// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLXSCHEMACDMPARSER_H
#define NLXSCHEMACDMPARSER_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NLXSchemaCDMParser : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int algorithm; // ivar: _algorithm
@property (nonatomic) BOOL hasAlgorithm;
@property (nonatomic) BOOL hasParserId;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int parserId; // ivar: _parserId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAlgorithm;
-(void)deleteParserId;
-(void)writeTo:(id)arg0 ;


@end


#endif