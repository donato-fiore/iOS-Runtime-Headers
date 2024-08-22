// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUILIBRARYLISTITEMVIEW_H
#define VUILIBRARYLISTITEMVIEW_H

@class UIView, UIImage, UIImageView;


#import "VUILabel.h"

@interface VUILibraryListItemView : UIView

@property (retain, nonatomic) UIImage *itemImage; // ivar: _itemImage
@property (retain, nonatomic) UIImageView *listImageView; // ivar: _listImageView
@property (retain, nonatomic) VUILabel *titleLabel; // ivar: _titleLabel


-(struct CGSize )_layoutWithSize:(struct CGSize )arg0 metricsOnly:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif