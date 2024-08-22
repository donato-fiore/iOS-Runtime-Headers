// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXPSIRISCHEMAEXPSIRICLIENTEVENT_H
#define EXPSIRISCHEMAEXPSIRICLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "EXPSiriSchemaEXPAllocationChangelogSnapshot.h"
#import "EXPSiriSchemaEXPAllocationSnapshot.h"

@interface EXPSiriSchemaEXPSiriClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) EXPSiriSchemaEXPAllocationChangelogSnapshot *allocationChangelogSnapshot; // ivar: _allocationChangelogSnapshot
@property (retain, nonatomic) EXPSiriSchemaEXPAllocationSnapshot *allocationSnapshot; // ivar: _allocationSnapshot
@property (nonatomic) BOOL hasAllocationChangelogSnapshot; // ivar: _hasAllocationChangelogSnapshot
@property (nonatomic) BOOL hasAllocationSnapshot; // ivar: _hasAllocationSnapshot
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)getAnyEventType;
-(void)deleteAllocationChangelogSnapshot;
-(void)deleteAllocationSnapshot;
-(void)writeTo:(id)arg0 ;


@end


#endif