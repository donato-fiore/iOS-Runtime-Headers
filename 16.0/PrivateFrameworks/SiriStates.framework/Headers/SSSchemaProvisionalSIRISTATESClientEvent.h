// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSSCHEMAPROVISIONALSIRISTATESCLIENTEVENT_H
#define SSSCHEMAPROVISIONALSIRISTATESCLIENTEVENT_H

@class SISchemaTopLevelUnionType, NSData;


#import "SSSchemaProvisionalSIRISTATESEventMetadata.h"
#import "SSSchemaProvisionalSiriStateTransitionEvent.h"

@interface SSSchemaProvisionalSIRISTATESClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SSSchemaProvisionalSIRISTATESEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasStateTransitionEvent; // ivar: _hasStateTransitionEvent
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SSSchemaProvisionalSiriStateTransitionEvent *stateTransitionEvent; // ivar: _stateTransitionEvent
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isProvisional;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)getTypeId;
-(id)getVersion;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(int)getAnyEventType;
-(void)writeTo:(id)arg0 ;


@end


#endif