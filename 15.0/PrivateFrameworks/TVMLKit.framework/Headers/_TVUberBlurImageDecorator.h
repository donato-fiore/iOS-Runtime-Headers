// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVUBERBLURIMAGEDECORATOR_H
#define _TVUBERBLURIMAGEDECORATOR_H

@class UIColor;


#import "TVImageDecorator.h"

@interface _TVUberBlurImageDecorator : TVImageDecorator

@property (nonatomic) NSUInteger blurStyle; // ivar: _blurStyle
@property (nonatomic) NSUInteger blurType; // ivar: _blurType
@property (retain, nonatomic) UIColor *gradientColor; // ivar: _gradientColor


-(id)decorate:(id)arg0 scaledWithSize:(struct CGSize )arg1 croppedToFit:(BOOL)arg2 ;
-(id)decoratorIdentifier;


@end


#endif