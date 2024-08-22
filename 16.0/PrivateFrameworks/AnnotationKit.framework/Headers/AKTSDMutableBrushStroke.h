// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKTSDMUTABLEBRUSHSTROKE_H
#define AKTSDMUTABLEBRUSHSTROKE_H

@class UIColor, NSString;


#import "AKTSDBrushStroke.h"

@interface AKTSDMutableBrushStroke : AKTSDBrushStroke

@property (retain, nonatomic) UIColor *color; // ivar: color
@property (nonatomic) int join; // ivar: join
@property (nonatomic) CGFloat miterLimit; // ivar: miterLimit
@property (copy, nonatomic) NSString *strokeName; // ivar: strokeName
@property (nonatomic) CGFloat width; // ivar: width


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif