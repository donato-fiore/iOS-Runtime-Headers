// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKBLACKCOMBBACKGROUNDVIEW_H
#define NTKBLACKCOMBBACKGROUNDVIEW_H

@class UIView, CLKDevice, CALayer, NSArray;


#import "NTKBlackcombColorPalette.h"

@interface NTKBlackcombBackgroundView : UIView {
    CLKDevice *_device;
    NTKBlackcombColorPalette *_palette;
    CALayer *_smallTickCoveringLayer;
    NSArray *_smallTicks;
    NSArray *_mediumTicks;
    NSArray *_largeTicks;
    BOOL _showingStatus;
}


@property (nonatomic) BOOL usesLongSideTicks; // ivar: _usesLongSideTicks


-(CGFloat)_innerDialRadiusAtLargeTick:(NSInteger)arg0 verticalLength:(CGFloat)arg1 horizontalLength:(CGFloat)arg2 ;
-(CGFloat)_outerDialRadiusAtMediumTick:(NSInteger)arg0 verticalLength:(CGFloat)arg1 horizontalLength:(CGFloat)arg2 ;
-(id)initForDevice:(id)arg0 ;
-(struct CGRect )_tickLayoutBounds;
-(void)_applyBackgroundColor:(id)arg0 ;
-(void)_layoutTopLargeTick;
-(void)_setupTicks;
-(void)applyPalette:(id)arg0 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromPalette:(id)arg1 toPalette:(id)arg2 ;
-(void)applyTransitionFractionToUsesLongSideTicks:(CGFloat)arg0 ;
-(void)configureTicksForStatus:(BOOL)arg0 ;


@end


#endif