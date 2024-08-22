// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSHAPELAYERPATHSTATE_H
#define PKSHAPELAYERPATHSTATE_H


#import <Foundation/Foundation.h>


@interface PKShapeLayerPathState : NSObject {
    CGFloat _strokeStartT0;
    CGFloat _strokeStartT1;
    CGFloat _strokeEndT0;
    CGFloat _strokeEndT1;
}




-(CGFloat)progressForShapeLayer:(id)arg0 ;
-(CGFloat)strokeEndAtProgress:(CGFloat)arg0 ;
-(CGFloat)strokeStartAtProgress:(CGFloat)arg0 ;
-(id)description;
-(id)init;
-(id)initWithShapeLayer:(id)arg0 ;
-(id)initWithShapeLayer:(id)arg0 reverse:(BOOL)arg1 ;
-(id)initWithStrokeStart:(CGFloat)arg0 strokeEnd:(CGFloat)arg1 ;
-(id)initWithStrokeStartT0:(CGFloat)arg0 strokeStartT1:(CGFloat)arg1 strokeEndT0:(CGFloat)arg2 strokeEndT1:(CGFloat)arg3 ;
-(void)dealloc;
-(void)setProgress:(CGFloat)arg0 onShapeLayer:(id)arg1 ;
-(void)setProgress:(CGFloat)arg0 onShapeLayer:(id)arg1 withAnimationHandler:(id)arg2 ;


@end


#endif