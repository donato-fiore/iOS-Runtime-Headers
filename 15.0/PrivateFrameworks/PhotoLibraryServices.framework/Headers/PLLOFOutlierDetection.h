// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLLOFOUTLIERDETECTION_H
#define PLLOFOUTLIERDETECTION_H


#import <Foundation/Foundation.h>


@interface PLLOFOutlierDetection : NSObject

@property (nonatomic) BOOL filterZeroDistanceDataset; // ivar: _filterZeroDistanceDataset
@property (nonatomic) NSUInteger k; // ivar: _k


-(**CGFloat)createDistancesMatrixForDataset:(id)arg0 distanceBlock:(id)arg1 ;
-(id)createKNNMatrixWithDistanceMatrix:(**CGFloat)arg0 size:(NSUInteger)arg1 ;
-(id)filteredObjectsWithDataset:(id)arg0 distanceBlock:(id)arg1 ;
-(id)init;
-(id)lofScoresWithDataset:(id)arg0 distanceBlock:(id)arg1 ;
-(void)freeDistancesMatrix:(**CGFloat)arg0 forDataset:(id)arg1 ;


@end


#endif