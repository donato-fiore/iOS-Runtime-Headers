// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDPROACTIVEMODELFITTINGEVALMETRICS_H
#define AWDPROACTIVEMODELFITTINGEVALMETRICS_H

@class PBCodable;
@protocol NSCopying;



@interface AWDProactiveModelFittingEvalMetrics : PBCodable <NSCopying>

 {
    ? _negativeScores;
    ? _positiveScores;
    ? _has;
}


@property (nonatomic) float f1; // ivar: _f1
@property (nonatomic) NSUInteger falseNegatives; // ivar: _falseNegatives
@property (nonatomic) NSUInteger falsePositives; // ivar: _falsePositives
@property (nonatomic) BOOL hasF1;
@property (nonatomic) BOOL hasFalseNegatives;
@property (nonatomic) BOOL hasFalsePositives;
@property (nonatomic) BOOL hasRmse;
@property (nonatomic) BOOL hasSecsToExecute;
@property (nonatomic) BOOL hasTrueNegatives;
@property (nonatomic) BOOL hasTruePositives;
@property (readonly, nonatomic) *float negativeScores;
@property (readonly, nonatomic) NSUInteger negativeScoresCount;
@property (readonly, nonatomic) *float positiveScores;
@property (readonly, nonatomic) NSUInteger positiveScoresCount;
@property (nonatomic) float rmse; // ivar: _rmse
@property (nonatomic) float secsToExecute; // ivar: _secsToExecute
@property (nonatomic) NSUInteger trueNegatives; // ivar: _trueNegatives
@property (nonatomic) NSUInteger truePositives; // ivar: _truePositives


+(id)evalMetricsWithRmse:(float)arg0 f1:(float)arg1 ;
+(id)evalMetricsWithRmse:(float)arg0 f1:(float)arg1 truePositives:(NSUInteger)arg2 trueNegatives:(NSUInteger)arg3 falsePositives:(NSUInteger)arg4 falseNegatives:(NSUInteger)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(float)negativeScoresAtIndex:(NSUInteger)arg0 ;
-(float)positiveScoresAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)toDictionary;
-(void)addNegativeScores:(float)arg0 ;
-(void)addPositiveScores:(float)arg0 ;
-(void)clearNegativeScores;
-(void)clearPositiveScores;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif