// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MHSCHEMAMHLATTICEFALSETRIGGERMITIGATIONENDED_H
#define MHSCHEMAMHLATTICEFALSETRIGGERMITIGATIONENDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHLatticeFalseTriggerMitigationEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL hasThreshold;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float score; // ivar: _score
@property (nonatomic) float threshold; // ivar: _threshold


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteScore;
-(void)deleteThreshold;
-(void)writeTo:(id)arg0 ;


@end


#endif