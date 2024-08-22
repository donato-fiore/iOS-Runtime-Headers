// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASRSCHEMAASRCANCELLED_H
#define ASRSCHEMAASRCANCELLED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "ASRSchemaASRRecognitionMetrics.h"

@interface ASRSchemaASRCancelled : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasMetrics; // ivar: _hasMetrics
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) ASRSchemaASRRecognitionMetrics *metrics; // ivar: _metrics
@property (nonatomic) int reason; // ivar: _reason


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteMetrics;
-(void)deleteReason;
-(void)writeTo:(id)arg0 ;


@end


#endif