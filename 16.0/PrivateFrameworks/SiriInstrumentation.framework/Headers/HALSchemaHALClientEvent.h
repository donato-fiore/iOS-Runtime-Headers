// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HALSCHEMAHALCLIENTEVENT_H
#define HALSCHEMAHALCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "HALSchemaHALContextCollectorFetchContext.h"
#import "HALSchemaHALCrossDeviceCommandExecutionContext.h"
#import "HALSchemaHALClientEventMetadata.h"
#import "HALSchemaHALForceFetchContext.h"
#import "SISchemaInstrumentationMessage.h"
#import "HALSchemaHALLocalFetchContext.h"

@interface HALSchemaHALClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) HALSchemaHALContextCollectorFetchContext *contextCollectorFetchContext; // ivar: _contextCollectorFetchContext
@property (retain, nonatomic) HALSchemaHALCrossDeviceCommandExecutionContext *crossDeviceCommandContext; // ivar: _crossDeviceCommandContext
@property (retain, nonatomic) HALSchemaHALClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (retain, nonatomic) HALSchemaHALForceFetchContext *forceFetchContext; // ivar: _forceFetchContext
@property (nonatomic) BOOL hasContextCollectorFetchContext; // ivar: _hasContextCollectorFetchContext
@property (nonatomic) BOOL hasCrossDeviceCommandContext; // ivar: _hasCrossDeviceCommandContext
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasForceFetchContext; // ivar: _hasForceFetchContext
@property (nonatomic) BOOL hasLocalFetchContext; // ivar: _hasLocalFetchContext
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) HALSchemaHALLocalFetchContext *localFetchContext; // ivar: _localFetchContext
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
-(int)componentName;
-(int)getAnyEventType;
-(void)deleteContextCollectorFetchContext;
-(void)deleteCrossDeviceCommandContext;
-(void)deleteEventMetadata;
-(void)deleteForceFetchContext;
-(void)deleteLocalFetchContext;
-(void)writeTo:(id)arg0 ;


@end


#endif