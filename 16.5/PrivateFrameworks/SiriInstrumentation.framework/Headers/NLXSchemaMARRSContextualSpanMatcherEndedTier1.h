// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMAMARRSCONTEXTUALSPANMATCHERENDEDTIER1_H
#define NLXSCHEMAMARRSCONTEXTUALSPANMATCHERENDEDTIER1_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface NLXSchemaMARRSContextualSpanMatcherEndedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *contextualSpansTier1s; // ivar: _contextualSpansTier1s
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)contextualSpansTier1Count;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)contextualSpansTier1AtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addContextualSpansTier1:(id)arg0 ;
-(void)clearContextualSpansTier1;
-(void)deleteContextualSpansTier1;
-(void)deleteLinkId;
-(void)writeTo:(id)arg0 ;


@end


#endif