// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICICOLOR_H
#define UICICOLOR_H

@class CIColor;


#import "UIColor.h"

@interface UICIColor : UIColor {
    CIColor *_ciColor;
    UIColor *_rgbColor;
}




-(BOOL)getRed:(*CGFloat)arg0 green:(*CGFloat)arg1 blue:(*CGFloat)arg2 alpha:(*CGFloat)arg3 ;
-(BOOL)getWhite:(*CGFloat)arg0 alpha:(*CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CIColor;
-(id)_rgbColor;
-(id)colorWithAlphaComponent:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCIColor:(id)arg0 ;
-(struct CGColor *)CGColor;
-(void)set;
-(void)setFill;
-(void)setStroke;


@end


#endif