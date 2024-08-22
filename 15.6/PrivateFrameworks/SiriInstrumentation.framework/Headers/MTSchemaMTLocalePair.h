// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSCHEMAMTLOCALEPAIR_H
#define MTSCHEMAMTLOCALEPAIR_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MTSchemaMTLocalePair : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasSourceLocale;
@property (nonatomic) BOOL hasTargetLocale;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int sourceLocale; // ivar: _sourceLocale
@property (nonatomic) int targetLocale; // ivar: _targetLocale


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSourceLocale;
-(void)deleteTargetLocale;
-(void)writeTo:(id)arg0 ;


@end


#endif