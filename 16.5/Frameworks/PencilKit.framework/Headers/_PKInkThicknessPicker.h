// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PKINKTHICKNESSPICKER_H
#define _PKINKTHICKNESSPICKER_H

@class UIControl, NSArray;


#import "PKToolConfiguration.h"

@interface _PKInkThicknessPicker : UIControl {
    NSArray *_cachedSortedWeights;
    CGFloat _weight;
    PKToolConfiguration *_toolConfiguration;
}


@property (retain, nonatomic) NSArray *thicknessButtons; // ivar: _thicknessButtons


+(struct CGSize )sizeWithButtonCount:(NSUInteger)arg0 buttonSize:(struct CGSize )arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)buttonTapped:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif