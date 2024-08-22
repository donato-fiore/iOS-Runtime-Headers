// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPRODUCTPAGEPLACEHOLDERSCROLLVIEW_H
#define SKUIPRODUCTPAGEPLACEHOLDERSCROLLVIEW_H

@class UIScrollView, UIView;



@interface SKUIProductPagePlaceholderScrollView : UIScrollView

@property (nonatomic) BOOL isPad; // ivar: _isPad
@property (nonatomic) CGFloat offset; // ivar: _offset
@property (retain, nonatomic) UIView *placeholderView; // ivar: _placeholderView


-(void)layoutSubviews;


@end


#endif