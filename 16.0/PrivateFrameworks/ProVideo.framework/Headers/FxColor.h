// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FXCOLOR_H
#define FXCOLOR_H

@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface FxColor : NSObject <NSCoding>

 {
    *void _priv;
    *void _pad;
}




+(id)colorWithCGColor:(struct CGColor *)arg0 ;
+(id)colorWithCIColor:(id)arg0 ;
+(id)colorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 ;
+(id)colorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)colorWithString:(id)arg0 ;
-(*CGFloat)components;
-(CGFloat)alpha;
-(CGFloat)blue;
-(CGFloat)green;
-(CGFloat)red;
-(NSUInteger)numberOfComponents;
-(id)ciColor;
-(id)description;
-(id)initWithCGColor:(struct CGColor *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)initWithString:(id)arg0 ;
-(id)stringRepresentation;
-(struct CGColor *)_cgColor;
-(struct CGColorSpace *)colorSpace;
-(void)convertToRGBA:(*CGFloat)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif