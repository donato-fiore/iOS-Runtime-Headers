// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNVECTOR_H
#define VNVECTOR_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VNPoint.h"

@interface VNVector : NSObject <NSCopying, NSSecureCoding>

 {
    VNPoint *_vectorProjections;
}


@property (readonly) CGFloat length;
@property (readonly) CGFloat r;
@property (readonly) CGFloat squaredLength;
@property (readonly) CGFloat theta;
@property (readonly) CGFloat x;
@property (readonly) CGFloat y;


+(CGFloat)dotProductOfVector:(id)arg0 vector:(id)arg1 ;
+(id)unitVectorForVector:(id)arg0 ;
+(id)vectorByAddingVector:(id)arg0 toVector:(id)arg1 ;
+(id)vectorByMultiplyingVector:(id)arg0 byScalar:(CGFloat)arg1 ;
+(id)vectorBySubtractingVector:(id)arg0 fromVector:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithR:(CGFloat)arg0 theta:(CGFloat)arg1 ;
-(id)initWithVectorHead:(id)arg0 tail:(id)arg1 ;
-(id)initWithXComponent:(CGFloat)arg0 yComponent:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif