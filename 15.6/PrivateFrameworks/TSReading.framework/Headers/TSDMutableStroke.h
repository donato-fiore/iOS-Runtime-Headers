// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDMUTABLESTROKE_H
#define TSDMUTABLESTROKE_H

@class TSUColor;
@protocol TSDMutableStroke;


#import "TSDStroke.h"
#import "TSDStrokePattern.h"

@interface TSDMutableStroke : TSDStroke <TSDMutableStroke>



@property (nonatomic) CGFloat actualWidth;
@property (nonatomic) int cap;
@property (copy, nonatomic) TSUColor *color;
@property (nonatomic) BOOL dontClearBackground;
@property (nonatomic) int join;
@property (nonatomic) CGFloat miterLimit;
@property (copy, nonatomic) TSDStrokePattern *pattern;
@property (nonatomic) CGFloat width;


+(id)emptyStroke;
+(id)stroke;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setPropertiesFromStroke:(id)arg0 ;


@end


#endif