// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUINTERNALSNLCSNLCPARSERRESPONSE_H
#define SIRINLUINTERNALSNLCSNLCPARSERRESPONSE_H

@class PBCodable;
@protocol NSCopying;



@interface SIRINLUINTERNALSNLCSNLCParserResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int classificationLabel; // ivar: _classificationLabel
@property (nonatomic) float classificationProbability; // ivar: _classificationProbability
@property (nonatomic) BOOL hasClassificationLabel;
@property (nonatomic) BOOL hasClassificationProbability;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)classificationLabelAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsClassificationLabel:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif