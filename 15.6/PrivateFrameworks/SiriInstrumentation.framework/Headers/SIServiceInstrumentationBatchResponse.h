// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISERVICEINSTRUMENTATIONBATCHRESPONSE_H
#define SISERVICEINSTRUMENTATIONBATCHRESPONSE_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface SIServiceInstrumentationBatchResponse : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSData *batch_id; // ivar: _batch_id
@property (nonatomic) BOOL hasBatch_id; // ivar: _hasBatch_id
@property (nonatomic) BOOL hasMessage; // ivar: _hasMessage
@property (nonatomic) BOOL hasStatus_code;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) int status_code; // ivar: _status_code


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteBatch_id;
-(void)deleteMessage;
-(void)deleteStatus_code;
-(void)writeTo:(id)arg0 ;


@end


#endif