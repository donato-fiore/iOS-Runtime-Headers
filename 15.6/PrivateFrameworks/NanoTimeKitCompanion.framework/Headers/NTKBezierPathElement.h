// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKBEZIERPATHELEMENT_H
#define NTKBEZIERPATHELEMENT_H


#import <Foundation/Foundation.h>


@interface NTKBezierPathElement : NSObject

@property (readonly, nonatomic) CGPoint endPoint;
@property (nonatomic) CGFloat length; // ivar: _length
@property (nonatomic) NSUInteger pointCount; // ivar: _pointCount
@property (nonatomic) *CGPoint points; // ivar: _points
@property (readonly, nonatomic) CGPoint startPoint;
@property (nonatomic) int type; // ivar: _type


-(CGFloat)computeLength;
-(NSUInteger)numberOfPointsForCGPathElementType:(int)arg0 ;
-(id)initWithStartPoint:(struct CGPoint )arg0 pathElement:(struct CGPathElement *)arg1 ;
-(struct CGPoint )pointOnPathForX:(CGFloat)arg0 ;
-(void)dealloc;


@end


#endif