// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMAPROVISIONALEVENT_H
#define SISCHEMAPROVISIONALEVENT_H

@class NSData, NSString;


#import "SISchemaTopLevelUnionType.h"
#import "SISchemaAnyEvent.h"

@interface SISchemaProvisionalEvent : SISchemaTopLevelUnionType {
    ? _has;
}


@property (retain, nonatomic) SISchemaAnyEvent *anyEvent; // ivar: _anyEvent
@property (nonatomic) BOOL hasAnyEvent; // ivar: _hasAnyEvent
@property (nonatomic) BOOL hasTypeId; // ivar: _hasTypeId
@property (nonatomic) BOOL hasVersion;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *typeId; // ivar: _typeId
@property (nonatomic) NSInteger version; // ivar: _version


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
-(void)deleteAnyEvent;
-(void)deleteTypeId;
-(void)deleteVersion;
-(void)writeTo:(id)arg0 ;


@end


#endif