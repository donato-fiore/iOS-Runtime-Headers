// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLTRANSFORMROTATEOP_H
#define MDLTRANSFORMROTATEOP_H

@class NSString;
@protocol MDLTransformOp;

#import <Foundation/Foundation.h>

#import "MDLAnimatedVector3.h"

@interface MDLTransformRotateOp : NSObject <MDLTransformOp>



@property (readonly, nonatomic) MDLAnimatedVector3 *animatedValue; // ivar: _animatedValue
@property (nonatomic) BOOL inverse; // ivar: _inverse
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger order; // ivar: _order


-(BOOL)IsInverseOp;
-(id)initWithName:(id)arg0 inverse:(BOOL)arg1 order:(NSUInteger)arg2 data:(id)arg3 ;
-(struct ? )double4x4AtTime:(CGFloat)arg0 ;
-(struct ? )float4x4AtTime:(CGFloat)arg0 ;


@end


#endif