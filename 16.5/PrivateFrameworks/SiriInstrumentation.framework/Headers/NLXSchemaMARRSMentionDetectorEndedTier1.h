// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMAMARRSMENTIONDETECTORENDEDTIER1_H
#define NLXSCHEMAMARRSMENTIONDETECTORENDEDTIER1_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface NLXSchemaMARRSMentionDetectorEndedTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSArray *mentionDetectorSpansTier1s; // ivar: _mentionDetectorSpansTier1s


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)mentionDetectorSpansTier1Count;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)mentionDetectorSpansTier1AtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addMentionDetectorSpansTier1:(id)arg0 ;
-(void)clearMentionDetectorSpansTier1;
-(void)deleteLinkId;
-(void)deleteMentionDetectorSpansTier1;
-(void)writeTo:(id)arg0 ;


@end


#endif