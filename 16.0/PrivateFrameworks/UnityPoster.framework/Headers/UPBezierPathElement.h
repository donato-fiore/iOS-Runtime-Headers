// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UPBEZIERPATHELEMENT_H
#define UPBEZIERPATHELEMENT_H


#import <Foundation/Foundation.h>


@interface UPBezierPathElement : NSObject

@property (readonly, nonatomic) CGPoint endPoint;
@property (nonatomic) NSUInteger pointCount; // ivar: _pointCount
@property (nonatomic) *CGPoint points; // ivar: _points
@property (readonly, nonatomic) CGPoint startPoint;
@property (nonatomic) int type; // ivar: _type


-(id)initWithStartPoint:(struct CGPoint )arg0 pathElement:(struct CGPathElement *)arg1 ;
-(void)dealloc;


@end


#endif