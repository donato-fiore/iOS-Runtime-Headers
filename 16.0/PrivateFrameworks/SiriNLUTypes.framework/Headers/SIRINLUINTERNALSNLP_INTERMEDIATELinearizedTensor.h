// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUINTERNALSNLP_INTERMEDIATELINEARIZEDTENSOR_H
#define SIRINLUINTERNALSNLP_INTERMEDIATELINEARIZEDTENSOR_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface SIRINLUINTERNALSNLP_INTERMEDIATELinearizedTensor : PBCodable <NSCopying>

 {
    ? _numericalizedFeatures;
    ? _shapes;
}


@property (retain, nonatomic) NSMutableArray *features; // ivar: _features
@property (readonly, nonatomic) *unsigned int numericalizedFeatures;
@property (readonly, nonatomic) NSUInteger numericalizedFeaturesCount;
@property (readonly, nonatomic) *unsigned int shapes;
@property (readonly, nonatomic) NSUInteger shapesCount;


+(Class)featureType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)featureAtIndex:(NSUInteger)arg0 ;
-(unsigned int)numericalizedFeatureAtIndex:(NSUInteger)arg0 ;
-(unsigned int)shapeAtIndex:(NSUInteger)arg0 ;
-(void)addFeature:(id)arg0 ;
-(void)addNumericalizedFeature:(unsigned int)arg0 ;
-(void)addShape:(unsigned int)arg0 ;
-(void)clearFeatures;
-(void)clearNumericalizedFeatures;
-(void)clearShapes;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif