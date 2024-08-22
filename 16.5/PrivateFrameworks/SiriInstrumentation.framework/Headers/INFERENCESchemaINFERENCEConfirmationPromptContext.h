// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECONFIRMATIONPROMPTCONTEXT_H
#define INFERENCESCHEMAINFERENCECONFIRMATIONPROMPTCONTEXT_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCEConfirmationPromptContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *anonymizedEntityPresented; // ivar: _anonymizedEntityPresented
@property (nonatomic) BOOL hasAnonymizedEntityPresented; // ivar: _hasAnonymizedEntityPresented
@property (nonatomic) BOOL hasResolution;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int resolution; // ivar: _resolution


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAnonymizedEntityPresented;
-(void)deleteResolution;
-(void)writeTo:(id)arg0 ;


@end


#endif