// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI18TINTABLESHAPELAYER_H
#define _TTC9SEYMOURUI18TINTABLESHAPELAYER_H

@class CAShapeLayer;



@interface _TtC9SeymourUI18TintableShapeLayer : CAShapeLayer {
    ? tintAdjustmentMode;
    ? undimmedBorderColor;
    ? undimmedStrokeColor;
}


@property (nonatomic, retain) *CGColor borderColor;
@property (nonatomic, retain) *CGColor strokeColor;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayer:(id)arg0 ;


@end


#endif