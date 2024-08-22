// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAANYEVENT_H
#define SISCHEMAANYEVENT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaAnyEvent : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int anyEventType; // ivar: _anyEventType
@property (nonatomic) BOOL hasAnyEventType;
@property (nonatomic) BOOL hasPayload; // ivar: _hasPayload
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSData *payload; // ivar: _payload


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)topLevelUnionTypeClass;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithAnyEventType:(int)arg0 payload:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)unwrap;
-(void)unwrapMessageWithCompletion:(id)arg0 ;
-(void)willProduceDictionaryRepresentation:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif