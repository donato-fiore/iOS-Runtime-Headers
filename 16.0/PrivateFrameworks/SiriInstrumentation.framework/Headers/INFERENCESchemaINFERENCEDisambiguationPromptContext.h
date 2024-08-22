// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCEDISAMBIGUATIONPROMPTCONTEXT_H
#define INFERENCESCHEMAINFERENCEDISAMBIGUATIONPROMPTCONTEXT_H

@class NSArray, NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCEDisambiguationPromptContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *anonymizedEntitiesPresenteds; // ivar: _anonymizedEntitiesPresenteds
@property (copy, nonatomic) NSString *anonymizedEntitySelected; // ivar: _anonymizedEntitySelected
@property (nonatomic) BOOL hasAnonymizedEntitySelected; // ivar: _hasAnonymizedEntitySelected
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)anonymizedEntitiesPresentedCount;
-(NSUInteger)hash;
-(id)anonymizedEntitiesPresentedAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAnonymizedEntitiesPresented:(id)arg0 ;
-(void)clearAnonymizedEntitiesPresented;
-(void)deleteAnonymizedEntitiesPresented;
-(void)deleteAnonymizedEntitySelected;
-(void)writeTo:(id)arg0 ;


@end


#endif