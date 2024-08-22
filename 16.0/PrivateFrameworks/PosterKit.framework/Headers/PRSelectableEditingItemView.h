// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSELECTABLEEDITINGITEMVIEW_H
#define PRSELECTABLEEDITINGITEMVIEW_H

@class UIButton;


#import "PREditingPickerShapeView.h"

@interface PRSelectableEditingItemView : UIButton

@property (readonly, nonatomic) PREditingPickerShapeView *selectionView; // ivar: _selectionView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateForSelectedColor:(id)arg0 ;


@end


#endif