// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GRPSCHEMAORDEREDMESSAGE_H
#define GRPSCHEMAORDEREDMESSAGE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "GRPSchemaSiriEventTypeUnion.h"

@interface GRPSchemaOrderedMessage : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasLogicalEventTimestampInNs;
@property (nonatomic) BOOL hasSiriEventTypeUnion; // ivar: _hasSiriEventTypeUnion
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSInteger logicalEventTimestampInNs; // ivar: _logicalEventTimestampInNs
@property (retain, nonatomic) GRPSchemaSiriEventTypeUnion *siriEventTypeUnion; // ivar: _siriEventTypeUnion
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteLogicalEventTimestampInNs;
-(void)deleteSiriEventTypeUnion;
-(void)writeTo:(id)arg0 ;


@end


#endif