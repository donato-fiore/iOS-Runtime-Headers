// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMSCHEMACAMAGGREGATEFEATUREVALUE_H
#define CAMSCHEMACAMAGGREGATEFEATUREVALUE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CAMSchemaCAMAggregateFeatureValue : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasMean;
@property (nonatomic) BOOL hasNumInteractions;
@property (nonatomic) BOOL hasVariance;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat mean; // ivar: _mean
@property (nonatomic) unsigned int numInteractions; // ivar: _numInteractions
@property (nonatomic) CGFloat variance; // ivar: _variance


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteMean;
-(void)deleteNumInteractions;
-(void)deleteVariance;
-(void)writeTo:(id)arg0 ;


@end


#endif