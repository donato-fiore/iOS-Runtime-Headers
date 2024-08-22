// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCVEGASCENEGRAPHUTILS_H
#define CCVEGASCENEGRAPHUTILS_H


#import <Foundation/Foundation.h>


@interface CCVegaScenegraphUtils : NSObject



+(id)createOrUpdateGradientLayer:(id)arg0 existingLayer:(id)arg1 delegate:(id)arg2 ;
+(id)createOrUpdateLayer:(id)arg0 path:(struct CGPath *)arg1 gradient:(id)arg2 mode:(int)arg3 lineWidth:(CGFloat)arg4 delegate:(id)arg5 ;
+(id)createOrUpdateLayer:(id)arg0 path:(struct CGPath *)arg1 withMark:(id)arg2 delegate:(id)arg3 ;
+(struct CGPath *)newPathForRectangleMark:(id)arg0 offset:(CGFloat)arg1 ;
+(void)applyGradient:(id)arg0 toLayer:(id)arg1 delegate:(id)arg2 ;
+(void)updateShapeLayer:(id)arg0 withMark:(id)arg1 delegate:(id)arg2 ;
+(void)updateShapeLayerFill:(id)arg0 withMark:(id)arg1 delegate:(id)arg2 ;
+(void)updateShapeLayerStroke:(id)arg0 withMark:(id)arg1 delegate:(id)arg2 ;


@end


#endif