// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCEPROMPTCONTEXT_H
#define INFERENCESCHEMAINFERENCEPROMPTCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCEConfirmationPromptContext.h"
#import "INFERENCESchemaINFERENCEDisambiguationPromptContext.h"

@interface INFERENCESchemaINFERENCEPromptContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) INFERENCESchemaINFERENCEConfirmationPromptContext *confirmationPromptContext; // ivar: _confirmationPromptContext
@property (retain, nonatomic) INFERENCESchemaINFERENCEDisambiguationPromptContext *disambiguationPromptContext; // ivar: _disambiguationPromptContext
@property (nonatomic) BOOL hasConfirmationPromptContext; // ivar: _hasConfirmationPromptContext
@property (nonatomic) BOOL hasDisambiguationPromptContext; // ivar: _hasDisambiguationPromptContext
@property (nonatomic) BOOL hasTag;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int tag; // ivar: _tag
@property (readonly, nonatomic) NSUInteger whichPromptcontext; // ivar: _whichPromptcontext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteConfirmationPromptContext;
-(void)deleteDisambiguationPromptContext;
-(void)deleteTag;
-(void)writeTo:(id)arg0 ;


@end


#endif