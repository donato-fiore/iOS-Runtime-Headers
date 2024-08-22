// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAREQUESTLINK_H
#define SISCHEMAREQUESTLINK_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "SISchemaRequestLinkInfo.h"

@interface SISchemaRequestLink : SISchemaTopLevelUnionType

@property (nonatomic) BOOL hasSource; // ivar: _hasSource
@property (nonatomic) BOOL hasTarget; // ivar: _hasTarget
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaRequestLinkInfo *source; // ivar: _source
@property (retain, nonatomic) SISchemaRequestLinkInfo *target; // ivar: _target


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
-(void)deleteSource;
-(void)deleteTarget;
-(void)writeTo:(id)arg0 ;


@end


#endif