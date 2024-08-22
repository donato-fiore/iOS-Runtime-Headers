// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIVECTOR_H
#define CIVECTOR_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CIVector : NSObject <NSCopying, NSSecureCoding>

 {
    NSUInteger _count;
    ? _u;
}


@property (readonly) CGAffineTransform CGAffineTransformValue;
@property (readonly) CGPoint CGPointValue;
@property (readonly) CGRect CGRectValue;
@property (readonly) CGFloat W;
@property (readonly) CGFloat X;
@property (readonly) CGFloat Y;
@property (readonly) CGFloat Z;
@property (readonly) *CGFloat _values;
@property (readonly) NSUInteger count;
@property (readonly) NSString *stringRepresentation;


+(BOOL)supportsSecureCoding;
+(id)vectorWithCGAffineTransform:(struct CGAffineTransform )arg0 ;
+(id)vectorWithCGPoint:(struct CGPoint )arg0 ;
+(id)vectorWithCGRect:(struct CGRect )arg0 ;
+(id)vectorWithString:(id)arg0 ;
+(id)vectorWithValues:(*CGFloat)arg0 count:(NSUInteger)arg1 ;
+(id)vectorWithX:(CGFloat)arg0 ;
+(id)vectorWithX:(CGFloat)arg0 Y:(CGFloat)arg1 ;
+(id)vectorWithX:(CGFloat)arg0 Y:(CGFloat)arg1 Z:(CGFloat)arg2 ;
+(id)vectorWithX:(CGFloat)arg0 Y:(CGFloat)arg1 Z:(CGFloat)arg2 W:(CGFloat)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)valueAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(float)_dot:(id)arg0 ;
-(float)_norm;
-(id)_orthonormalizeTo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCGAffineTransform:(struct CGAffineTransform )arg0 ;
-(id)initWithCGPoint:(struct CGPoint )arg0 ;
-(id)initWithCGRect:(struct CGRect )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithValues:(*CGFloat)arg0 count:(NSUInteger)arg1 ;
-(id)initWithX:(CGFloat)arg0 ;
-(id)initWithX:(CGFloat)arg0 Y:(CGFloat)arg1 ;
-(id)initWithX:(CGFloat)arg0 Y:(CGFloat)arg1 Z:(CGFloat)arg2 ;
-(id)initWithX:(CGFloat)arg0 Y:(CGFloat)arg1 Z:(CGFloat)arg2 W:(CGFloat)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalize;


@end


#endif