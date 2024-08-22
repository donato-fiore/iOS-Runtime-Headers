// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKKEYLINEIMAGEFACTORY_H
#define NTKKEYLINEIMAGEFACTORY_H


#import <Foundation/Foundation.h>


@interface NTKKeylineImageFactory : NSObject



+(id)_cornerKeylineWithDevice:(id)arg0 size:(struct CGSize )arg1 innerCircleRadius:(CGFloat)arg2 strokeWidth:(CGFloat)arg3 filled:(BOOL)arg4 ;
+(id)_heartKeylineWithDevice:(id)arg0 outerRadius:(CGFloat)arg1 innerRadius:(CGFloat)arg2 sideCircleRadius:(CGFloat)arg3 topCircleRadius:(CGFloat)arg4 strokeWidth:(CGFloat)arg5 filled:(BOOL)arg6 ;
+(id)_smileKeylineWithDevice:(id)arg0 outerRadius:(CGFloat)arg1 innerRadius:(CGFloat)arg2 angle:(CGFloat)arg3 strokeWidth:(CGFloat)arg4 filled:(BOOL)arg5 ;
+(id)cornerKeylineWithDevice:(id)arg0 corner:(NSUInteger)arg1 size:(struct CGSize )arg2 innerCircleRadius:(CGFloat)arg3 strokeWidth:(CGFloat)arg4 filled:(BOOL)arg5 ;
+(id)heartKeylineWithDevice:(id)arg0 outerRadius:(CGFloat)arg1 innerRadius:(CGFloat)arg2 sideCircleRadius:(CGFloat)arg3 topCircleRadius:(CGFloat)arg4 strokeWidth:(CGFloat)arg5 filled:(BOOL)arg6 ;
+(id)heartKeylineWithDevice:(id)arg0 outerRadius:(CGFloat)arg1 innerRadius:(CGFloat)arg2 sideComplicationDistance:(CGFloat)arg3 topComplicationDistance:(CGFloat)arg4 strokeWidth:(CGFloat)arg5 filled:(BOOL)arg6 ;
+(id)smileKeylineWithDevice:(id)arg0 outerRadius:(CGFloat)arg1 innerRadius:(CGFloat)arg2 angle:(CGFloat)arg3 strokeWidth:(CGFloat)arg4 filled:(BOOL)arg5 ;


@end


#endif