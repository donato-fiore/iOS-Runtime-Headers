// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKELECTROCARDIOGRAMGRIDOPTIONS_H
#define HKELECTROCARDIOGRAMGRIDOPTIONS_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface HKElectrocardiogramGridOptions : NSObject

@property (nonatomic) NSUInteger axis; // ivar: _axis
@property (retain, nonatomic) UIColor *lineColor; // ivar: _lineColor
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (readonly, nonatomic) CGAffineTransform scale;
@property (nonatomic) NSUInteger unitMultiple; // ivar: _unitMultiple


-(id)initWithUnitMultiple:(NSInteger)arg0 axis:(NSUInteger)arg1 lineColor:(id)arg2 lineWidth:(CGFloat)arg3 ;


@end


#endif