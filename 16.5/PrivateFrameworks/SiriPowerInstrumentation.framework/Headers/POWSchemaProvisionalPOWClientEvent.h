// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWSCHEMAPROVISIONALPOWCLIENTEVENT_H
#define POWSCHEMAPROVISIONALPOWCLIENTEVENT_H

@class SISchemaTopLevelUnionType, NSData, SISchemaRequestLinkInfo;


#import "POWSchemaProvisionalPOWUsage.h"

@interface POWSchemaProvisionalPOWClientEvent : SISchemaTopLevelUnionType

@property (nonatomic) BOOL hasLink; // ivar: _hasLink
@property (nonatomic) BOOL hasUsage; // ivar: _hasUsage
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaRequestLinkInfo *link; // ivar: _link
@property (retain, nonatomic) POWSchemaProvisionalPOWUsage *usage; // ivar: _usage
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
-(void)deleteLink;
-(void)deleteUsage;
-(void)writeTo:(id)arg0 ;


@end


#endif