// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCWAVEFORMSEGMENT_H
#define RCWAVEFORMSEGMENT_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RCWaveformSegment : NSObject <NSSecureCoding>

 {
    NSData *_averagePowerLevelData;
}


@property (readonly, nonatomic) *float averagePowerLevels;
@property (readonly, nonatomic) NSInteger averagePowerLevelsCount;
@property (nonatomic) BOOL isRendered; // ivar: _isRendered
@property (readonly, nonatomic) ? timeRange; // ivar: _timeRange


+(BOOL)supportsSecureCoding;
+(id)_discontinuityRepairedSegmentsByGrowingToFillGapsInSegments:(id)arg0 ;
+(id)_mergedSegmentByFastMergingWithMergeableSegments:(id)arg0 mergedLevelsDuration:(CGFloat)arg1 ;
+(id)_mergedSegmentByResamplingWithMergeableSegments:(id)arg0 mergedLevelsDuration:(CGFloat)arg1 ;
+(id)_segmentByMergingMergableSegments:(id)arg0 ;
+(id)_segmentsByJoiningSegment:(id)arg0 toSegmentIfNecessaryWithGreaterSegment:(id)arg1 averagePowerLevelJoinLimit:(NSUInteger)arg2 ;
+(id)emptySegmentWithTimeRange:(struct ? )arg0 ;
+(id)segmentsByMergingSegments:(id)arg0 preferredSegmentDuration:(CGFloat)arg1 ;
+(id)segmentsByMergingSegments:(id)arg0 preferredSegmentDuration:(CGFloat)arg1 beforeTime:(CGFloat)arg2 andThenUsePreferredSegmentDuration:(CGFloat)arg3 ;
+(id)segmentsByReparingDiscontinuitiesInSegments:(id)arg0 ;
+(id)segmentsByShiftingSegments:(id)arg0 byTimeOffset:(CGFloat)arg1 ;
+(void)initialize;
-(BOOL)hasUniformPowerLevel:(float)arg0 ;
-(BOOL)isWaveformDataEqualToDataInSegment:(id)arg0 ;
-(id)_initWithTimeRange:(struct ? )arg0 averagePowerLevelData:(id)arg1 ;
-(id)_segmentWithValuesInContainedTimeRange:(struct ? )arg0 ;
-(id)_segmentsByJoiningIfNecessaryGreaterSegment:(id)arg0 averagePowerLevelJoinLimit:(NSUInteger)arg1 ;
-(id)copyWithAdjustedTimeRange:(struct ? )arg0 ;
-(id)copyWithTimeRangeOffsetByTimeOffset:(CGFloat)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeRange:(struct ? )arg0 averagePowerLevelData:(id)arg1 ;
-(id)initWithTimeRange:(struct ? )arg0 averagePowerLevelVector:(*void)arg1 ;
-(id)segmentByClippingToTimeRange:(struct ? )arg0 ;
-(id)segmentsByJoiningIfSmallSegment:(id)arg0 ;
-(id)segmentsByJoiningIfSmallSegment:(id)arg0 averagePowerLevelJoinLimit:(NSUInteger)arg1 ;
-(id)simpleDescription;
-(id)verboseDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif