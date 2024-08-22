// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDLTRANSFORMORIENTOP_H
#define MDLTRANSFORMORIENTOP_H

@class NSString;
@protocol MDLTransformOp;

#import <Foundation/Foundation.h>

#import "MDLAnimatedQuaternion.h"

@interface MDLTransformOrientOp : NSObject <MDLTransformOp>



@property (readonly, nonatomic) MDLAnimatedQuaternion *animatedValue; // ivar: _animatedValue
@property (nonatomic) BOOL inverse; // ivar: _inverse
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(BOOL)IsInverseOp;
-(id)initWithName:(id)arg0 inverse:(BOOL)arg1 data:(id)arg2 ;
-(struct ? )double4x4AtTime:(CGFloat)arg0 ;
-(struct ? )float4x4AtTime:(CGFloat)arg0 ;


@end


#endif