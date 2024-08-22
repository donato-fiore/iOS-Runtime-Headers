// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAKEYBOARDDISMISSED_H
#define SISCHEMAKEYBOARDDISMISSED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaKeyboardDismissed : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int editDistance; // ivar: _editDistance
@property (nonatomic) BOOL emojiUsed; // ivar: _emojiUsed
@property (nonatomic) BOOL hasEditDistance;
@property (nonatomic) BOOL hasEmojiUsed;
@property (nonatomic) BOOL hasKeyboardLocale;
@property (nonatomic) BOOL hasKeyboardUsed;
@property (nonatomic) BOOL hasLengthInChars;
@property (nonatomic) BOOL hasLengthInWords;
@property (nonatomic) BOOL hasNumCharsAdded;
@property (nonatomic) BOOL hasNumCharsDeleted;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int keyboardLocale; // ivar: _keyboardLocale
@property (nonatomic) BOOL keyboardUsed; // ivar: _keyboardUsed
@property (nonatomic) int lengthInChars; // ivar: _lengthInChars
@property (nonatomic) int lengthInWords; // ivar: _lengthInWords
@property (nonatomic) int numCharsAdded; // ivar: _numCharsAdded
@property (nonatomic) int numCharsDeleted; // ivar: _numCharsDeleted


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteEditDistance;
-(void)deleteEmojiUsed;
-(void)deleteKeyboardLocale;
-(void)deleteKeyboardUsed;
-(void)deleteLengthInChars;
-(void)deleteLengthInWords;
-(void)deleteNumCharsAdded;
-(void)deleteNumCharsDeleted;
-(void)writeTo:(id)arg0 ;


@end


#endif