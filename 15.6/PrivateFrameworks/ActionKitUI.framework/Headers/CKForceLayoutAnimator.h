// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKFORCELAYOUTANIMATOR_H
#define CKFORCELAYOUTANIMATOR_H

@class CADisplayLink, NSMapTable, CAShapeLayer, UIColor, NSSet, UIView;

#import <Foundation/Foundation.h>


@interface CKForceLayoutAnimator : NSObject {
    CADisplayLink *_displayLink;
    NSMapTable *_weights;
    NSMapTable *_previousCenters;
    NSMapTable *_fixedNodes;
    CAShapeLayer *_linesLayer;
}


@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (nonatomic) CGFloat charge; // ivar: _charge
@property (nonatomic) CGFloat chargeDistance; // ivar: _chargeDistance
@property (nonatomic) CGFloat friction; // ivar: _friction
@property (nonatomic) CGFloat gravity; // ivar: _gravity
@property (copy, nonatomic) UIColor *lineColor;
@property (nonatomic) CGFloat lineWidth;
@property (nonatomic) CGFloat linkDistance; // ivar: _linkDistance
@property (nonatomic) CGFloat linkStrength; // ivar: _linkStrength
@property (readonly, nonatomic) NSSet *links; // ivar: _links
@property (readonly, nonatomic) NSSet *nodes; // ivar: _nodes
@property (readonly, nonatomic) UIView *referenceView; // ivar: _referenceView
@property (nonatomic) CGFloat theta; // ivar: _theta


-(id)init;
-(id)initWithReferenceView:(id)arg0 ;
-(void)addNode:(id)arg0 ;
-(void)fixNode:(id)arg0 atPosition:(struct CGPoint )arg1 ;
-(void)linkNode:(id)arg0 toNode:(id)arg1 ;
-(void)releaseNode:(id)arg0 ;
-(void)removeAllNodes;
-(void)removeNode:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)tick;
-(void)unlinkNode:(id)arg0 fromNode:(id)arg1 ;


@end


#endif