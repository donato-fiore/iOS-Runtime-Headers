// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PKINKTHICKNESSPICKER_H
#define _PKINKTHICKNESSPICKER_H

@class UIControl, NSArray;


#import "PKToolConfiguration.h"

@interface _PKInkThicknessPicker : UIControl {
    NSArray *_cachedSortedWeights;
}


@property (retain, nonatomic) NSArray *thicknessButtons; // ivar: _thicknessButtons
@property (retain, nonatomic) PKToolConfiguration *toolConfiguration; // ivar: _toolConfiguration
@property (nonatomic) CGFloat weight; // ivar: _weight


+(struct CGSize )sizeWithButtonCount:(NSUInteger)arg0 buttonSize:(struct CGSize )arg1 ;
-(CGFloat)_nearestButtonWeightForWeight:(CGFloat)arg0 ;
-(CGFloat)_weightForButtonIndex:(NSInteger)arg0 ;
-(CGFloat)buttonSpacing;
-(NSInteger)_nearestButtonIndexForWeight:(CGFloat)arg0 ;
-(id)_makeThicknessButtons;
-(id)_sortedWeights;
-(id)initWithToolConfiguration:(id)arg0 ;
-(struct CGRect )_frameForButtonAtIndex:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)buttonTapped:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif