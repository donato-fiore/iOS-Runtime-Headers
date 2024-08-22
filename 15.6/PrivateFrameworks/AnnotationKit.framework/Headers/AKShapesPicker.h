// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKSHAPESPICKER_H
#define AKSHAPESPICKER_H

@class NSArray;


#import "AKModernToolbarPicker.h"

@interface AKShapesPicker : AKModernToolbarPicker

@property (copy, nonatomic) NSArray *shapes; // ivar: _shapes
@property NSInteger style; // ivar: _style


-(id)initWithFrame:(struct CGRect )arg0 shapeTags:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_shapeButtonPressed:(id)arg0 ;
-(void)_updateCurrentAppearanceIfNeeded;
-(void)layoutSubviews;


@end


#endif