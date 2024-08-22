// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMALOCALEIDENTIFIER_H
#define SISCHEMALOCALEIDENTIFIER_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaLocaleIdentifier : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (nonatomic) BOOL hasCountryCode; // ivar: _hasCountryCode
@property (nonatomic) BOOL hasLanguageCode; // ivar: _hasLanguageCode
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *languageCode; // ivar: _languageCode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif