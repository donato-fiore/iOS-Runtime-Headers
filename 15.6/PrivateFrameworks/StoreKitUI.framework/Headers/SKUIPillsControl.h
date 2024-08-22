// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIPILLSCONTROL_H
#define SKUIPILLSCONTROL_H

@class UIControl, NSString, NSArray;


#import "SKUISegmentedControl.h"
#import "SKUIColorScheme.h"

@interface SKUIPillsControl : UIControl {
    SKUISegmentedControl *_segmentedControl;
}


@property (copy, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (nonatomic) NSInteger maximumNumberOfVisiblePills; // ivar: _maximumNumberOfVisiblePills
@property (copy, nonatomic) NSString *moreListTitle; // ivar: _moreListTitle
@property (nonatomic) NSInteger selectedIndex;
@property (readonly, nonatomic) CGRect selectedPillFrame;
@property (copy, nonatomic) NSArray *titles; // ivar: _titles


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_segmentedControlAction:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reloadPills;


@end


#endif