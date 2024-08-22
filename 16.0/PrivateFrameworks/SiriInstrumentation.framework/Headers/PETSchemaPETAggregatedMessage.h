// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PETSCHEMAPETAGGREGATEDMESSAGE_H
#define PETSCHEMAPETAGGREGATEDMESSAGE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "PETSchemaPETDistribution.h"
#import "PETSchemaPETAggregationKey.h"

@interface PETSchemaPETAggregatedMessage : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int count; // ivar: _count
@property (retain, nonatomic) PETSchemaPETDistribution *distribution; // ivar: _distribution
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasDistribution; // ivar: _hasDistribution
@property (nonatomic) BOOL hasKey; // ivar: _hasKey
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) PETSchemaPETAggregationKey *key; // ivar: _key


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCount;
-(void)deleteDistribution;
-(void)deleteKey;
-(void)writeTo:(id)arg0 ;


@end


#endif