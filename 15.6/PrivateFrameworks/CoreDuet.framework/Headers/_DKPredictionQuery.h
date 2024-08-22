// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKPREDICTIONQUERY_H
#define _DKPREDICTIONQUERY_H

@class DKEventQuery, NSDate;


#import "_DKKnowledgeStorage.h"

@interface _DKPredictionQuery : DKEventQuery {
    BOOL _isTopNPrediction;
    int _totalSlotsInDay;
    NSInteger _topN;
    CGFloat _minLikelihood;
}


@property (retain, nonatomic) NSDate *asOfDate; // ivar: _asOfDate
@property (nonatomic) int minimumDaysOfHistory; // ivar: _minimumDaysOfHistory
@property (nonatomic) NSUInteger partitionType; // ivar: _partitionType
@property (copy) id *predictionHandler; // ivar: _predictionHandler
@property (nonatomic) int slotDuration; // ivar: _slotDuration
@property (retain, nonatomic) _DKKnowledgeStorage *storage; // ivar: _storage
@property (nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) BOOL useHistoricalHistogram; // ivar: _useHistoricalHistogram


+(BOOL)supportsSecureCoding;
+(id)predictionQueryForStream:(id)arg0 withPredicate:(id)arg1 withPredictionType:(NSUInteger)arg2 ;
+(id)predictionQueryForStreams:(id)arg0 withPredicate:(id)arg1 withPredictionType:(NSUInteger)arg2 ;
+(id)topNPredictionQueryForStream:(id)arg0 withPredicate:(id)arg1 withTopN:(NSInteger)arg2 withMinLikelihood:(CGFloat)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)executeUsingCoreDataStorage:(id)arg0 error:(*id)arg1 ;
-(id)handleResults:(id)arg0 error:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif