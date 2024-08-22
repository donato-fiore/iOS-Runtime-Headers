// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHTAGGINGVIEWINNERCIRCLELAYER_H
#define SHTAGGINGVIEWINNERCIRCLELAYER_H

@class CALayer, CAShapeLayer;



@interface SHTaggingViewInnerCircleLayer : CALayer

@property (retain, nonatomic) CAShapeLayer *circle; // ivar: _circle
@property (retain, nonatomic) CALayer *circleContainerLayer; // ivar: _circleContainerLayer


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct CGPath *)circlePathForRect:(struct CGRect )arg0 ;
-(void)layoutSublayers;
-(void)setup;


@end


#endif