// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCOMPONENTEXPOSURETRACKING_H
#define SXCOMPONENTEXPOSURETRACKING_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "SXComponentView.h"

@interface SXComponentExposureTracking : NSObject

@property (readonly, weak, nonatomic) SXComponentView *componentView; // ivar: _componentView
@property (readonly, copy, nonatomic) id *conditionBlock; // ivar: _conditionBlock
@property (readonly, copy, nonatomic) id *exposureStateChangeBlock; // ivar: _exposureStateChangeBlock
@property (nonatomic) NSInteger lastObservedVisibilityState; // ivar: _lastObservedVisibilityState
@property (readonly, nonatomic) NSDate *lastStateChange; // ivar: _lastStateChange
@property (nonatomic) CGFloat maximumVisibleY; // ivar: _maximumVisibleY
@property (nonatomic) CGFloat minimumVisibleY; // ivar: _minimumVisibleY
@property (readonly, nonatomic) NSUInteger traits; // ivar: _traits
@property (readonly, nonatomic) CGFloat visibilityFactor; // ivar: _visibilityFactor


// +(id)exposureTrackingWithComponent:(id)arg0 traits:(NSUInteger)arg1 exposureStateChangeBlock:(id)arg2 conditionBlock:(unk)arg3  ;
// -(id)initWithComponent:(id)arg0 traits:(NSUInteger)arg1 exposureStateChangeBlock:(id)arg2 conditionBlock:(unk)arg3  ;
-(void)calculateVisibilityFactor;


@end


#endif