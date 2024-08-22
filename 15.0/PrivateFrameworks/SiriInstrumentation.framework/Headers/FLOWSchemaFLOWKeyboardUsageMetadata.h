// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLOWSCHEMAFLOWKEYBOARDUSAGEMETADATA_H
#define FLOWSCHEMAFLOWKEYBOARDUSAGEMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWKeyboardUsageMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsEmojiUsed;
@property (nonatomic) BOOL hasLevenshteinEditDistance;
@property (nonatomic) BOOL hasNumCharsAdded;
@property (nonatomic) BOOL hasNumCharsDeleted;
@property (nonatomic) BOOL isEmojiUsed; // ivar: _isEmojiUsed
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int levenshteinEditDistance; // ivar: _levenshteinEditDistance
@property (nonatomic) unsigned int numCharsAdded; // ivar: _numCharsAdded
@property (nonatomic) unsigned int numCharsDeleted; // ivar: _numCharsDeleted


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif