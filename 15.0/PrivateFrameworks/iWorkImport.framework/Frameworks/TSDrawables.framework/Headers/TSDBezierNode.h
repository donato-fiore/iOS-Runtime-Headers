// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDBEZIERNODE_H
#define TSDBEZIERNODE_H


#import <Foundation/Foundation.h>


@interface TSDBezierNode : NSObject

@property (nonatomic) CGPoint inControlPoint; // ivar: mIn
@property (readonly, nonatomic) BOOL isCollapsed;
@property (nonatomic) CGPoint nodePoint; // ivar: mNode
@property (nonatomic) CGPoint outControlPoint; // ivar: mOut
@property (nonatomic) int reflectedState; // ivar: mReflectedState
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: mSelected
@property (nonatomic) int type; // ivar: mType


+(id)bezierNodeWithPoint:(struct CGPoint )arg0 ;
+(id)bezierNodeWithPoint:(struct CGPoint )arg0 inControlPoint:(struct CGPoint )arg1 outControlPoint:(struct CGPoint )arg2 ;
-(BOOL)underPoint:(struct CGPoint )arg0 withTransform:(struct CGAffineTransform )arg1 andTolerance:(CGFloat)arg2 returningType:(*NSInteger)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)balanceControlPoints;
-(void)collapse;
-(void)moveToPoint:(struct CGPoint )arg0 ;
-(void)setNode:(struct CGPoint )arg0 ;
-(void)swapControlPoints;
-(void)transformUsingAffineTransform:(struct CGAffineTransform )arg0 ;
-(void)updateReflectedState;


@end


#endif