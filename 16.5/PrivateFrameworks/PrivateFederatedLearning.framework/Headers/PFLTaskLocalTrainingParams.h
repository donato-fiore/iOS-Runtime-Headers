// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFLTASKLOCALTRAININGPARAMS_H
#define PFLTASKLOCALTRAININGPARAMS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface PFLTaskLocalTrainingParams : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger epochs; // ivar: _epochs
@property (nonatomic) BOOL hasEpochs;
@property (nonatomic) BOOL hasLearningRate;
@property (nonatomic) BOOL hasValidationSplit;
@property (nonatomic) CGFloat learningRate; // ivar: _learningRate
@property (retain, nonatomic) NSMutableArray *orderedTrainableLayers; // ivar: _orderedTrainableLayers
@property (nonatomic) CGFloat validationSplit; // ivar: _validationSplit


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)orderedTrainableLayersAtIndex:(NSUInteger)arg0 ;
-(void)addOrderedTrainableLayers:(id)arg0 ;
-(void)clearOrderedTrainableLayers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif