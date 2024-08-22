// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMAISOLOCALE_H
#define SISCHEMAISOLOCALE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaISOLocale : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int countryCode; // ivar: _countryCode
@property (nonatomic) BOOL hasCountryCode;
@property (nonatomic) BOOL hasLanguageCode;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int languageCode; // ivar: _languageCode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCountryCode;
-(void)deleteLanguageCode;
-(void)writeTo:(id)arg0 ;


@end


#endif