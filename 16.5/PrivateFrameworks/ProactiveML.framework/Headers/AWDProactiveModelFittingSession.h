// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDPROACTIVEMODELFITTINGSESSION_H
#define AWDPROACTIVEMODELFITTINGSESSION_H

@class PBCodable;
@protocol NSCopying;


#import "AWDProactiveModelFittingModelInfo.h"
#import "AWDProactiveModelFittingSparseFloatVector.h"

@interface AWDProactiveModelFittingSession : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) float confidenceScore; // ivar: _confidenceScore
@property (nonatomic) BOOL hasConfidenceScore;
@property (nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) BOOL hasModelInfo;
@property (readonly, nonatomic) BOOL hasSparseFloatFeatures;
@property (nonatomic) BOOL hasSupervisionType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger label; // ivar: _label
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // ivar: _modelInfo
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatFeatures; // ivar: _sparseFloatFeatures
@property (nonatomic) NSUInteger supervisionType; // ivar: _supervisionType
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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