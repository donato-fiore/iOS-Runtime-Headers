// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HOMESCHEMAHOMECLIENTEVENT_H
#define HOMESCHEMAHOMECLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "HOMESchemaHOMEAssistantDeviceBirthday.h"
#import "HOMESchemaHOMEAssistantInfoReported.h"
#import "HOMESchemaHOMEClientEventMetadata.h"

@interface HOMESchemaHOMEClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) HOMESchemaHOMEAssistantDeviceBirthday *assistantDeviceBirthday; // ivar: _assistantDeviceBirthday
@property (retain, nonatomic) HOMESchemaHOMEAssistantInfoReported *assistantInfoReported; // ivar: _assistantInfoReported
@property (retain, nonatomic) HOMESchemaHOMEClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasAssistantDeviceBirthday; // ivar: _hasAssistantDeviceBirthday
@property (nonatomic) BOOL hasAssistantInfoReported; // ivar: _hasAssistantInfoReported
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


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
-(void)deleteAssistantDeviceBirthday;
-(void)deleteAssistantInfoReported;
-(void)deleteEventMetadata;
-(void)writeTo:(id)arg0 ;


@end


#endif