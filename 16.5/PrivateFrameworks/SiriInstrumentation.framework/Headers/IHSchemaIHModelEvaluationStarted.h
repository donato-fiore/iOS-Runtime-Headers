// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IHSCHEMAIHMODELEVALUATIONSTARTED_H
#define IHSCHEMAIHMODELEVALUATIONSTARTED_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface IHSchemaIHModelEvaluationStarted : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasModelId; // ivar: _hasModelId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *modelId; // ivar: _modelId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteModelId;
-(void)writeTo:(id)arg0 ;


@end


#endif