// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SMMGEOMETRY_H
#define SMMGEOMETRY_H


#import <Foundation/Foundation.h>


@interface SMMGeometry : NSObject



+(CGFloat)ceilValue:(CGFloat)arg0 toScale:(CGFloat)arg1 ;
+(CGFloat)ceilValue:(CGFloat)arg0 toScaleOfScreen:(id)arg1 ;
+(CGFloat)ceilValue:(CGFloat)arg0 toScaleOfView:(id)arg1 ;
+(CGFloat)floorValue:(CGFloat)arg0 toScale:(CGFloat)arg1 ;
+(CGFloat)floorValue:(CGFloat)arg0 toScaleOfScreen:(id)arg1 ;
+(CGFloat)floorValue:(CGFloat)arg0 toScaleOfView:(id)arg1 ;
+(CGFloat)roundValue:(CGFloat)arg0 toScale:(CGFloat)arg1 ;
+(CGFloat)roundValue:(CGFloat)arg0 toScaleOfScreen:(id)arg1 ;
+(CGFloat)roundValue:(CGFloat)arg0 toScaleOfView:(id)arg1 ;
+(struct CGPoint )getCenter:(struct CGRect )arg0 ;


@end


#endif