// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDSHAPERENDERABLE_H
#define TSDSHAPERENDERABLE_H

@class NSString, NSArray, CAShapeLayer;


#import "TSDRenderable.h"

@interface TSDShapeRenderable : TSDRenderable

@property (nonatomic) *CGColor fillColor;
@property (copy, nonatomic) NSString *lineCap;
@property (copy, nonatomic) NSArray *lineDashPattern;
@property (nonatomic) CGFloat lineDashPhase;
@property (copy, nonatomic) NSString *lineJoin;
@property (nonatomic) CGFloat lineWidth;
@property (nonatomic) CGFloat miterLimit;
@property (nonatomic) *CGPath path;
@property (readonly, nonatomic) CAShapeLayer *shapeLayer;
@property (nonatomic) *CGColor strokeColor;
@property (nonatomic) CGFloat strokeEnd;


+(id)renderable;
+(id)renderableFromShapeLayer:(id)arg0 ;
-(id)initWithShapeLayer:(id)arg0 ;
-(void)setCGLineCap:(int)arg0 ;
-(void)setCGLineJoin:(int)arg0 ;


@end


#endif