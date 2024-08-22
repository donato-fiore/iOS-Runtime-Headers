// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWWEBANSWEREXECUTIONTIER1_H
#define FLOWSCHEMAFLOWWEBANSWEREXECUTIONTIER1_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWWebAnswerExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *answerId; // ivar: _answerId
@property (nonatomic) BOOL hasAnswerId; // ivar: _hasAnswerId
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAnswerId;
-(void)writeTo:(id)arg0 ;


@end


#endif