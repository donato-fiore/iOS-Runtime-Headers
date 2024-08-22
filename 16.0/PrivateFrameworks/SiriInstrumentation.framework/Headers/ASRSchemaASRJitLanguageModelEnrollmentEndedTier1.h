// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASRSCHEMAASRJITLANGUAGEMODELENROLLMENTENDEDTIER1_H
#define ASRSCHEMAASRJITLANGUAGEMODELENROLLMENTENDEDTIER1_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface ASRSchemaASRJitLanguageModelEnrollmentEndedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *dialogContexts; // ivar: _dialogContexts
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)dialogContextCount;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dialogContextAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addDialogContext:(id)arg0 ;
-(void)clearDialogContext;
-(void)deleteDialogContext;
-(void)deleteLinkId;
-(void)writeTo:(id)arg0 ;


@end


#endif