// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALITFMITFMPARSERRESPONSE_H
#define SIRINLUINTERNALITFMITFMPARSERRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUEXTERNALParser.h"

@interface SIRINLUINTERNALITFMITFMParserResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL classificationLabel; // ivar: _classificationLabel
@property (nonatomic) float classificationProbability; // ivar: _classificationProbability
@property (nonatomic) BOOL hasClassificationLabel;
@property (nonatomic) BOOL hasClassificationProbability;
@property (readonly, nonatomic) BOOL hasParser;
@property (retain, nonatomic) NSMutableArray *hypotheses; // ivar: _hypotheses
@property (retain, nonatomic) SIRINLUEXTERNALParser *parser; // ivar: _parser


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)hypothesesAtIndex:(NSUInteger)arg0 ;
-(void)addHypotheses:(id)arg0 ;
-(void)clearHypotheses;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif