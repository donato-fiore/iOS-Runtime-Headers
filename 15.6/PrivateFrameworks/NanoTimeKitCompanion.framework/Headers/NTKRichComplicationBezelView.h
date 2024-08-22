// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONBEZELVIEW_H
#define NTKRICHCOMPLICATIONBEZELVIEW_H

@class UIBezierPath, UIColor;
@protocol NTKRichComplicationBezelViewDelegate;


#import "NTKRichComplicationView.h"

@interface NTKRichComplicationBezelView : NTKRichComplicationView {
    UIBezierPath *_hitTestPath;
    CGRect _hitTestBounds;
    NSInteger _hitTestShape;
    CGRect _hitTestShapeFrame;
}


@property (nonatomic) CGFloat bezelTextAlpha; // ivar: _bezelTextAlpha
@property (retain, nonatomic) UIColor *bezelTextColor; // ivar: _bezelTextColor
@property (nonatomic) CGFloat bezelTextWidthInRadius; // ivar: _bezelTextWidthInRadius
@property (weak, nonatomic) NSObject<NTKRichComplicationBezelViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL interactive; // ivar: _interactive


+(id)_createHitTestPathWithViewBounds:(struct CGRect )arg0 shape:(NSInteger)arg1 shapeFrame:(struct CGRect )arg2 forDevice:(id)arg3 ;
+(id)keylineImageWithFilled:(BOOL)arg0 forDevice:(id)arg1 ;
+(id)keylineViewForDevice:(id)arg0 ;
+(id)layoutRuleForState:(NSInteger)arg0 faceBounds:(struct CGRect )arg1 dialDiameter:(CGFloat)arg2 forDevice:(id)arg3 ;
+(id)viewWithLegacyComplicationType:(NSUInteger)arg0 ;
+(struct CGAffineTransform )transformForState:(NSInteger)arg0 ;
+(void)updateCustomDataAnimationFromEarlierView:(id)arg0 laterView:(id)arg1 isForward:(BOOL)arg2 animationType:(NSUInteger)arg3 animationDuration:(CGFloat)arg4 animationFraction:(float)arg5 bezelTextUpdateHandler:(id)arg6 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_setLayoutTransformToView:(id)arg0 origin:(struct CGPoint )arg1 rotationInDegree:(CGFloat)arg2 centerScale:(CGFloat)arg3 ;
-(void)_updateHitTestShape:(NSInteger)arg0 frame:(struct CGRect )arg1 ;


@end


#endif