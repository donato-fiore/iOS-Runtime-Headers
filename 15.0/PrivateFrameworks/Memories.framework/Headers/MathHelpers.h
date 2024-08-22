// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MATHHELPERS_H
#define MATHHELPERS_H


#import <Foundation/Foundation.h>


@interface MathHelpers : NSObject



+(CGFloat)mapValue:(CGFloat)arg0 fromRangeStart:(CGFloat)arg1 fromRangeEnd:(CGFloat)arg2 toRangeStart:(CGFloat)arg3 toRangeEnd:(CGFloat)arg4 clamp:(BOOL)arg5 ;
+(struct CGPoint )endPointOfLineWithStartPoint:(struct CGPoint )arg0 slope:(struct CGPoint )arg1 distance:(CGFloat)arg2 ;
+(struct CGPoint )midPointBetweenPoint1:(struct CGPoint )arg0 point2:(struct CGPoint )arg1 ;
+(struct CGPoint )negatePoint:(struct CGPoint )arg0 ;
+(struct CGPoint )slopeOfLineWithStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 ;
+(struct CGRect )centerRect:(struct CGRect )arg0 overPoint:(struct CGPoint )arg1 ;
+(struct CGRect )centerRect:(struct CGRect )arg0 overRect:(struct CGRect )arg1 ;
+(struct CGRect )horizontallyCenterRect:(struct CGRect )arg0 overPoint:(struct CGPoint )arg1 ;
+(struct CGRect )horizontallyCenterRect:(struct CGRect )arg0 overRect:(struct CGRect )arg1 ;
+(struct CGRect )moveRect:(struct CGRect )arg0 toKeepWithinRect:(struct CGRect )arg1 ;
+(struct CGRect )moveRectHorizontally:(struct CGRect )arg0 toKeepWithinRect:(struct CGRect )arg1 ;
+(struct CGRect )moveRectVertically:(struct CGRect )arg0 toKeepWithinRect:(struct CGRect )arg1 ;
+(struct CGRect )rectWithAspectRatio:(CGFloat)arg0 thatFillsRect:(struct CGRect )arg1 ;
+(struct CGRect )rectWithAspectRatio:(CGFloat)arg0 thatFillsRectBiasedVertically:(struct CGRect )arg1 isTitle:(BOOL)arg2 sourceAspectRatio:(CGFloat)arg3 ;
+(struct CGRect )rectWithAspectRatio:(CGFloat)arg0 thatFillsRectBiasedVertically:(struct CGRect )arg1 sourceAspectRatio:(CGFloat)arg2 imageSize:(struct CGSize )arg3 ;
+(struct CGRect )rectWithLongestWidthByComparingRect1:(struct CGRect )arg0 rect2:(struct CGRect )arg1 ;
+(struct CGRect )rectWithShortestWidthByComparingRect1:(struct CGRect )arg0 rect2:(struct CGRect )arg1 ;
+(struct CGRect )scaleRect:(struct CGRect )arg0 horizontalScale:(CGFloat)arg1 verticalScale:(CGFloat)arg2 maintainCenterPoint:(BOOL)arg3 ;
+(struct CGRect )verticallyCenterRect:(struct CGRect )arg0 overPoint:(struct CGPoint )arg1 ;
+(struct CGRect )verticallyCenterRect:(struct CGRect )arg0 overRect:(struct CGRect )arg1 ;
+(void)lineWithMidPoint:(struct CGPoint )arg0 slope:(struct CGPoint )arg1 length:(CGFloat)arg2 outStartPoint:(struct CGPoint *)arg3 outEndPoint:(struct CGPoint *)arg4 ;


@end


#endif