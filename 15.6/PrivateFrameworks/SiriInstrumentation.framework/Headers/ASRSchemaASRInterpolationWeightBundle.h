// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASRSCHEMAASRINTERPOLATIONWEIGHTBUNDLE_H
#define ASRSCHEMAASRINTERPOLATIONWEIGHTBUNDLE_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface ASRSchemaASRInterpolationWeightBundle : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger endTimeInNs; // ivar: _endTimeInNs
@property (nonatomic) BOOL hasEndTimeInNs;
@property (nonatomic) BOOL hasStartTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger startTimeInNs; // ivar: _startTimeInNs
@property (copy, nonatomic) NSArray *weights; // ivar: _weights


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(float)weightsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addWeights:(float)arg0 ;
-(void)clearWeights;
-(void)deleteEndTimeInNs;
-(void)deleteStartTimeInNs;
-(void)deleteWeights;
-(void)writeTo:(id)arg0 ;


@end


#endif