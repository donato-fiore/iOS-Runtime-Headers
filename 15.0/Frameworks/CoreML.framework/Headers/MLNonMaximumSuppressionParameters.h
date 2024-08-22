// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLNONMAXIMUMSUPPRESSIONPARAMETERS_H
#define MLNONMAXIMUMSUPPRESSIONPARAMETERS_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface MLNonMaximumSuppressionParameters : NSObject

@property (retain) NSString *confidenceInputFeatureName; // ivar: _confidenceInputFeatureName
@property (retain) NSString *confidenceOutputFeatureName; // ivar: _confidenceOutputFeatureName
@property CGFloat confidenceThreshold; // ivar: _confidenceThreshold
@property (retain) NSString *confidenceThresholdInputFeatureName; // ivar: _confidenceThresholdInputFeatureName
@property (retain) NSString *coordinatesInputFeatureName; // ivar: _coordinatesInputFeatureName
@property (retain) NSString *coordinatesOutputFeatureName; // ivar: _coordinatesOutputFeatureName
@property CGFloat iouThreshold; // ivar: _iouThreshold
@property (retain) NSString *iouThresholdInputFeatureName; // ivar: _iouThresholdInputFeatureName
@property (retain) NSArray *labelNames; // ivar: _labelNames
@property NSInteger maxBoxes; // ivar: _maxBoxes
@property NSUInteger minBoxes; // ivar: _minBoxes
@property NSUInteger numClasses; // ivar: _numClasses
@property BOOL perClass; // ivar: _perClass
@property int suppressionMethod; // ivar: _suppressionMethod


-(id)objectBoundingBoxOutputDescription;


@end


#endif