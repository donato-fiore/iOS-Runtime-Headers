// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIECHARTSLICE_H
#define SBPIECHARTSLICE_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface SBPieChartSlice : NSObject

@property (readonly) UIColor *fillColor; // ivar: _fillColor
@property (readonly) CGFloat value; // ivar: _value


+(id)sliceWithValue:(CGFloat)arg0 fillColor:(id)arg1 ;
-(id)initWithValue:(CGFloat)arg0 fillColor:(id)arg1 ;


@end


#endif