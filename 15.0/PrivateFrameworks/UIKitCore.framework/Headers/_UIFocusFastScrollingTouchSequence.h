// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSFASTSCROLLINGTOUCHSEQUENCE_H
#define _UIFOCUSFASTSCROLLINGTOUCHSEQUENCE_H


#import <Foundation/Foundation.h>


@interface _UIFocusFastScrollingTouchSequence : NSObject

@property (nonatomic) CGVector axisLockedDistanceAccumulator; // ivar: _axisLockedDistanceAccumulator
@property (nonatomic) BOOL didReceiveProgrammaticFocusUpdate; // ivar: _didReceiveProgrammaticFocusUpdate
@property (nonatomic) BOOL didReceiveSpatialFocusUpdate; // ivar: _didReceiveSpatialFocusUpdate
@property (nonatomic) CGPoint endLocation; // ivar: _endLocation
@property (nonatomic) CGFloat peakSpeed; // ivar: _peakSpeed
@property (nonatomic) CGPoint previousLocation; // ivar: _previousLocation
@property (nonatomic) CGPoint startLocation; // ivar: _startLocation




@end


#endif