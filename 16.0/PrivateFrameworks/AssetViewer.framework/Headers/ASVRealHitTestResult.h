// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASVREALHITTESTRESULT_H
#define ASVREALHITTESTRESULT_H

@class NSUUID;


#import "ASVHitTestResult.h"

@interface ASVRealHitTestResult : ASVHitTestResult {
    ? _localPosition;
}


@property (readonly, nonatomic) NSInteger alignment; // ivar: _alignment
@property (readonly, nonatomic) float distanceFromFeaturePoint;
@property ? localPosition;
@property (readonly, nonatomic) NSUUID *planeIdentifier; // ivar: _planeIdentifier
@property (readonly, nonatomic) ? worldTransform; // ivar: _worldTransform




@end


#endif