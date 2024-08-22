// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRICHCOMPLICATIONCORNERVIEW_H
#define NTKRICHCOMPLICATIONCORNERVIEW_H

@class UIBezierPath;


#import "NTKRichComplicationView.h"

@interface NTKRichComplicationCornerView : NTKRichComplicationView {
    UIBezierPath *_hitTestPath;
    CGRect _hitTestBounds;
}


@property (nonatomic) CGFloat innerComponentRotationInDegree; // ivar: _innerComponentRotationInDegree
@property (nonatomic) CGFloat outerComponentRotationInDegree; // ivar: _outerComponentRotationInDegree
@property (nonatomic) NSInteger position; // ivar: _position


+(id)_createHitTestPathWithViewBounds:(struct CGRect )arg0 position:(NSInteger)arg1 forDevice:(id)arg2 ;
+(id)keylineImageForPosition:(NSInteger)arg0 filled:(BOOL)arg1 forDevice:(id)arg2 narrowTopSlots:(BOOL)arg3 ;
+(id)keylineViewForPosition:(NSInteger)arg0 forDevice:(id)arg1 narrowTopSlots:(BOOL)arg2 ;
+(id)layoutRuleForState:(NSInteger)arg0 position:(NSInteger)arg1 faceBounds:(struct CGRect )arg2 forDevice:(id)arg3 narrowTopSlots:(BOOL)arg4 ;
+(id)viewWithLegacyComplicationType:(NSUInteger)arg0 ;
+(struct CGAffineTransform )transformForState:(NSInteger)arg0 position:(NSInteger)arg1 device:(id)arg2 ;
+(struct CGSize )viewSizeForDevice:(id)arg0 ;
+(struct UIEdgeInsets )_keylinePaddingForPosition:(NSInteger)arg0 conentSize:(struct CGSize )arg1 forDevice:(id)arg2 narrowTopSlots:(BOOL)arg3 ;
+(void)updateCustomDataAnimationFromEarlierView:(id)arg0 laterView:(id)arg1 isForward:(BOOL)arg2 animationType:(NSUInteger)arg3 animationDuration:(CGFloat)arg4 animationFraction:(float)arg5 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_createAndAddColoringLabelWithFontSize:(CGFloat)arg0 ;
-(id)init;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_editingDidEnd;
-(void)_layoutCurvedLabel:(id)arg0 centerAngleInDegree:(CGFloat)arg1 editingRotationInDegree:(CGFloat)arg2 ;
-(void)_layoutView:(id)arg0 origin:(struct CGPoint )arg1 editingTranslation:(struct CGPoint )arg2 editingRotationInDegree:(CGFloat)arg3 ;
-(void)_setEditingTransitionFraction:(CGFloat)arg0 direction:(NSInteger)arg1 position:(NSInteger)arg2 type:(NSInteger)arg3 ;
-(void)_setWhistlerAnalogEditingTransitonFraction:(CGFloat)arg0 direction:(NSInteger)arg1 position:(NSInteger)arg2 ;
-(void)_transitToHighlightState:(BOOL)arg0 fraction:(CGFloat)arg1 ;


@end


#endif