// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALITFMITFMHYPOTHESIS_H
#define SIRINLUINTERNALITFMITFMHYPOTHESIS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SIRINLUINTERNALITFMITFMHypothesis : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL hasProbability;
@property (readonly, nonatomic) BOOL hasStringLabel;
@property (nonatomic) int label; // ivar: _label
@property (nonatomic) float probability; // ivar: _probability
@property (retain, nonatomic) NSString *stringLabel; // ivar: _stringLabel


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif