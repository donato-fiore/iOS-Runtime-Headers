// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONCORNERUTILITIES_H
#define NTKRICHCOMPLICATIONCORNERUTILITIES_H


#import <Foundation/Foundation.h>


@interface NTKRichComplicationCornerUtilities : NSObject



+(id)_createHitTestPathWithViewBounds:(struct CGRect )arg0 position:(NSInteger)arg1 forDevice:(id)arg2 ;
+(id)keylineImageForPosition:(NSInteger)arg0 filled:(BOOL)arg1 forDevice:(id)arg2 narrowTopSlots:(BOOL)arg3 ;
+(id)keylineViewForPosition:(NSInteger)arg0 forDevice:(id)arg1 narrowTopSlots:(BOOL)arg2 ;
+(id)layoutRuleForState:(NSInteger)arg0 position:(NSInteger)arg1 faceBounds:(struct CGRect )arg2 forDevice:(id)arg3 narrowTopSlots:(BOOL)arg4 ;
+(id)viewWithLegacyComplicationType:(NSUInteger)arg0 ;
+(struct CGAffineTransform )transformForState:(NSInteger)arg0 position:(NSInteger)arg1 device:(id)arg2 ;
+(struct CGSize )viewSizeForDevice:(id)arg0 ;
+(struct UIEdgeInsets )_keylinePaddingForPosition:(NSInteger)arg0 conentSize:(struct CGSize )arg1 forDevice:(id)arg2 narrowTopSlots:(BOOL)arg3 ;
+(void)updateCustomDataAnimationFromEarlierView:(id)arg0 laterView:(id)arg1 isForward:(BOOL)arg2 animationType:(NSUInteger)arg3 animationDuration:(CGFloat)arg4 animationFraction:(float)arg5 ;


@end


#endif