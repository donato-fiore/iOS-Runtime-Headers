// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HALSCHEMAHALCLIENTEVENT_H
#define HALSCHEMAHALCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "HALSchemaHALContextCollectorFetchContext.h"
#import "HALSchemaHALCrossDeviceCommandExecutionContext.h"
#import "HALSchemaHALClientEventMetadata.h"
#import "HALSchemaHALForceFetchContext.h"
#import "HALSchemaHALLocalFetchContext.h"

@interface HALSchemaHALClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) HALSchemaHALContextCollectorFetchContext *contextCollectorFetchContext; // ivar: _contextCollectorFetchContext
@property (retain, nonatomic) HALSchemaHALCrossDeviceCommandExecutionContext *crossDeviceCommandContext; // ivar: _crossDeviceCommandContext
@property (retain, nonatomic) HALSchemaHALClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (retain, nonatomic) HALSchemaHALForceFetchContext *forceFetchContext; // ivar: _forceFetchContext
@property (nonatomic) BOOL hasContextCollectorFetchContext; // ivar: _hasContextCollectorFetchContext
@property (nonatomic) BOOL hasCrossDeviceCommandContext; // ivar: _hasCrossDeviceCommandContext
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasForceFetchContext; // ivar: _hasForceFetchContext
@property (nonatomic) BOOL hasLocalFetchContext; // ivar: _hasLocalFetchContext
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) HALSchemaHALLocalFetchContext *localFetchContext; // ivar: _localFetchContext
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(int)getAnyEventType;
-(void)writeTo:(id)arg0 ;


@end


#endif