// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVMATRIX44DOUBLE_H
#define PVMATRIX44DOUBLE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PVMatrix44Double : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) ? SIMDDouble4x4; // ivar: _SIMDDouble4x4
@property (nonatomic) ? SIMDFloat4x4;


+(BOOL)isMatrix:(id)arg0 equivalentTo:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)matrix;
+(id)matrixWithPCMatrix44Double:(id)arg0 ;
+(id)matrixWithPCMatrix44d:(*void)arg0 ;
+(id)matrixWithSIMDDouble4x4:(struct ? )arg0 ;
+(id)matrixWithSIMDFloat4x4:(struct ? )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFinite;
-(BOOL)isIdentity;
-(CGFloat)valueAtCol:(NSUInteger)arg0 row:(NSUInteger)arg1 ;
-(NSUInteger)hash;
-(id)compactDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)extendedDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPCMatrix44Double:(id)arg0 ;
-(id)initWithPCMatrix44d:(*void)arg0 ;
-(id)initWithSIMDDouble4x4:(struct ? )arg0 ;
-(id)initWithSIMDFloat4x4:(struct ? )arg0 ;
-(id)pcMatrix44Double;
-(struct PVTransformInfo )getTransformInfo:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getPCMatrix44d:(*void)arg0 ;
-(void)makeIdentity;
-(void)setPCMatrix44Double:(id)arg0 ;
-(void)setPCMatrix44d:(*void)arg0 ;
-(void)setValue:(CGFloat)arg0 col:(NSUInteger)arg1 row:(NSUInteger)arg2 ;
-(void)transpose;


@end


#endif