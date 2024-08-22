// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RRSCHEMARRCLIENTEVENT_H
#define RRSCHEMARRCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "RRSchemaRREntityPoolResolveContext.h"
#import "RRSchemaRREntityPoolReturned.h"
#import "RRSchemaRRClientEventMetadata.h"
#import "RRSchemaRRUsoGraphTier1.h"

@interface RRSchemaRRClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) RRSchemaRREntityPoolResolveContext *entityPoolResolveContext; // ivar: _entityPoolResolveContext
@property (retain, nonatomic) RRSchemaRREntityPoolReturned *entityPoolReturned; // ivar: _entityPoolReturned
@property (retain, nonatomic) RRSchemaRRClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEntityPoolResolveContext; // ivar: _hasEntityPoolResolveContext
@property (nonatomic) BOOL hasEntityPoolReturned; // ivar: _hasEntityPoolReturned
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasRrUsoGraphTier1; // ivar: _hasRrUsoGraphTier1
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) RRSchemaRRUsoGraphTier1 *rrUsoGraphTier1; // ivar: _rrUsoGraphTier1
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