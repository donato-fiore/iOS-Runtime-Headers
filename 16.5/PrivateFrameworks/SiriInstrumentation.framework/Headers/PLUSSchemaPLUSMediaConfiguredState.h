// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSMEDIACONFIGUREDSTATE_H
#define PLUSSCHEMAPLUSMEDIACONFIGUREDSTATE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface PLUSSchemaPLUSMediaConfiguredState : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasShadowLogging;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL shadowLogging; // ivar: _shadowLogging


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteShadowLogging;
-(void)writeTo:(id)arg0 ;


@end


#endif