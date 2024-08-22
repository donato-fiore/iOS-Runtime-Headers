// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICHARTCOLUMNHEADERVIEW_H
#define SKUICHARTCOLUMNHEADERVIEW_H

@class UIControl, NSArray;



@interface SKUIChartColumnHeaderView : UIControl {
    NSArray *_buttons;
}


@property (readonly, nonatomic) CGFloat edgePadding;
@property (nonatomic) NSInteger selectedTitleIndex; // ivar: _selectedTitleIndex
@property (copy, nonatomic) NSArray *titles;


-(void)_buttonAction:(id)arg0 ;
-(void)_reloadSelectedButton;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)sizeToFit;


@end


#endif