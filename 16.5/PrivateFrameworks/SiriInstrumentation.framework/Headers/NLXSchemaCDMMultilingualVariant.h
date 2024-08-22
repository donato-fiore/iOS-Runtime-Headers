// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMACDMMULTILINGUALVARIANT_H
#define NLXSCHEMACDMMULTILINGUALVARIANT_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface NLXSchemaCDMMultilingualVariant : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasLanguageVariantConfidenceScore;
@property (nonatomic) BOOL hasLanguageVariantName; // ivar: _hasLanguageVariantName
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat languageVariantConfidenceScore; // ivar: _languageVariantConfidenceScore
@property (copy, nonatomic) NSString *languageVariantName; // ivar: _languageVariantName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteLanguageVariantConfidenceScore;
-(void)deleteLanguageVariantName;
-(void)writeTo:(id)arg0 ;


@end


#endif