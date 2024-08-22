// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYAUTOEDITCONCRETEMOMENTSSTATISTICS_H
#define PXSTORYAUTOEDITCONCRETEMOMENTSSTATISTICS_H

@class PFStoryClusteringProperties, NSString;
@protocol PXStoryAutoEditMomentsStatistics, PXStoryMemoryMomentClusteringDistanceCalculator;

#import <Foundation/Foundation.h>


@interface PXStoryAutoEditConcreteMomentsStatistics : NSObject <PXStoryAutoEditMomentsStatistics>



@property (nonatomic) CGFloat averageAssetCount; // ivar: _averageAssetCount
@property (retain, nonatomic) NSObject<PXStoryMemoryMomentClusteringDistanceCalculator> *clusteringDistanceCalculator; // ivar: _clusteringDistanceCalculator
@property (nonatomic) CGFloat clusteringDuration; // ivar: _clusteringDuration
@property (retain, nonatomic) PFStoryClusteringProperties *clusteringProperties; // ivar: _clusteringProperties
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maximumAssetCount; // ivar: _maximumAssetCount
@property (copy, nonatomic) NSString *memoryCategoryName; // ivar: _memoryCategoryName
@property (nonatomic) NSUInteger minimumAssetCount; // ivar: _minimumAssetCount
@property (readonly) Class superclass;




@end


#endif