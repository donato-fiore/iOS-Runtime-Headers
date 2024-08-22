// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHSHAZAMBUTTONLAYER_H
#define SHSHAZAMBUTTONLAYER_H

@class CALayer, CAShapeLayer, NSString;
@protocol CAAnimationDelegate, SHShazamButtonViewDelegate;



@interface SHShazamButtonLayer : CALayer <CAAnimationDelegate>



@property (retain, nonatomic) CALayer *backgroundLayer; // ivar: _backgroundLayer
@property (retain, nonatomic) CAShapeLayer *bottomSolidLayer; // ivar: _bottomSolidLayer
@property (retain, nonatomic) CAShapeLayer *bottomTransparentLayer; // ivar: _bottomTransparentLayer
@property (weak, nonatomic) NSObject<SHShazamButtonViewDelegate> *buttonDelegate; // ivar: _buttonDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL initialAnimationPerformed; // ivar: _initialAnimationPerformed
@property (retain, nonatomic) CALayer *shapeLayer; // ivar: _shapeLayer
@property (readonly) Class superclass;
@property (retain, nonatomic) CAShapeLayer *topBorder; // ivar: _topBorder
@property (retain, nonatomic) CAShapeLayer *topSolidLayer; // ivar: _topSolidLayer
@property (retain, nonatomic) CAShapeLayer *topTransparentLayer; // ivar: _topTransparentLayer


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)strokeLayerWithPath:(struct CGPath *)arg0 color:(struct CGColor *)arg1 ;
-(struct CGPath *)bottomStrokeLongPath;
-(struct CGPath *)bottomStrokePath;
-(struct CGPath *)topStrokeLongPath;
-(struct CGPath *)topStrokePath;
-(void)buildView;
-(void)drawSolidShape;
-(void)drawSolidShapeWithDuration:(CGFloat)arg0 delay:(CGFloat)arg1 completion:(id)arg2 ;
-(void)drawTransparentShape;
-(void)layoutSublayers;
-(void)performFadeInIntroAnimation:(CGFloat)arg0 delay:(CGFloat)arg1 ;
-(void)performSDrawingAnimationWithDuration:(CGFloat)arg0 delay:(CGFloat)arg1 ;
-(void)performSDrawingIntroAnimation;
-(void)removeTransparentShape;
-(void)removeTransparentShapeWithDuration:(CGFloat)arg0 delay:(CGFloat)arg1 completion:(id)arg2 ;
-(void)skipIntroAnimation;


@end


#endif