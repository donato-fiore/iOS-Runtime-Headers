// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSCONTACTSUGGESTIONACCURACYSIGNALREPORTED_H
#define PLUSSCHEMAPLUSCONTACTSUGGESTIONACCURACYSIGNALREPORTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "PLUSSchemaPLUSSuggestionAccuracySignal.h"
#import "SISchemaUUID.h"

@interface PLUSSchemaPLUSContactSuggestionAccuracySignalReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSSuggestionAccuracySignal *accuracySignal; // ivar: _accuracySignal
@property (nonatomic) BOOL hasAccuracySignal; // ivar: _hasAccuracySignal
@property (nonatomic) BOOL hasOriginalPlusId; // ivar: _hasOriginalPlusId
@property (nonatomic) BOOL hasSuggestionId; // ivar: _hasSuggestionId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *originalPlusId; // ivar: _originalPlusId
@property (retain, nonatomic) SISchemaUUID *suggestionId; // ivar: _suggestionId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAccuracySignal;
-(void)deleteOriginalPlusId;
-(void)deleteSuggestionId;
-(void)writeTo:(id)arg0 ;


@end


#endif