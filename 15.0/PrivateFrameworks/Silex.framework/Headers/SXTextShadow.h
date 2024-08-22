// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXTEXTSHADOW_H
#define SXTEXTSHADOW_H

@class UIColor;


#import "SXJSONObject.h"

@interface SXTextShadow : SXJSONObject

@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) CGPoint offset;
@property (readonly, nonatomic) CGFloat opacity;
@property (readonly, nonatomic) CGFloat radius;


-(id)TSDShadow;


@end


#endif