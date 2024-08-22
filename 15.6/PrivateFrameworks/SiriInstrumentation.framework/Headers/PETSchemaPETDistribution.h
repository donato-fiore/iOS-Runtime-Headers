// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PETSCHEMAPETDISTRIBUTION_H
#define PETSCHEMAPETDISTRIBUTION_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface PETSchemaPETDistribution : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasMax;
@property (nonatomic) BOOL hasMean;
@property (nonatomic) BOOL hasMin;
@property (nonatomic) BOOL hasVariance;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat max; // ivar: _max
@property (nonatomic) CGFloat mean; // ivar: _mean
@property (nonatomic) CGFloat min; // ivar: _min
@property (nonatomic) CGFloat variance; // ivar: _variance


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteMax;
-(void)deleteMean;
-(void)deleteMin;
-(void)deleteVariance;
-(void)writeTo:(id)arg0 ;


@end


#endif