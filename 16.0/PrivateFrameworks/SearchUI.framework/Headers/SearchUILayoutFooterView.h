// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUILAYOUTFOOTERVIEW_H
#define SEARCHUILAYOUTFOOTERVIEW_H

@class UIView;


#import "SearchUICollectionReusableView.h"

@interface SearchUILayoutFooterView : SearchUICollectionReusableView

@property (retain, nonatomic) UIView *footerView; // ivar: _footerView


+(id)reuseIdentifier;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)layoutSubviews;


@end


#endif