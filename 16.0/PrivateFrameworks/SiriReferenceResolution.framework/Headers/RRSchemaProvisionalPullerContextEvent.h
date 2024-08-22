// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RRSCHEMAPROVISIONALPULLERCONTEXTEVENT_H
#define RRSCHEMAPROVISIONALPULLERCONTEXTEVENT_H

@class SISchemaTopLevelUnionType, NSData;


#import "RRSchemaProvisionalPullerContext.h"

@interface RRSchemaProvisionalPullerContextEvent : SISchemaTopLevelUnionType

@property (nonatomic) BOOL hasPullerContext; // ivar: _hasPullerContext
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) RRSchemaProvisionalPullerContext *pullerContext; // ivar: _pullerContext
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