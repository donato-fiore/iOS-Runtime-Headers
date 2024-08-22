// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSESCHEMAPSECLIENTEVENT_H
#define PSESCHEMAPSECLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "PSESchemaPSECallSignalGenerated.h"
#import "PSESchemaPSEClientEventMetadata.h"
#import "PSESchemaPSEGenericSignalGenerated.h"
#import "SISchemaInstrumentationMessage.h"
#import "PSESchemaPSEMediaSignalGenerated.h"
#import "PSESchemaPSEMessageSignalGenerated.h"

@interface PSESchemaPSEClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) PSESchemaPSECallSignalGenerated *callSignalGenerated; // ivar: _callSignalGenerated
@property (retain, nonatomic) PSESchemaPSEClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (retain, nonatomic) PSESchemaPSEGenericSignalGenerated *genericSignalGenerated; // ivar: _genericSignalGenerated
@property (nonatomic) BOOL hasCallSignalGenerated; // ivar: _hasCallSignalGenerated
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasGenericSignalGenerated; // ivar: _hasGenericSignalGenerated
@property (nonatomic) BOOL hasMediaSignalGenerated; // ivar: _hasMediaSignalGenerated
@property (nonatomic) BOOL hasMessageSignalGenerated; // ivar: _hasMessageSignalGenerated
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) PSESchemaPSEMediaSignalGenerated *mediaSignalGenerated; // ivar: _mediaSignalGenerated
@property (retain, nonatomic) PSESchemaPSEMessageSignalGenerated *messageSignalGenerated; // ivar: _messageSignalGenerated
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


+(int)joinability;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)getComponentId;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)clockIsolationLevel;
-(int)componentName;
-(int)getAnyEventType;
-(void)deleteCallSignalGenerated;
-(void)deleteEventMetadata;
-(void)deleteGenericSignalGenerated;
-(void)deleteMediaSignalGenerated;
-(void)deleteMessageSignalGenerated;
-(void)writeTo:(id)arg0 ;


@end


#endif