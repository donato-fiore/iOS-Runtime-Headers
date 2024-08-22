// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASRSCHEMAASRUTTERANCE_H
#define ASRSCHEMAASRUTTERANCE_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ASRSchemaASRUtterance : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *interpretationIndices; // ivar: _interpretationIndices
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(unsigned int)interpretationIndicesAtIndex:(NSUInteger)arg0 ;
-(void)addInterpretationIndices:(unsigned int)arg0 ;
-(void)clearInterpretationIndices;
-(void)writeTo:(id)arg0 ;


@end


#endif