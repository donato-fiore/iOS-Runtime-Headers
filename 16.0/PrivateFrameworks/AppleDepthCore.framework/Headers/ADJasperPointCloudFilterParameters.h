// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADJASPERPOINTCLOUDFILTERPARAMETERS_H
#define ADJASPERPOINTCLOUDFILTERPARAMETERS_H


#import <Foundation/Foundation.h>


@interface ADJasperPointCloudFilterParameters : NSObject

@property (nonatomic) float confidenceThreshold; // ivar: _confidenceThreshold
@property (nonatomic) NSUInteger echoMode; // ivar: _echoMode
@property (nonatomic) float maxDistance; // ivar: _maxDistance
@property (nonatomic) float minDistance; // ivar: _minDistance
@property (nonatomic) float shortRangeConfidenceThreshold; // ivar: _shortRangeConfidenceThreshold
@property (nonatomic) float shortRangeDepthThreshold; // ivar: _shortRangeDepthThreshold


-(id)init;


@end


#endif