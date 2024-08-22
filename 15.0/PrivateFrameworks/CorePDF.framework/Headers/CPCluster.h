// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPCLUSTER_H
#define CPCLUSTER_H

@protocol CPDisposable;

#import <Foundation/Foundation.h>


@interface CPCluster : NSObject <CPDisposable>

 {
    *? profile;
    unsigned int xCount;
    *CGFloat x;
    *CGFloat dx;
    *unsigned int dxOrderIndex;
    unsigned int interClusterMinIndex;
    *CGFloat ddx;
    *unsigned int ddxOrderIndex;
    unsigned int interLevelMinIndex;
    unsigned int minClusterSize;
    CGFloat maxClusterSpread;
    CGFloat minInterClusterDiff;
    CGFloat minInterLevel2ndDiff;
    unsigned int clusterCount;
    *? xStats;
    unsigned int levels;
    *? dxStats;
    BOOL ownData;
    BOOL ownDifferences;
}




+(*unsigned int)createOrderIndexFor:(*CGFloat)arg0 ofSize:(unsigned int)arg1 ;
+(void)clusterTextLine:(id)arg0 ;
+(void)clusterTextLine:(id)arg0 withCluster:(id)arg1 atLevel:(unsigned int)arg2 withMaximumWordGap:(*CGFloat)arg3 andMaximumLetterGap:(*CGFloat)arg4 ;
+(void)reclusterTextLine:(id)arg0 fromWordIndex:(unsigned int)arg1 count:(*unsigned int)arg2 ;
-(BOOL)applyDifferenceHints:(struct ? *)arg0 count:(unsigned int)arg1 ;
-(BOOL)coalesceFrom:(unsigned int)arg0 to:(unsigned int)arg1 ;
-(BOOL)joinClosestLevelPairFrom:(unsigned int)arg0 to:(unsigned int)arg1 ;
-(BOOL)joinLevelsFrom:(unsigned int)arg0 to:(unsigned int)arg1 ;
-(BOOL)splitLevelAtIndex:(unsigned int)arg0 betweenValue:(CGFloat)arg1 andValue:(CGFloat)arg2 ;
-(id)init;
-(id)initWithProfile:(struct ? *)arg0 ;
-(struct ? )clusterStatisticsAtIndex:(unsigned int)arg0 ;
-(struct ? )differenceClusterStatisticsAtIndex:(unsigned int)arg0 ;
-(struct ? )largestClusterStatistics;
-(unsigned int)clusterCount;
-(unsigned int)levels;
-(void)analyzeDensities;
-(void)analyzeDifferences;
-(void)assembleDataStats;
-(void)assembleDensityDifferenceStats;
-(void)assembleDifferenceStats;
-(void)computeDataFromDifferences;
-(void)computeDifferencesFromData;
-(void)dealloc;
-(void)dispose;
-(void)finalize;
-(void)findClusters:(*CGFloat)arg0 count:(unsigned int)arg1 ;
-(void)findClustersFromCharacterSequence:(id)arg0 withSpaceHint:(BOOL)arg1 ;
-(void)findClustersFromDifferences:(*CGFloat)arg0 count:(unsigned int)arg1 ;
-(void)findDensityClusters:(*CGFloat)arg0 count:(unsigned int)arg1 ;
-(void)makeWords:(struct ? *)arg0 count:(unsigned int)arg1 fromCharacterSequence:(id)arg2 charOffset:(unsigned int)arg3 ;
-(void)resetAnalysis;
-(void)setMaximumClusterSpread:(CGFloat)arg0 ;
-(void)setMinimumClusterSize:(unsigned int)arg0 ;
-(void)setMinimumRecognizedInterClusterDifference:(CGFloat)arg0 ;
-(void)setMinimumRecognizedInterLevel2ndDifference:(CGFloat)arg0 ;
-(void)splitSecondDifferences;
-(void)tryLevel0SplitBetween:(CGFloat)arg0 and:(CGFloat)arg1 usingHints:(struct ? *)arg2 ;


@end


#endif