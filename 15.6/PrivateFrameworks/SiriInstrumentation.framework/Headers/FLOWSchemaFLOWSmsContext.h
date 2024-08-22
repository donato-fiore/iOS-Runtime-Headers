// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLOWSCHEMAFLOWSMSCONTEXT_H
#define FLOWSCHEMAFLOWSMSCONTEXT_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWSchemaFLOWSmsAudioContext.h"
#import "FLOWSchemaFLOWLanguageConfidenceMatrix.h"
#import "FLOWSchemaFLOWSmsTextContext.h"
#import "FLOWSchemaFLOWTextMessageLength.h"

@interface FLOWSchemaFLOWSmsContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) FLOWSchemaFLOWSmsAudioContext *audioContext; // ivar: _audioContext
@property (nonatomic) BOOL emojiUsed; // ivar: _emojiUsed
@property (nonatomic) BOOL hasAudioContext; // ivar: _hasAudioContext
@property (nonatomic) BOOL hasEmojiUsed;
@property (nonatomic) BOOL hasKeyboardUsed;
@property (nonatomic) BOOL hasLanguageConfidenceMatrix; // ivar: _hasLanguageConfidenceMatrix
@property (nonatomic) BOOL hasMessageDurationMs; // ivar: _hasMessageDurationMs
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) BOOL hasTextContext; // ivar: _hasTextContext
@property (nonatomic) BOOL hasTextMessageLength; // ivar: _hasTextMessageLength
@property (copy, nonatomic) NSArray *isGroupMessages; // ivar: _isGroupMessages
@property (copy, nonatomic) NSArray *isMultiLinguals; // ivar: _isMultiLinguals
@property (copy, nonatomic) NSArray *isReadables; // ivar: _isReadables
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL keyboardUsed; // ivar: _keyboardUsed
@property (retain, nonatomic) FLOWSchemaFLOWLanguageConfidenceMatrix *languageConfidenceMatrix; // ivar: _languageConfidenceMatrix
@property (nonatomic) unsigned int messageDurationMs; // ivar: _messageDurationMs
@property (nonatomic) int messageType; // ivar: _messageType
@property (copy, nonatomic) NSArray *personTypes; // ivar: _personTypes
@property (copy, nonatomic) NSArray *readMessageTypes; // ivar: _readMessageTypes
@property (copy, nonatomic) NSArray *recipientTypes; // ivar: _recipientTypes
@property (retain, nonatomic) FLOWSchemaFLOWSmsTextContext *textContext; // ivar: _textContext
@property (retain, nonatomic) FLOWSchemaFLOWTextMessageLength *textMessageLength; // ivar: _textMessageLength
@property (readonly, nonatomic) NSUInteger whichMessagecontext; // ivar: _whichMessagecontext
@property (readonly, nonatomic) NSUInteger whichMessagesize; // ivar: _whichMessagesize


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGroupMessageAtIndex:(NSUInteger)arg0 ;
-(BOOL)isMultiLingualAtIndex:(NSUInteger)arg0 ;
-(BOOL)isReadableAtIndex:(NSUInteger)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)isGroupMessageCount;
-(NSUInteger)isMultiLingualCount;
-(NSUInteger)isReadableCount;
-(NSUInteger)personTypeCount;
-(NSUInteger)readMessageTypeCount;
-(NSUInteger)recipientTypeCount;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(int)personTypeAtIndex:(NSUInteger)arg0 ;
-(int)readMessageTypeAtIndex:(NSUInteger)arg0 ;
-(int)recipientTypeAtIndex:(NSUInteger)arg0 ;
-(void)addIsGroupMessage:(BOOL)arg0 ;
-(void)addIsMultiLingual:(BOOL)arg0 ;
-(void)addIsReadable:(BOOL)arg0 ;
-(void)addPersonType:(int)arg0 ;
-(void)addReadMessageType:(int)arg0 ;
-(void)addRecipientType:(int)arg0 ;
-(void)clearIsGroupMessage;
-(void)clearIsMultiLingual;
-(void)clearIsReadable;
-(void)clearPersonType;
-(void)clearReadMessageType;
-(void)clearRecipientType;
-(void)deleteAudioContext;
-(void)deleteEmojiUsed;
-(void)deleteIsGroupMessage;
-(void)deleteIsMultiLingual;
-(void)deleteIsReadable;
-(void)deleteKeyboardUsed;
-(void)deleteLanguageConfidenceMatrix;
-(void)deleteMessageDurationMs;
-(void)deleteMessageType;
-(void)deletePersonType;
-(void)deleteReadMessageType;
-(void)deleteRecipientType;
-(void)deleteTextContext;
-(void)deleteTextMessageLength;
-(void)writeTo:(id)arg0 ;


@end


#endif