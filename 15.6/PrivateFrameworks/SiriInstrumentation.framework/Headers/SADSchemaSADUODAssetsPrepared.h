// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SADSCHEMASADUODASSETSPREPARED_H
#define SADSCHEMASADUODASSETSPREPARED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SADSchemaSADUODAssetsPrepared : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int elapsedSeconds; // ivar: _elapsedSeconds
@property (nonatomic) BOOL hasElapsedSeconds;
@property (nonatomic) BOOL hasLocale;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int locale; // ivar: _locale


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteElapsedSeconds;
-(void)deleteLocale;
-(void)writeTo:(id)arg0 ;


@end


#endif