// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMAUUFRSNIPPETVIEWSELECTED_H
#define SISCHEMAUUFRSNIPPETVIEWSELECTED_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaUUFRSnippetViewSelected : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasSnippetAceId; // ivar: _hasSnippetAceId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *snippetAceId; // ivar: _snippetAceId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSnippetAceId;
-(void)writeTo:(id)arg0 ;


@end


#endif