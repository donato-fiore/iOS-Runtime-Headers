// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SICSCHEMAPROVISIONALSICCLIENTEVENT_H
#define SICSCHEMAPROVISIONALSICCLIENTEVENT_H

@class SISchemaTopLevelUnionType, NSData;


#import "SICSchemaProvisionalSICClientEventMetadata.h"
#import "SICSchemaProvisionalSICInvocationContext.h"

@interface SICSchemaProvisionalSICClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SICSchemaProvisionalSICClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasSiriInCallInvocationContext; // ivar: _hasSiriInCallInvocationContext
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SICSchemaProvisionalSICInvocationContext *siriInCallInvocationContext; // ivar: _siriInCallInvocationContext
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