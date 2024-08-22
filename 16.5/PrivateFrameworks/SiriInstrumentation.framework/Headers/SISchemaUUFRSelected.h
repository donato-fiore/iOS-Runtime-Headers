// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMAUUFRSELECTED_H
#define SISCHEMAUUFRSELECTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUFRCasinoCardSelected.h"
#import "SISchemaUUFRSnippetViewSelected.h"

@interface SISchemaUUFRSelected : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUFRCasinoCardSelected *casinoCardSelected; // ivar: _casinoCardSelected
@property (nonatomic) BOOL hasCasinoCardSelected; // ivar: _hasCasinoCardSelected
@property (nonatomic) BOOL hasSnippetViewSelected; // ivar: _hasSnippetViewSelected
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUFRSnippetViewSelected *snippetViewSelected; // ivar: _snippetViewSelected
@property (readonly, nonatomic) NSUInteger whichSelectionevent; // ivar: _whichSelectionevent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCasinoCardSelected;
-(void)deleteSnippetViewSelected;
-(void)writeTo:(id)arg0 ;


@end


#endif