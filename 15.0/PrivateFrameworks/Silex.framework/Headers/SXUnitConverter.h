// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXUNITCONVERTER_H
#define SXUNITCONVERTER_H


#import <Foundation/Foundation.h>


@interface SXUnitConverter : NSObject {
    CGFloat _componentWidth;
    CGFloat _parentWidth;
    CGFloat _documentGutter;
    CGFloat _documentMargin;
    CGFloat _contentScaleFactor;
    CGSize _viewportSize;
}




-(CGFloat)convertValueToPoints:(struct _SXConvertibleValue )arg0 ;
-(id)initWithComponentWidth:(CGFloat)arg0 parentWidth:(CGFloat)arg1 documentGutter:(CGFloat)arg2 documentMargin:(CGFloat)arg3 viewportSize:(struct CGSize )arg4 contentScaleFactor:(CGFloat)arg5 ;


@end


#endif