// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLKNEARESTNEIGHBORSCLASSIFIERPARAMETERS_H
#define MLKNEARESTNEIGHBORSCLASSIFIERPARAMETERS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MLKNearestNeighborsClassifierParameters : NSObject

@property (retain) NSObject *defaultLabel; // ivar: _defaultLabel
@property NSInteger indexType; // ivar: _indexType
@property NSUInteger leafSize; // ivar: _leafSize
@property (retain) NSString *nearestDistancesFeatureName; // ivar: _nearestDistancesFeatureName
@property (retain) NSString *nearestLabelsFeatureName; // ivar: _nearestLabelsFeatureName
@property NSUInteger numberOfDimensions; // ivar: _numberOfDimensions
@property NSInteger weightingScheme; // ivar: _weightingScheme




@end


#endif