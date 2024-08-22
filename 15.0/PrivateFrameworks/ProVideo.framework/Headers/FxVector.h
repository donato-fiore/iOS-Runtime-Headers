// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FXVECTOR_H
#define FXVECTOR_H


#import <Foundation/Foundation.h>


@interface FxVector : NSObject {
    NSUInteger _count;
    ? _u;
}




+(id)vectorWithCIVector:(id)arg0 ;
+(id)vectorWithString:(id)arg0 ;
+(id)vectorWithValues:(*CGFloat)arg0 count:(NSUInteger)arg1 ;
+(id)vectorWithX:(CGFloat)arg0 ;
+(id)vectorWithX:(CGFloat)arg0 Y:(CGFloat)arg1 ;
+(id)vectorWithX:(CGFloat)arg0 Y:(CGFloat)arg1 Z:(CGFloat)arg2 ;
+(id)vectorWithX:(CGFloat)arg0 Y:(CGFloat)arg1 Z:(CGFloat)arg2 W:(CGFloat)arg3 ;
-(CGFloat)W;
-(CGFloat)X;
-(CGFloat)Y;
-(CGFloat)Z;
-(CGFloat)valueAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)count;
-(id)ciVector;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCIVector:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithValues:(*CGFloat)arg0 count:(NSUInteger)arg1 ;
-(id)initWithX:(CGFloat)arg0 ;
-(id)initWithX:(CGFloat)arg0 Y:(CGFloat)arg1 ;
-(id)initWithX:(CGFloat)arg0 Y:(CGFloat)arg1 Z:(CGFloat)arg2 ;
-(id)initWithX:(CGFloat)arg0 Y:(CGFloat)arg1 Z:(CGFloat)arg2 W:(CGFloat)arg3 ;
-(id)stringRepresentation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif