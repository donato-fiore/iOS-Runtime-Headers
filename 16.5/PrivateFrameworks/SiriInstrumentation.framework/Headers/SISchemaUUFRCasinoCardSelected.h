// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMAUUFRCASINOCARDSELECTED_H
#define SISCHEMAUUFRCASINOCARDSELECTED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaUUFRCasinoCardSelected : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *cardSectionId; // ivar: _cardSectionId
@property (nonatomic) BOOL hasCardSectionId; // ivar: _hasCardSectionId
@property (nonatomic) BOOL hasOrdinalCardSectionPosition;
@property (nonatomic) BOOL hasSnippetAceId; // ivar: _hasSnippetAceId
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int ordinalCardSectionPosition; // ivar: _ordinalCardSectionPosition
@property (copy, nonatomic) NSString *snippetAceId; // ivar: _snippetAceId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCardSectionId;
-(void)deleteOrdinalCardSectionPosition;
-(void)deleteSnippetAceId;
-(void)writeTo:(id)arg0 ;


@end


#endif