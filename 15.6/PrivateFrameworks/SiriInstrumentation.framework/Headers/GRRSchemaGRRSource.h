// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GRRSCHEMAGRRSOURCE_H
#define GRRSCHEMAGRRSOURCE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface GRRSchemaGRRSource : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasSourceId; // ivar: _hasSourceId
@property (nonatomic) BOOL hasSourceType;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *sourceId; // ivar: _sourceId
@property (nonatomic) int sourceType; // ivar: _sourceType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSourceId;
-(void)deleteSourceType;
-(void)writeTo:(id)arg0 ;


@end


#endif