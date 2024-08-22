// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLDATACLUSTERING_H
#define PLDATACLUSTERING_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PLDataClustering : NSObject

@property (copy, nonatomic) id *clusterConsolidationBlock; // ivar: _clusterConsolidationBlock
@property (copy, nonatomic) id *clusterKeyElementBlock; // ivar: _clusterKeyElementBlock
@property (readonly, copy, nonatomic) id *distanceBlock; // ivar: _distanceBlock
@property (readonly, nonatomic) NSArray *numericValueKeypaths; // ivar: _numericValueKeypaths


+(id)clustering;
+(id)clusteringWithDistanceBlock:(id)arg0 ;
+(id)clusteringWithNumericValueKeypaths:(id)arg0 ;
-(**CGFloat)createDistancesMatrixForDataset:(id)arg0 ;
-(**CGFloat)createDistancesMatrixForDataset:(id)arg0 progressBlock:(id)arg1 ;
-(*CGFloat)createDistancesFlatMatrixForDataset:(id)arg0 ;
-(id)initWithDistanceBlock:(id)arg0 ;
-(id)initWithNumericValueKeypaths:(id)arg0 ;
-(id)performWithDataset:(id)arg0 progressBlock:(id)arg1 ;
-(void)freeDistancesFlatMatrix:(*CGFloat)arg0 ;
-(void)freeDistancesMatrix:(**CGFloat)arg0 forDataset:(id)arg1 ;


@end


#endif