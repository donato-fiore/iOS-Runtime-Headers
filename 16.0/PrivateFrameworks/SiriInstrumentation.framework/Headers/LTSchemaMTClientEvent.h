// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LTSCHEMAMTCLIENTEVENT_H
#define LTSCHEMAMTCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "LTSchemaASRSpeechTranslationEvent.h"
#import "LTSchemaBatchTranslationEvent.h"
#import "LTSchemaDisambiguationSpeechTranslationEvent.h"
#import "SISchemaInstrumentationMessage.h"
#import "LTSchemaLIDSpeechTranslationEvent.h"
#import "LTSchemaMTSpeechTranslationEvent.h"
#import "LTSchemaSafariFeedbackEvent.h"
#import "LTSchemaSpeechTranslationEvent.h"
#import "LTSchemaTTSSpeechTranslationEvent.h"

@interface LTSchemaMTClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) LTSchemaASRSpeechTranslationEvent *asrSpeechTranslationEvent; // ivar: _asrSpeechTranslationEvent
@property (retain, nonatomic) LTSchemaBatchTranslationEvent *batchTranslationEvent; // ivar: _batchTranslationEvent
@property (retain, nonatomic) LTSchemaDisambiguationSpeechTranslationEvent *disambiguationSpeechTranslationEvent; // ivar: _disambiguationSpeechTranslationEvent
@property (nonatomic) BOOL hasAsrSpeechTranslationEvent; // ivar: _hasAsrSpeechTranslationEvent
@property (nonatomic) BOOL hasBatchTranslationEvent; // ivar: _hasBatchTranslationEvent
@property (nonatomic) BOOL hasDisambiguationSpeechTranslationEvent; // ivar: _hasDisambiguationSpeechTranslationEvent
@property (nonatomic) BOOL hasLidSpeechTranslationEvent; // ivar: _hasLidSpeechTranslationEvent
@property (nonatomic) BOOL hasMtSpeechTranslationEvent; // ivar: _hasMtSpeechTranslationEvent
@property (nonatomic) BOOL hasSafariFeedbackEvent; // ivar: _hasSafariFeedbackEvent
@property (nonatomic) BOOL hasSpeechTranslationEvent; // ivar: _hasSpeechTranslationEvent
@property (nonatomic) BOOL hasTtsspeechTranslationEvent; // ivar: _hasTtsspeechTranslationEvent
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) LTSchemaLIDSpeechTranslationEvent *lidSpeechTranslationEvent; // ivar: _lidSpeechTranslationEvent
@property (retain, nonatomic) LTSchemaMTSpeechTranslationEvent *mtSpeechTranslationEvent; // ivar: _mtSpeechTranslationEvent
@property (retain, nonatomic) LTSchemaSafariFeedbackEvent *safariFeedbackEvent; // ivar: _safariFeedbackEvent
@property (retain, nonatomic) LTSchemaSpeechTranslationEvent *speechTranslationEvent; // ivar: _speechTranslationEvent
@property (retain, nonatomic) LTSchemaTTSSpeechTranslationEvent *ttsspeechTranslationEvent; // ivar: _ttsspeechTranslationEvent
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)getAnyEventType;
-(void)deleteAsrSpeechTranslationEvent;
-(void)deleteBatchTranslationEvent;
-(void)deleteDisambiguationSpeechTranslationEvent;
-(void)deleteLidSpeechTranslationEvent;
-(void)deleteMtSpeechTranslationEvent;
-(void)deleteSafariFeedbackEvent;
-(void)deleteSpeechTranslationEvent;
-(void)writeTo:(id)arg0 ;


@end


#endif