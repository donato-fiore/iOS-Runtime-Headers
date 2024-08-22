// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKBEZIERPATHVIEW_H
#define _MKBEZIERPATHVIEW_H

@class UIView, UIColor;



@interface _MKBezierPathView : UIView {
    UIColor *_fillColor;
    UIColor *_strokeColor;
}




+(Class)layerClass;
+(struct CGPath *)_createPathForBalloonRadius:(CGFloat)arg0 tailLength:(CGFloat)arg1 ;
+(struct CGPath *)_createSmoothTransitionPathForBalloonRadius:(CGFloat)arg0 tailLength:(CGFloat)arg1 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithBalloonRadius:(CGFloat)arg0 tailLength:(CGFloat)arg1 smoothTailTransition:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithOvalInSize:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setFillColor:(id)arg0 ;
-(void)setPath:(struct CGPath *)arg0 ;
-(void)setPath:(struct CGPath *)arg0 duration:(CGFloat)arg1 ;
-(void)setStrokeColor:(id)arg0 width:(CGFloat)arg1 ;


@end


#endif