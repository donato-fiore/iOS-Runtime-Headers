// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSTOREPAGEVIEW_H
#define SUSTOREPAGEVIEW_H

@class UIView, UIScrollView;



@interface SUStorePageView : UIView {
    UIScrollView *_headerScrollView;
}


@property (retain, nonatomic) UIView *backdropView; // ivar: _backdropView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) UIEdgeInsets contentViewInsets; // ivar: _contentViewInsets
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (retain, nonatomic) UIView *previewOverlayView; // ivar: _previewOverlayView


-(void)dealloc;
-(void)layoutSubviews;


@end


#endif