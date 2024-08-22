// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASRSCHEMAASRTOKENTIER1_H
#define ASRSCHEMAASRTOKENTIER1_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ASRSchemaASRTokenTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasIpaPhoneSequence; // ivar: _hasIpaPhoneSequence
@property (nonatomic) BOOL hasPhoneSequence; // ivar: _hasPhoneSequence
@property (nonatomic) BOOL hasText; // ivar: _hasText
@property (copy, nonatomic) NSString *ipaPhoneSequence; // ivar: _ipaPhoneSequence
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *phoneSequence; // ivar: _phoneSequence
@property (copy, nonatomic) NSString *text; // ivar: _text


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIpaPhoneSequence;
-(void)deletePhoneSequence;
-(void)deleteText;
-(void)writeTo:(id)arg0 ;


@end


#endif