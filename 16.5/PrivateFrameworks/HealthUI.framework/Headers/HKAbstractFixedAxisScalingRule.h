// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKABSTRACTFIXEDAXISSCALINGRULE_H
#define HKABSTRACTFIXEDAXISSCALINGRULE_H

@class NSNumber, NSDictionary, NSString;
@protocol HKInteractiveChartsAxisScalingRule;

#import <Foundation/Foundation.h>

#import "HKValueRange.h"

@interface HKAbstractFixedAxisScalingRule : NSObject <HKInteractiveChartsAxisScalingRule>

 {
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}


@property (readonly, nonatomic) NSDictionary *axisBoundsOverrides; // ivar: _axisBoundsOverrides
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HKValueRange *defaultAxisBounds; // ivar: _defaultAxisBounds
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldExpandBoundsForOutliers; // ivar: _shouldExpandBoundsForOutliers
@property (readonly) Class superclass;


-(id)_valueRangeForZoomLevel:(NSInteger)arg0 ;
-(id)init;
-(id)noDataStartingRange;
-(id)yAxisBounds;
-(id)yValueRangeForRange:(id)arg0 zoomLevel:(NSInteger)arg1 ;


@end


#endif