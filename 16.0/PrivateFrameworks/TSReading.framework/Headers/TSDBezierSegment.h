// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDBEZIERSEGMENT_H
#define TSDBEZIERSEGMENT_H


#import <Foundation/Foundation.h>


@interface TSDBezierSegment : NSObject {
    CGPoint mA;
    CGPoint mOut;
    CGPoint mIn;
    CGPoint mB;
}


@property (readonly, nonatomic) BOOL bogusSegment;
@property (readonly, nonatomic) CGPoint fromPoint;
@property (readonly, nonatomic) CGPoint inPoint;
@property (readonly, nonatomic) CGPoint outPoint;
@property (readonly, nonatomic) CGPoint toPoint;


+(id)segmentFromPoint:(struct CGPoint )arg0 outPoint:(struct CGPoint )arg1 inPoint:(struct CGPoint )arg2 toPoint:(struct CGPoint )arg3 ;
-(CGFloat)parametricValueForPoint:(struct CGPoint )arg0 ;
-(id)description;
-(id)initFromPoint:(struct CGPoint )arg0 outPoint:(struct CGPoint )arg1 inPoint:(struct CGPoint )arg2 toPoint:(struct CGPoint )arg3 ;
-(struct CGPoint )closestPointToPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )pointAtParametricValue:(CGFloat)arg0 ;
-(void)splitAtParametricValue:(CGFloat)arg0 left:(*id)arg1 right:(*id)arg2 ;


@end


#endif