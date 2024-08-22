// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGREVGEOMETRICEVENT_H
#define PGREVGEOMETRICEVENT_H



#import "PGAbstractMetricEvent.h"

@interface PGRevGeoMetricEvent : PGAbstractMetricEvent

@property (readonly, nonatomic) CGFloat numberOfAssetClustersPerMomentMean; // ivar: _numberOfAssetClustersPerMomentMean
@property (readonly, nonatomic) CGFloat numberOfAssetClustersPerMomentStdDev; // ivar: _numberOfAssetClustersPerMomentStdDev
@property (readonly, nonatomic) CGFloat numberOfAssetsPerClusterMean; // ivar: _numberOfAssetsPerClusterMean
@property (readonly, nonatomic) CGFloat numberOfAssetsPerClusterStdDev; // ivar: _numberOfAssetsPerClusterStdDev
@property (readonly, nonatomic) CGFloat ratioAssetClusters100mPlusFromCenter; // ivar: _ratioAssetClusters100mPlusFromCenter
@property (readonly, nonatomic) CGFloat ratioAssetClustersWithin100mOfCenter; // ivar: _ratioAssetClustersWithin100mOfCenter
@property (readonly, nonatomic) CGFloat ratioAssetClustersWithin10mOfCenter; // ivar: _ratioAssetClustersWithin10mOfCenter
@property (readonly, nonatomic) CGFloat ratioAssetClustersWithin20mOfCenter; // ivar: _ratioAssetClustersWithin20mOfCenter
@property (readonly, nonatomic) CGFloat ratioAssetClustersWithin50mOfCenter; // ivar: _ratioAssetClustersWithin50mOfCenter


-(id)identifier;
-(id)initWithNumberOfAssetClustersPerMomentMean:(CGFloat)arg0 numberOfAssetClustersPerMomentStdDev:(CGFloat)arg1 numberOfAssetsPerClusterMean:(CGFloat)arg2 numberOfAssetsPerClusterStdDev:(CGFloat)arg3 ratioAssetClustersWithin10mOfCenter:(CGFloat)arg4 ratioAssetClustersWithin20mOfCenter:(CGFloat)arg5 ratioAssetClustersWithin50mOfCenter:(CGFloat)arg6 ratioAssetClustersWithin100mOfCenter:(CGFloat)arg7 ratioAssetClusters100mPlusFromCenter:(CGFloat)arg8 ;
-(id)payload;


@end


#endif