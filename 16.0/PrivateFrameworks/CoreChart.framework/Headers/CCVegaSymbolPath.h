// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCVEGASYMBOLPATH_H
#define CCVEGASYMBOLPATH_H


#import <Foundation/Foundation.h>


@interface CCVegaSymbolPath : NSObject



+(struct CGPath *)newArrowPathWithSize:(CGFloat)arg0 ;
+(struct CGPath *)newCirclePathWithSize:(CGFloat)arg0 ;
+(struct CGPath *)newCrossPathWithSize:(CGFloat)arg0 ;
+(struct CGPath *)newDiamondPathWithSize:(CGFloat)arg0 ;
+(struct CGPath *)newPathForBuiltin:(id)arg0 withSize:(CGFloat)arg1 ;
+(struct CGPath *)newPathForCustomSVGShape:(id)arg0 withSize:(CGFloat)arg1 withContext:(id)arg2 ;
+(struct CGPath *)newPathForMark:(id)arg0 ;
+(struct CGPath *)newSquarePathWithSize:(CGFloat)arg0 ;
+(struct CGPath *)newStrokePathWithSize:(CGFloat)arg0 ;
+(struct CGPath *)newTriangleDownPathWithSize:(CGFloat)arg0 ;
+(struct CGPath *)newTriangleLeftPathWithSize:(CGFloat)arg0 ;
+(struct CGPath *)newTrianglePathWithSize:(CGFloat)arg0 ;
+(struct CGPath *)newTriangleRightPathWithSize:(CGFloat)arg0 ;
+(struct CGPath *)newTriangleUpPathWithSize:(CGFloat)arg0 ;
+(struct CGPath *)newWedgePathWithSize:(CGFloat)arg0 ;


@end


#endif