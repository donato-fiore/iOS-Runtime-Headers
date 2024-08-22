// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLOWSCHEMAFLOWSMSCONTEXT_H
#define FLOWSCHEMAFLOWSMSCONTEXT_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWSchemaFLOWSmsAudioContext.h"
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
@property (nonatomic) BOOL hasMessageDurationMs; // ivar: _hasMessageDurationMs
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) BOOL hasTextContext; // ivar: _hasTextContext
@property (nonatomic) BOOL hasTextMessageLength; // ivar: _hasTextMessageLength
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL keyboardUsed; // ivar: _keyboardUsed
@property (nonatomic) unsigned int messageDurationMs; // ivar: _messageDurationMs
@property (nonatomic) int messageType; // ivar: _messageType
@property (copy, nonatomic) NSArray *personTypes; // ivar: _personTypes
@property (copy, nonatomic) NSArray *recipientTypes; // ivar: _recipientTypes
@property (retain, nonatomic) FLOWSchemaFLOWSmsTextContext *textContext; // ivar: _textContext
@property (retain, nonatomic) FLOWSchemaFLOWTextMessageLength *textMessageLength; // ivar: _textMessageLength
@property (readonly, nonatomic) NSUInteger whichMessagecontext; // ivar: _whichMessagecontext
@property (readonly, nonatomic) NSUInteger whichMessagesize; // ivar: _whichMessagesize


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)personTypeCount;
-(NSUInteger)recipientTypeCount;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(int)personTypeAtIndex:(NSUInteger)arg0 ;
-(int)recipientTypeAtIndex:(NSUInteger)arg0 ;
-(void)addPersonType:(int)arg0 ;
-(void)addRecipientType:(int)arg0 ;
-(void)clearPersonType;
-(void)clearRecipientType;
-(void)writeTo:(id)arg0 ;


@end


#endif