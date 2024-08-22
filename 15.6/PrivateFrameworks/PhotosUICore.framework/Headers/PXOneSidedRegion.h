// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXONESIDEDREGION_H
#define PXONESIDEDREGION_H



#import "PXRegion.h"

@interface PXOneSidedRegion : PXRegion

@property (readonly, nonatomic) CGFloat a; // ivar: _a
@property (readonly, nonatomic) CGFloat b; // ivar: _b
@property (readonly, nonatomic) CGFloat c; // ivar: _c


+(id)identityRegion;
-(BOOL)_getIntersectionWithLineFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 intersectionFromPoint:(struct CGPoint *)arg2 toPoint:(struct CGPoint *)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)valueAtPoint:(struct CGPoint )arg0 ;
-(id)init;
-(id)initWithA:(CGFloat)arg0 b:(CGFloat)arg1 c:(CGFloat)arg2 ;
-(id)initWithEdge:(unsigned int)arg0 tiltedInset:(struct ? )arg1 rect:(struct CGRect )arg2 ;
-(id)initWithSideAngle:(CGFloat)arg0 point:(struct CGPoint )arg1 width:(CGFloat)arg2 offset:(CGFloat)arg3 ;
-(id)transformedWithAffineTransform:(struct CGAffineTransform )arg0 ;
-(struct CGPath *)createPathInRect:(struct CGRect )arg0 ;


@end


#endif