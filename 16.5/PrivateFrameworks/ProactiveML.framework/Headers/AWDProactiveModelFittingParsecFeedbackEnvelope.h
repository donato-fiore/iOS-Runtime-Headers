// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDPROACTIVEMODELFITTINGPARSECFEEDBACKENVELOPE_H
#define AWDPROACTIVEMODELFITTINGPARSECFEEDBACKENVELOPE_H

@class PBCodable;
@protocol NSCopying;


#import "AWDProactiveModelFittingEvaluation.h"
#import "AWDProactiveModelFittingLinRegFeatureMatrix.h"
#import "AWDProactiveModelFittingLinRegObjectiveFeatures.h"
#import "AWDProactiveModelFittingLogRegGradient.h"
#import "AWDProactiveModelFittingLogRegWeights.h"

@interface AWDProactiveModelFittingParsecFeedbackEnvelope : PBCodable <NSCopying>



@property (retain, nonatomic) AWDProactiveModelFittingEvaluation *evaluation; // ivar: _evaluation
@property (readonly, nonatomic) BOOL hasEvaluation;
@property (readonly, nonatomic) BOOL hasLinRegFeatureMatrix;
@property (readonly, nonatomic) BOOL hasLinRegObjectiveFeatures;
@property (readonly, nonatomic) BOOL hasLogRegGradient;
@property (readonly, nonatomic) BOOL hasLogRegWeights;
@property (retain, nonatomic) AWDProactiveModelFittingLinRegFeatureMatrix *linRegFeatureMatrix; // ivar: _linRegFeatureMatrix
@property (retain, nonatomic) AWDProactiveModelFittingLinRegObjectiveFeatures *linRegObjectiveFeatures; // ivar: _linRegObjectiveFeatures
@property (retain, nonatomic) AWDProactiveModelFittingLogRegGradient *logRegGradient; // ivar: _logRegGradient
@property (retain, nonatomic) AWDProactiveModelFittingLogRegWeights *logRegWeights; // ivar: _logRegWeights


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