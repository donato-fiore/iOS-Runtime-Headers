// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSRANKINGSPANCALCULATOR_H
#define PRSRANKINGSPANCALCULATOR_H


#import <Foundation/Foundation.h>


@interface PRSRankingSpanCalculator : NSObject

@property (nonatomic) float firstTermPosition; // ivar: _firstTermPosition
@property (nonatomic) BOOL n2Exists; // ivar: _n2Exists
@property (nonatomic) BOOL n3Exists; // ivar: _n3Exists
@property (nonatomic) float normCount; // ivar: _normCount
@property (nonatomic) float ordered; // ivar: _ordered
@property (nonatomic) float pairDist; // ivar: _pairDist
@property (nonatomic) BOOL pathExists; // ivar: _pathExists
@property (nonatomic) float unordered; // ivar: _unordered


+(BOOL)doesOrderedSpanExistWithArrayOfIndexArrays:(**NSUInteger)arg0 arrayOfIndexArraysCounts:(*NSUInteger)arg1 arrayOfIndexArraysCount:(NSUInteger)arg2 orderedSpan:(*NSInteger)arg3 firstTermPosition:(*NSUInteger)arg4 queryTermCount:(NSUInteger)arg5 ;
+(BOOL)doesOrderedSpanExistWithArrayOfIndexArrays:(**NSUInteger)arg0 arrayOfIndexArraysCounts:(*NSUInteger)arg1 arrayOfIndexArraysCount:(NSUInteger)arg2 queryTermCount:(NSUInteger)arg3 kTermCount:(NSUInteger)arg4 ;
+(NSInteger)minimumAnyOrderSpanWithArrayOfIndexArrays:(**NSUInteger)arg0 arrayOfIndexArraysCounts:(*NSUInteger)arg1 arrayOfIndexArraysCount:(NSUInteger)arg2 queryTermCount:(NSUInteger)arg3 ;
+(NSInteger)minimumPairDistanceWithArrayOfIndexArrays:(**NSUInteger)arg0 arrayOfIndexArraysCounts:(*NSUInteger)arg1 arrayOfIndexArraysCount:(NSUInteger)arg2 queryTermCount:(NSUInteger)arg3 tokenCount:(NSUInteger)arg4 ;
-(id)description;
-(void)reset;
-(void)resetSpans;
-(void)updateWithTermPositions:(id)arg0 queryTermCount:(NSUInteger)arg1 tokenCount:(NSUInteger)arg2 ;


@end


#endif