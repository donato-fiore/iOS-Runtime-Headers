// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNMPIMAGEGROUPING_H
#define VNMPIMAGEGROUPING_H


#import <Foundation/Foundation.h>


@interface VNMPImageGrouping : NSObject



+(?)computeClusteringIntoKGroups:(?)arg0 forHierarchicalTreecontext;
+(?)computeClusteringIntoKGroups:(?)arg0 orUsingDistanceThreshold:(?)arg1 forHierarchicalTreecontext;
+(?)computeClusteringUsingDistanceThreshold:(?)arg0 forHierarchicalTreecontext;
+(?)computeHierarchicalClusteringOfImageDescriptors:(?)arg0 resultscontext;
+(?)computeNaturalClusteringForHierarchicalTreecontext;
+(float)computeTimestampAdjustedDistanceForBaseDistance:(float)arg0 andTimestampDiff:(NSInteger)arg1 ;
+(float)computeTotalDistanceForDescriptorDistance:(float)arg0 timestampDiff:(NSInteger)arg1 useTimestampAdjustment:(BOOL)arg2 ;
+(float)getDistanceForClusterNode:(struct MPClusteringTreeNode *)arg0 splitDistanceType:(int)arg1 ;


@end


#endif