// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDWRAPPOLYGON_H
#define TSDWRAPPOLYGON_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSDWrapPolygon : NSObject <NSCopying>

 {
    *void mPolygon;
    BOOL mIntersectsSelf;
    BOOL mComputedSelfIntersection;
    CGRect mBounds;
    BOOL mComputedBounds;
}




-(*void)polygon;
-(BOOL)intersectsSelf;
-(id)bezierPath;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(int)p_countSegments;
-(struct CGPoint )intersectionPointBetween:(struct CGPoint )arg0 and:(struct CGPoint )arg1 ;
-(struct CGRect )bounds;
-(void)dealloc;
-(void)p_computeIntersectionState;
-(void)p_freePolygon;
-(void)p_setPolygon:(struct ? *)arg0 ;
-(void)setIntersectsSelf:(BOOL)arg0 ;
-(void)setPath:(id)arg0 ;
-(void)transformUsingAffineTransform:(struct CGAffineTransform )arg0 ;


@end


#endif