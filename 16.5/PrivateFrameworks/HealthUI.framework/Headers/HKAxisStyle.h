// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKAXISSTYLE_H
#define HKAXISSTYLE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HKStrokeStyle.h"
#import "HKFillStyle.h"
#import "HKAxisLabelStyle.h"
#import "HKTickStyle.h"

@interface HKAxisStyle : NSObject <NSCopying>



@property (nonatomic) NSUInteger axisLabelPosition; // ivar: _axisLabelPosition
@property (retain, nonatomic) HKStrokeStyle *axisLineStyle; // ivar: _axisLineStyle
@property (retain, nonatomic) HKStrokeStyle *borderStyleForFill; // ivar: _borderStyleForFill
@property (nonatomic) CGFloat fillInnerPadding; // ivar: _fillInnerPadding
@property (nonatomic) CGFloat fillOuterPadding; // ivar: _fillOuterPadding
@property (retain, nonatomic) HKFillStyle *fillStyle; // ivar: _fillStyle
@property (retain, nonatomic) HKStrokeStyle *gridLineStyle; // ivar: _gridLineStyle
@property (retain, nonatomic) HKAxisLabelStyle *labelStyle; // ivar: _labelStyle
@property (nonatomic) NSInteger location; // ivar: _location
@property (retain, nonatomic) HKStrokeStyle *minorGridLineStyle; // ivar: _minorGridLineStyle
@property (retain, nonatomic) HKStrokeStyle *referenceGridLineStyle; // ivar: _referenceGridLineStyle
@property (nonatomic) BOOL showGridLines; // ivar: _showGridLines
@property (nonatomic) NSUInteger tickPositions; // ivar: _tickPositions
@property (retain, nonatomic) HKTickStyle *tickStyle; // ivar: _tickStyle


+(id)defaultStyle;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif