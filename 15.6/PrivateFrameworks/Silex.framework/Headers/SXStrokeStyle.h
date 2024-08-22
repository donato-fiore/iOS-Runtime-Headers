// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXSTROKESTYLE_H
#define SXSTROKESTYLE_H

@class UIColor;


#import "SXJSONObject.h"

@interface SXStrokeStyle : SXJSONObject

@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) int style;
@property (readonly, nonatomic) _SXConvertibleValue width;


-(int)styleWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif