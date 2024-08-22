// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GRPSCHEMAGROUPEDMESSAGESCLIENTEVENT_H
#define GRPSCHEMAGROUPEDMESSAGESCLIENTEVENT_H

@class NSData, NSArray;


#import "SISchemaTopLevelUnionType.h"
#import "GRPSchemaGroupedMessagesGrouping.h"
#import "GRPSchemaProducerMetadata.h"

@interface GRPSchemaGroupedMessagesClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) GRPSchemaGroupedMessagesGrouping *groupedBy; // ivar: _groupedBy
@property (nonatomic) BOOL hasGroupedBy; // ivar: _hasGroupedBy
@property (nonatomic) BOOL hasProducerMetadata; // ivar: _hasProducerMetadata
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *orderedMessages; // ivar: _orderedMessages
@property (retain, nonatomic) GRPSchemaProducerMetadata *producerMetadata; // ivar: _producerMetadata


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)orderedMessagesAtIndex:(NSUInteger)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)getAnyEventType;
-(void)addOrderedMessages:(id)arg0 ;
-(void)clearOrderedMessages;
-(void)deleteGroupedBy;
-(void)deleteOrderedMessages;
-(void)deleteProducerMetadata;
-(void)writeTo:(id)arg0 ;


@end


#endif