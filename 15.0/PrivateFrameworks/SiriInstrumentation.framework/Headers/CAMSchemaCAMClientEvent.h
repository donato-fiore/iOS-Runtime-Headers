// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMSCHEMACAMCLIENTEVENT_H
#define CAMSCHEMACAMCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "CAMSchemaCAMClientEventMetadata.h"
#import "CAMSchemaCAMModelExecuted.h"
#import "CAMSchemaCAMRequestReceived.h"
#import "CAMSchemaCAMResponseGenerated.h"

@interface CAMSchemaCAMClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) CAMSchemaCAMClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasModelExecuted; // ivar: _hasModelExecuted
@property (nonatomic) BOOL hasRequestReceived; // ivar: _hasRequestReceived
@property (nonatomic) BOOL hasResponseGenerated; // ivar: _hasResponseGenerated
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) CAMSchemaCAMModelExecuted *modelExecuted; // ivar: _modelExecuted
@property (retain, nonatomic) CAMSchemaCAMRequestReceived *requestReceived; // ivar: _requestReceived
@property (retain, nonatomic) CAMSchemaCAMResponseGenerated *responseGenerated; // ivar: _responseGenerated
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