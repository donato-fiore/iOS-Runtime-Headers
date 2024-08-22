// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WGWIDGETWRAPPERVIEW_H
#define WGWIDGETWRAPPERVIEW_H

@class UIView;


#import "WGWidgetPlatterView.h"

@interface WGWidgetWrapperView : UIView

@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) CGFloat overrideIntrinsicContentHeight; // ivar: _overrideIntrinsicContentHeight
@property (retain, nonatomic) WGWidgetPlatterView *platterView; // ivar: _platterView
@property (nonatomic) CGFloat topMarginForLayout; // ivar: _topMarginForLayout


-(id)initWithPlatterView:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;


@end


#endif