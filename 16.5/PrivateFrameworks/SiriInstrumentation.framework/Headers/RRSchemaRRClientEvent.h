// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RRSCHEMARRCLIENTEVENT_H
#define RRSCHEMARRCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "RRSchemaRREntityPoolResolveContext.h"
#import "RRSchemaRREntityPoolReturned.h"
#import "RRSchemaRRClientEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "RRSchemaRRPullerContext.h"
#import "RRSchemaRRUsoGraphTier1.h"

@interface RRSchemaRRClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) RRSchemaRREntityPoolResolveContext *entityPoolResolveContext; // ivar: _entityPoolResolveContext
@property (retain, nonatomic) RRSchemaRREntityPoolReturned *entityPoolReturned; // ivar: _entityPoolReturned
@property (retain, nonatomic) RRSchemaRRClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEntityPoolResolveContext; // ivar: _hasEntityPoolResolveContext
@property (nonatomic) BOOL hasEntityPoolReturned; // ivar: _hasEntityPoolReturned
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasPullerContext; // ivar: _hasPullerContext
@property (nonatomic) BOOL hasRrUsoGraphTier1; // ivar: _hasRrUsoGraphTier1
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) RRSchemaRRPullerContext *pullerContext; // ivar: _pullerContext
@property (retain, nonatomic) RRSchemaRRUsoGraphTier1 *rrUsoGraphTier1; // ivar: _rrUsoGraphTier1
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
-(void)deleteEntityPoolResolveContext;
-(void)deleteEntityPoolReturned;
-(void)deleteEventMetadata;
-(void)deletePullerContext;
-(void)deleteRrUsoGraphTier1;
-(void)writeTo:(id)arg0 ;


@end


#endif