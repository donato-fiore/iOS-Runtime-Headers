// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKGRAPHVIEWSELECTIONSTYLE_H
#define HKGRAPHVIEWSELECTIONSTYLE_H


#import <Foundation/Foundation.h>

#import "HKStrokeStyle.h"

@interface HKGraphViewSelectionStyle : NSObject

@property (retain, nonatomic) HKStrokeStyle *selectedPointLineStrokeStyle; // ivar: _selectedPointLineStrokeStyle
@property (retain, nonatomic) HKStrokeStyle *touchPointLineStrokeStyle; // ivar: _touchPointLineStrokeStyle
@property (nonatomic) CGFloat unselectedSeriesAlpha; // ivar: _unselectedSeriesAlpha




@end


#endif