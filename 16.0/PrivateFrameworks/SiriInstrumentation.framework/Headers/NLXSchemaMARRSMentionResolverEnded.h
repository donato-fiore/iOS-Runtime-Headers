// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLXSCHEMAMARRSMENTIONRESOLVERENDED_H
#define NLXSCHEMAMARRSMENTIONRESOLVERENDED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface NLXSchemaMARRSMentionResolverEnded : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSArray *mentionResolverSpans; // ivar: _mentionResolverSpans


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)mentionResolverSpansAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addMentionResolverSpans:(id)arg0 ;
-(void)clearMentionResolverSpans;
-(void)deleteLinkId;
-(void)deleteMentionResolverSpans;
-(void)writeTo:(id)arg0 ;


@end


#endif