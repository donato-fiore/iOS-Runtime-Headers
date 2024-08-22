// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDPROACTIVEMODELFITTINGLINREGOBJECTIVEFEATURES_H
#define AWDPROACTIVEMODELFITTINGLINREGOBJECTIVEFEATURES_H

@class PBCodable;
@protocol NSCopying;


#import "AWDProactiveModelFittingMinibatchStats.h"
#import "AWDProactiveModelFittingModelInfo.h"
#import "AWDProactiveModelFittingSparseFloatVector.h"
#import "AWDProactiveModelFittingQuantizedSparseVector.h"

@interface AWDProactiveModelFittingLinRegObjectiveFeatures : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) float featuresL2norm; // ivar: _featuresL2norm
@property (nonatomic) float featuresScaleFactor; // ivar: _featuresScaleFactor
@property (nonatomic) BOOL hasFeaturesL2norm;
@property (nonatomic) BOOL hasFeaturesScaleFactor;
@property (readonly, nonatomic) BOOL hasMinibatchStats;
@property (readonly, nonatomic) BOOL hasModelInfo;
@property (readonly, nonatomic) BOOL hasSparseFloatFeatures;
@property (readonly, nonatomic) BOOL hasSparseQuantizedFeatures;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats; // ivar: _minibatchStats
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // ivar: _modelInfo
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatFeatures; // ivar: _sparseFloatFeatures
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedFeatures; // ivar: _sparseQuantizedFeatures
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)hasObjectiveFeatures;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)featuresLength;
-(NSUInteger)hash;
-(float)featuresValueAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif