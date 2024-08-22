// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYMEMORYMOMENT_H
#define PXSTORYMEMORYMOMENT_H

@class NSIndexSet;
@protocol PXDisplayAssetFetchResult, PXStoryMemoryMomentClusteringDistanceCalculator, PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface PXStoryMemoryMoment : NSObject {
    id<PXDisplayAssetFetchResult> *_displayAssets;
    NSIndexSet *_indices;
    BOOL _diagnosticsCalculated;
    CGFloat _totalWeightedClusteringDistance;
    CGFloat _locationClusteringDistance;
    CGFloat _timeClusteringDistance;
    CGFloat _faceClusteringDistance;
}


@property (readonly, nonatomic) _NSRange assetIndexRange;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSObject<PXStoryMemoryMomentClusteringDistanceCalculator> *diagnosticDistanceCalculator; // ivar: _diagnosticDistanceCalculator
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *displayAssets;
@property (readonly, nonatomic) CGFloat faceClusteringDistance;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *firstAsset;
@property (readonly, nonatomic) NSUInteger firstGlobalIndex;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *lastAsset;
@property (readonly, nonatomic) NSUInteger lastGlobalIndex;
@property (readonly, nonatomic) CGFloat locationClusteringDistance;
@property (readonly, nonatomic) CGFloat timeClusteringDistance;
@property (readonly, nonatomic) CGFloat totalWeightedClusteringDistance;


-(id)assetAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithDisplayAssets:(id)arg0 indexSet:(id)arg1 ;
-(id)initWithDisplayAssets:(id)arg0 indexSet:(id)arg1 diagnosticDistanceCalculator:(id)arg2 ;
-(id)initWithDisplayAssets:(id)arg0 indicesArray:(id)arg1 diagnosticDistanceCalculator:(id)arg2 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(void)_calculateDiagnostics;
-(void)enumerateAssetsUsingBlock:(id)arg0 ;


@end


#endif