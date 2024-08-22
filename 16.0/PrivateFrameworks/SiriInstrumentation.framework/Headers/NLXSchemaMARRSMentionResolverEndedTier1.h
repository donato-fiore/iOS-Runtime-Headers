// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLXSCHEMAMARRSMENTIONRESOLVERENDEDTIER1_H
#define NLXSCHEMAMARRSMENTIONRESOLVERENDEDTIER1_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface NLXSchemaMARRSMentionResolverEndedTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSArray *mentionResolverSpansTier1s; // ivar: _mentionResolverSpansTier1s


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)mentionResolverSpansTier1Count;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)mentionResolverSpansTier1AtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addMentionResolverSpansTier1:(id)arg0 ;
-(void)clearMentionResolverSpansTier1;
-(void)deleteLinkId;
-(void)deleteMentionResolverSpansTier1;
-(void)writeTo:(id)arg0 ;


@end


#endif