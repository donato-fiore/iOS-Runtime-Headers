// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXCOMPONENTSHADOW_H
#define SXCOMPONENTSHADOW_H

@class UIColor;


#import "SXJSONObject.h"
#import "SXConvertiblePoint.h"

@interface SXComponentShadow : SXJSONObject

@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) SXConvertiblePoint *offset;
@property (readonly, nonatomic) CGFloat opacity;
@property (readonly, nonatomic) _SXConvertibleValue radius;




@end


#endif