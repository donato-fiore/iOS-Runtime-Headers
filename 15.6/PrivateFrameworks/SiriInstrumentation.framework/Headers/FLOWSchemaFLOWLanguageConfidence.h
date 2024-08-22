// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLOWSCHEMAFLOWLANGUAGECONFIDENCE_H
#define FLOWSCHEMAFLOWLANGUAGECONFIDENCE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWLanguageConfidence : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger confidenceScore; // ivar: _confidenceScore
@property (nonatomic) BOOL hasConfidenceScore;
@property (nonatomic) BOOL hasLanguageCode;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int languageCode; // ivar: _languageCode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteConfidenceScore;
-(void)deleteLanguageCode;
-(void)writeTo:(id)arg0 ;


@end


#endif