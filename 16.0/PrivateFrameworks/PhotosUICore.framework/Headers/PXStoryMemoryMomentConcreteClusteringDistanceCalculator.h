// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYMEMORYMOMENTCONCRETECLUSTERINGDISTANCECALCULATOR_H
#define PXSTORYMEMORYMOMENTCONCRETECLUSTERINGDISTANCECALCULATOR_H

@class NSDictionary, NSString;
@protocol PXStoryMemoryMomentClusteringDistanceCalculator, PXDisplayAssetFetchResult;

#import <Foundation/Foundation.h>


@interface PXStoryMemoryMomentConcreteClusteringDistanceCalculator : NSObject <PXStoryMemoryMomentClusteringDistanceCalculator>

 {
    id<PXDisplayAssetFetchResult> *_assets;
    NSDictionary *_weights;
    NSDictionary *_locationsByAssetUUID;
    NSDictionary *_faceprintsByAssetUUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat faceWeight; // ivar: _faceWeight
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat locationWeight; // ivar: _locationWeight
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeWeight; // ivar: _timeWeight


-(id)densityClusteringDistanceBlockForAssets:(SEL)arg0 ;
-(id)initWithWeights:(id)arg0 locationsByAssetUUID:(id)arg1 faceprintsByAssetUUID:(id)arg2 ;
-(void)clusteringDistanceForAssets:(id)arg0 fromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 resultHandler:(id)arg3 ;


@end


#endif