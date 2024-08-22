// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXREGION_H
#define PXREGION_H


#import <Foundation/Foundation.h>


@interface PXRegion : NSObject



-(CGFloat)opacityAtPoint:(struct CGPoint )arg0 ;
-(CGFloat)valueAtPoint:(struct CGPoint )arg0 ;
-(id)denormalizedWithBasisRect:(struct CGRect )arg0 ;
-(id)normalizedWithBasisRect:(struct CGRect )arg0 ;
-(id)transformedWithAffineTransform:(struct CGAffineTransform )arg0 ;
-(struct CGPath *)createPathInRect:(struct CGRect )arg0 ;


@end


#endif