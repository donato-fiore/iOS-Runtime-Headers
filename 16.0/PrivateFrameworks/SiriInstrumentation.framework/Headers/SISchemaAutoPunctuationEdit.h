// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAAUTOPUNCTUATIONEDIT_H
#define SISCHEMAAUTOPUNCTUATIONEDIT_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaAutoPunctuationEdit : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *correctedPunctuation; // ivar: _correctedPunctuation
@property (nonatomic) BOOL hasCorrectedPunctuation; // ivar: _hasCorrectedPunctuation
@property (nonatomic) BOOL hasRecognizedPunctuation; // ivar: _hasRecognizedPunctuation
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *recognizedPunctuation; // ivar: _recognizedPunctuation


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCorrectedPunctuation;
-(void)deleteRecognizedPunctuation;
-(void)writeTo:(id)arg0 ;


@end


#endif