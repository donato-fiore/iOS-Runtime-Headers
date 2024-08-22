// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHCORNERDETECTOR_H
#define CHCORNERDETECTOR_H

@class NSMutableIndexSet;

#import <Foundation/Foundation.h>

#import "CHDrawing.h"

@interface CHCornerDetector : NSObject {
    vector<std::map<long, long>, std::allocator<std::map<long, long>>> __resampledDrawingPointMap;
}


@property (readonly, copy, nonatomic) NSMutableIndexSet *_cornerIndexSet; // ivar: __cornerIndexSet
@property (readonly, copy, nonatomic) NSMutableIndexSet *_directionChangeCornerIndexes; // ivar: __directionChangeCornerIndexes
@property ? _resampledDrawingPointMap;
@property (readonly, nonatomic) NSUInteger _strawSize; // ivar: __strawSize
@property (readonly, nonatomic) NSUInteger directionChangeCount; // ivar: _directionChangeCount
@property (copy, nonatomic) CHDrawing *drawing; // ivar: _drawing
@property (readonly, nonatomic) NSUInteger highestDirectionChangeCount; // ivar: _highestDirectionChangeCount
@property (nonatomic) CGFloat minimumSignificantSegmentLength; // ivar: _minimumSignificantSegmentLength
@property (readonly, copy, nonatomic) CHDrawing *resampledDrawing; // ivar: _resampledDrawing
@property (nonatomic) BOOL shouldUseDynamicSampling; // ivar: _shouldUseDynamicSampling


-(BOOL)_isLine:(id)arg0 usingThreshold:(CGFloat)arg1 p1:(NSInteger)arg2 p2:(NSInteger)arg3 ;
-(CGFloat)_distance:(id)arg0 p1:(NSInteger)arg1 p2:(NSInteger)arg2 ;
-(CGFloat)_pathDistance:(id)arg0 p1:(NSInteger)arg1 p2:(NSInteger)arg2 ;
-(CGFloat)_resamplingDistance:(id)arg0 ;
-(NSInteger)_strokeHalfwayCorner:(id)arg0 p1:(NSInteger)arg1 p2:(NSInteger)arg2 ;
-(id)_postProcessCorners:(id)arg0 corners:(id)arg1 straws:(id)arg2 ;
-(id)_resampleDrawing:(id)arg0 outputPointMap:(*void)arg1 ;
-(id)_resolveResampledDirectionChangePointIndexes:(id)arg0 ;
-(void)_removeAdjacentCorners:(id)arg0 corners:(id)arg1 straws:(id)arg2 ;
-(void)_removeColinearCorners:(id)arg0 usingDistanceThreshold:(CGFloat)arg1 usingLowerThreshold:(CGFloat)arg2 usingUpperThreshold:(CGFloat)arg3 corners:(id)arg4 ;
-(void)_removeColinearCorners:(id)arg0 usingThreshold:(CGFloat)arg1 corners:(id)arg2 ;


@end


#endif