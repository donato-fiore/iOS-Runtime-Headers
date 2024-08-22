// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CICOLOR_H
#define CICOLOR_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CIColor : NSObject <NSSecureCoding, NSCopying>

 {
    *void _priv;
    *void _pad;
}


@property (readonly) CGFloat alpha;
@property (readonly) CGFloat blue;
@property (readonly) *CGColorSpace colorSpace;
@property (readonly) *CGFloat components;
@property (readonly) CGFloat green;
@property (readonly) NSUInteger numberOfComponents;
@property (readonly) CGFloat red;
@property (readonly) NSString *stringRepresentation;


+(BOOL)supportsSecureCoding;
+(id)blackColor;
+(id)clearColor;
+(id)colorWithCGColor:(struct CGColor *)arg0 ;
+(id)colorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 ;
+(id)colorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)colorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 colorSpace:(struct CGColorSpace *)arg4 ;
+(id)colorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 colorSpace:(struct CGColorSpace *)arg3 ;
+(id)colorWithString:(id)arg0 ;
+(id)cyanColor;
+(id)grayColor;
+(id)magentaColor;
+(id)whiteColor;
+(id)yellowColor;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugQuickLookObject;
-(id)description;
-(id)init;
-(id)initWithCGColor:(struct CGColor *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 colorSpace:(struct CGColorSpace *)arg4 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 colorSpace:(struct CGColorSpace *)arg3 ;
-(id)initWithString:(id)arg0 ;
-(struct CGColor *)cgColor;
-(struct CGColor *)rgbColor;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif