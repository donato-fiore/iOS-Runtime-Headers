// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLOWSCHEMAFLOWPEGASUSCONTEXT_H
#define FLOWSCHEMAFLOWPEGASUSCONTEXT_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWSchemaFLOWCrossIntentRankerResponse.h"
#import "PEGASUSSchemaPEGASUSIntent.h"
#import "FLOWSchemaFLOWKGQAExecution.h"
#import "SISchemaUUID.h"
#import "FLOWSchemaFLOWSPORTSExecution.h"
#import "FLOWSchemaFLOWWebAnswerExecution.h"

@interface FLOWSchemaFLOWPegasusContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) FLOWSchemaFLOWCrossIntentRankerResponse *crossIntentRankerResponse; // ivar: _crossIntentRankerResponse
@property (nonatomic) BOOL hasCrossIntentRankerResponse; // ivar: _hasCrossIntentRankerResponse
@property (nonatomic) BOOL hasIntent; // ivar: _hasIntent
@property (nonatomic) BOOL hasIsHandOffExecution;
@property (nonatomic) BOOL hasKgQAExecution; // ivar: _hasKgQAExecution
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasPrimaryProvider;
@property (nonatomic) BOOL hasProductArea;
@property (nonatomic) BOOL hasSportsExecution; // ivar: _hasSportsExecution
@property (nonatomic) BOOL hasWebAnswerExecution; // ivar: _hasWebAnswerExecution
@property (retain, nonatomic) PEGASUSSchemaPEGASUSIntent *intent; // ivar: _intent
@property (nonatomic) BOOL isHandOffExecution; // ivar: _isHandOffExecution
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) FLOWSchemaFLOWKGQAExecution *kgQAExecution; // ivar: _kgQAExecution
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSArray *otherProviders; // ivar: _otherProviders
@property (nonatomic) int primaryProvider; // ivar: _primaryProvider
@property (nonatomic) int productArea; // ivar: _productArea
@property (retain, nonatomic) FLOWSchemaFLOWSPORTSExecution *sportsExecution; // ivar: _sportsExecution
@property (retain, nonatomic) FLOWSchemaFLOWWebAnswerExecution *webAnswerExecution; // ivar: _webAnswerExecution


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(int)otherProvidersAtIndex:(NSUInteger)arg0 ;
-(void)addOtherProviders:(int)arg0 ;
-(void)clearOtherProviders;
-(void)deleteCrossIntentRankerResponse;
-(void)deleteIntent;
-(void)deleteIsHandOffExecution;
-(void)deleteKgQAExecution;
-(void)deleteLinkId;
-(void)deleteOtherProviders;
-(void)deletePrimaryProvider;
-(void)deleteProductArea;
-(void)deleteSportsExecution;
-(void)deleteWebAnswerExecution;
-(void)writeTo:(id)arg0 ;


@end


#endif