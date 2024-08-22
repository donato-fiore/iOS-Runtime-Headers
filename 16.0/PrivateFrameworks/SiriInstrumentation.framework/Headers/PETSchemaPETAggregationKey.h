// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PETSCHEMAPETAGGREGATIONKEY_H
#define PETSCHEMAPETAGGREGATIONKEY_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "PETSchemaPETRawMessage.h"

@interface PETSchemaPETAggregationKey : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) CGFloat bucket; // ivar: _bucket
@property (nonatomic) unsigned int datestamp; // ivar: _datestamp
@property (nonatomic) BOOL hasBucket;
@property (nonatomic) BOOL hasDatestamp;
@property (nonatomic) BOOL hasRaw_message; // ivar: _hasRaw_message
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) PETSchemaPETRawMessage *raw_message; // ivar: _raw_message
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteBucket;
-(void)deleteDatestamp;
-(void)deleteRaw_message;
-(void)deleteType;
-(void)writeTo:(id)arg0 ;


@end


#endif