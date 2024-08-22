// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXTEXTDECORATION_H
#define SXTEXTDECORATION_H

@class UIColor;


#import "SXJSONObject.h"

@interface SXTextDecoration : SXJSONObject

@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) int style;
@property (readonly, nonatomic) NSInteger width;


-(int)styleWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif