// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASRSCHEMAASRRECOGNITIONRESULTTIER1_H
#define ASRSCHEMAASRRECOGNITIONRESULTTIER1_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface ASRSchemaASRRecognitionResultTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSArray *tokens; // ivar: _tokens


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)tokensAtIndex:(NSUInteger)arg0 ;
-(void)addTokens:(id)arg0 ;
-(void)clearTokens;
-(void)writeTo:(id)arg0 ;


@end


#endif