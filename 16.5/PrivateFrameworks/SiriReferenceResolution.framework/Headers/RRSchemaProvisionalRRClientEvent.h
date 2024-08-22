// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RRSCHEMAPROVISIONALRRCLIENTEVENT_H
#define RRSCHEMAPROVISIONALRRCLIENTEVENT_H

@class SISchemaTopLevelUnionType, NSData;


#import "RRSchemaProvisionalRREntityPoolResolveContext.h"
#import "RRSchemaProvisionalRREntityPoolReturned.h"
#import "RRSchemaProvisionalRRClientEventMetadata.h"
#import "RRSchemaProvisionalPullerContext.h"
#import "RRSchemaProvisionalRRUsoGraphTier1.h"

@interface RRSchemaProvisionalRRClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) RRSchemaProvisionalRREntityPoolResolveContext *entityPoolResolveContext; // ivar: _entityPoolResolveContext
@property (retain, nonatomic) RRSchemaProvisionalRREntityPoolReturned *entityPoolReturned; // ivar: _entityPoolReturned
@property (retain, nonatomic) RRSchemaProvisionalRRClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEntityPoolResolveContext; // ivar: _hasEntityPoolResolveContext
@property (nonatomic) BOOL hasEntityPoolReturned; // ivar: _hasEntityPoolReturned
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasPullerContext; // ivar: _hasPullerContext
@property (nonatomic) BOOL hasRrUsoGraphTier1; // ivar: _hasRrUsoGraphTier1
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) RRSchemaProvisionalPullerContext *pullerContext; // ivar: _pullerContext
@property (retain, nonatomic) RRSchemaProvisionalRRUsoGraphTier1 *rrUsoGraphTier1; // ivar: _rrUsoGraphTier1
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