// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASRSCHEMAASREMOJIMETRICS_H
#define ASRSCHEMAASREMOJIMETRICS_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface ASRSchemaASREmojiMetrics : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsEmojiDisambiguationUsed;
@property (nonatomic) BOOL hasIsEmojiExpectedButNotRecognized;
@property (nonatomic) BOOL hasIsEmojiPersonalizationUsed;
@property (nonatomic) BOOL isEmojiDisambiguationUsed; // ivar: _isEmojiDisambiguationUsed
@property (nonatomic) BOOL isEmojiExpectedButNotRecognized; // ivar: _isEmojiExpectedButNotRecognized
@property (nonatomic) BOOL isEmojiPersonalizationUsed; // ivar: _isEmojiPersonalizationUsed
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *recognizedEmojis; // ivar: _recognizedEmojis


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)recognizedEmojisAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addRecognizedEmojis:(id)arg0 ;
-(void)clearRecognizedEmojis;
-(void)deleteIsEmojiDisambiguationUsed;
-(void)deleteIsEmojiExpectedButNotRecognized;
-(void)deleteIsEmojiPersonalizationUsed;
-(void)deleteRecognizedEmojis;
-(void)writeTo:(id)arg0 ;


@end


#endif