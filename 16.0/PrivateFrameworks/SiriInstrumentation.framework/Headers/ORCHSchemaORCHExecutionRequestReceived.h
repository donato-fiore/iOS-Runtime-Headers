// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ORCHSCHEMAORCHEXECUTIONREQUESTRECEIVED_H
#define ORCHSCHEMAORCHEXECUTIONREQUESTRECEIVED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ORCHSchemaORCHExecutionRequestReceived : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int commandSource; // ivar: _commandSource
@property (nonatomic) BOOL executionForRSKE; // ivar: _executionForRSKE
@property (nonatomic) BOOL hasCommandSource;
@property (nonatomic) BOOL hasExecutionForRSKE;
@property (nonatomic) BOOL hasPreExecutionDecision;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int preExecutionDecision; // ivar: _preExecutionDecision


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCommandSource;
-(void)deleteExecutionForRSKE;
-(void)deletePreExecutionDecision;
-(void)writeTo:(id)arg0 ;


@end


#endif