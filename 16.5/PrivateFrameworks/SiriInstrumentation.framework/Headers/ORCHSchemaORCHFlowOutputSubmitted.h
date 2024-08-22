// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ORCHSCHEMAORCHFLOWOUTPUTSUBMITTED_H
#define ORCHSCHEMAORCHFLOWOUTPUTSUBMITTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ORCHSchemaORCHFlowOutputSubmitted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL flowCommandReceived; // ivar: _flowCommandReceived
@property (nonatomic) BOOL flowCommandResponseError; // ivar: _flowCommandResponseError
@property (nonatomic) int flowOutputSubmissionId; // ivar: _flowOutputSubmissionId
@property (nonatomic) BOOL hasFlowCommandReceived;
@property (nonatomic) BOOL hasFlowCommandResponseError;
@property (nonatomic) BOOL hasFlowOutputSubmissionId;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteFlowCommandReceived;
-(void)deleteFlowCommandResponseError;
-(void)deleteFlowOutputSubmissionId;
-(void)writeTo:(id)arg0 ;


@end


#endif