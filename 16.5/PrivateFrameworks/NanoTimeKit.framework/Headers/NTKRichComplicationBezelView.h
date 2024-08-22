// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKRICHCOMPLICATIONBEZELVIEW_H
#define NTKRICHCOMPLICATIONBEZELVIEW_H

@class CDRichComplicationTemplateView, UIBezierPath, UIColor, NSString;
@protocol NTKRichComplicationBezelView, NTKRichComplicationBezelViewDelegate;



@interface NTKRichComplicationBezelView : CDRichComplicationTemplateView <NTKRichComplicationBezelView>

 {
    UIBezierPath *_hitTestPath;
    CGRect _hitTestBounds;
    NSInteger _hitTestShape;
    CGRect _hitTestShapeFrame;
}


@property (nonatomic) CGFloat bezelTextAlpha; // ivar: _bezelTextAlpha
@property (readonly, nonatomic) CGFloat bezelTextAngularWidth;
@property (retain, nonatomic) UIColor *bezelTextColor; // ivar: _bezelTextColor
@property (weak, nonatomic) NSObject<NTKRichComplicationBezelViewDelegate> *bezelTextDelegate;
@property (nonatomic) CGFloat bezelTextRadius; // ivar: bezelTextRadius
@property (nonatomic) CGFloat bezelTextWidthInRadius; // ivar: _bezelTextWidthInRadius
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKRichComplicationBezelViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL interactive; // ivar: _interactive
@property (readonly) Class superclass;


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