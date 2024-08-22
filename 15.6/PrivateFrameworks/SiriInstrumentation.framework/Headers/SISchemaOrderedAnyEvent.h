// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMAORDEREDANYEVENT_H
#define SISCHEMAORDEREDANYEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "SISchemaAnyEvent.h"
#import "SISchemaCommonEventMetadata.h"

@interface SISchemaOrderedAnyEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaAnyEvent *event; // ivar: _event
@property (nonatomic) BOOL hasEvent; // ivar: _hasEvent
@property (nonatomic) BOOL hasMetadata; // ivar: _hasMetadata
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaCommonEventMetadata *metadata; // ivar: _metadata


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)getAnyEventType;
-(void)deleteEvent;
-(void)deleteMetadata;
-(void)unwrapMessageWithCompletion:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif