// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPATTERNCGCOLOR_H
#define UIPATTERNCGCOLOR_H



#import "UICGColor.h"

@interface UIPatternCGColor : UICGColor {
    *CGColor _cachedUnflippedColor;
}




-(BOOL)getHue:(*CGFloat)arg0 saturation:(*CGFloat)arg1 brightness:(*CGFloat)arg2 alpha:(*CGFloat)arg3 ;
-(BOOL)getRed:(*CGFloat)arg0 green:(*CGFloat)arg1 blue:(*CGFloat)arg2 alpha:(*CGFloat)arg3 ;
-(BOOL)getWhite:(*CGFloat)arg0 alpha:(*CGFloat)arg1 ;
-(BOOL)isPatternColor;
-(id)colorSpaceName;
-(id)description;
-(id)initWithCGColor:(struct CGColor *)arg0 ;
-(void)dealloc;


@end


#endif