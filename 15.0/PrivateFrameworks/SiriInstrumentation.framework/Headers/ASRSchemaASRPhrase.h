// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASRSCHEMAASRPHRASE_H
#define ASRSCHEMAASRPHRASE_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ASRSchemaASRPhrase : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *interpretations; // ivar: _interpretations
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)interpretationsAtIndex:(NSUInteger)arg0 ;
-(void)addInterpretations:(id)arg0 ;
-(void)clearInterpretations;
-(void)writeTo:(id)arg0 ;


@end


#endif