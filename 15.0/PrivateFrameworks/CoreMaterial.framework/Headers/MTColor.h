// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTCOLOR_H
#define MTCOLOR_H


#import <Foundation/Foundation.h>


@interface MTColor : NSObject {
    *CGColor _cachedColor;
}




+(id)blackColor;
+(id)colorWithCGColor:(struct CGColor *)arg0 ;
+(id)colorWithDescription:(id)arg0 ;
+(id)colorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)colorWithWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
+(id)pinkColor;
+(id)whiteColor;
-(id)_initWithCGColor:(struct CGColor *)arg0 ;
-(id)_initWithDescription:(id)arg0 ;
-(id)_rgbColor;
-(id)colorBlendedWithColor:(id)arg0 ;
-(id)colorDescription;
-(id)colorWithAdditionalAlphaComponent:(CGFloat)arg0 ;
-(id)colorWithAlphaComponent:(CGFloat)arg0 ;
-(struct CAColorMatrix )sourceOverColorMatrix;
-(struct CGColor *)CGColor;
-(void)dealloc;


@end


#endif