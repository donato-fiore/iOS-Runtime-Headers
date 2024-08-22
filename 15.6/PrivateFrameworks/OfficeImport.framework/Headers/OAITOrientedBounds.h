// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OAITORIENTEDBOUNDS_H
#define OAITORIENTEDBOUNDS_H


#import <Foundation/Foundation.h>


@interface OAITOrientedBounds : NSObject



+(float)scaleFactorFromLength:(float)arg0 toLength:(float)arg1 ;
+(id)absoluteOrientedBoundsOfDrawable:(id)arg0 ;
+(id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg0 parentOrientedBounds:(id)arg1 parentLogicalBounds:(struct CGRect )arg2 ;
+(id)adjustedOrientedBoundsWithOrientedBounds:(id)arg0 ;
+(id)adjustedOrientedBoundsWithOrientedBounds:(id)arg0 logicalBounds:(struct CGRect )arg1 ;
+(id)relativeOrientedBoundsOfDrawable:(id)arg0 ;
+(id)relativeOrientedBoundsWithAbsoluteOrientedBounds:(id)arg0 parentOrientedBounds:(id)arg1 parentLogicalBounds:(struct CGRect )arg2 ;
+(struct CGAffineTransform )transformFromBounds:(struct CGRect )arg0 toOrientedBounds:(id)arg1 ;
+(struct CGRect )axisParallelBoundsOfOrientedBounds:(id)arg0 ;


@end


#endif