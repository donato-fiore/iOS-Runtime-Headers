// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPAGINGSCROLLCONTROLSVIEW_H
#define MUPAGINGSCROLLCONTROLSVIEW_H

@class UIView, UIButton, UIScrollView;



@interface MUPagingScrollControlsView : UIView {
    UIButton *_previousPageButton;
    UIButton *_nextPageButton;
    UIScrollView *_scrollView;
}


@property (readonly, nonatomic) BOOL hoverActive; // ivar: _hoverActive


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithHorizontalScrollView:(id)arg0 ;
-(void)_adjustScrollIndexByOffset:(NSInteger)arg0 ;
-(void)_scrollNext;
-(void)_scrollPrevious;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateChevronVisibility;
-(void)handleHover:(id)arg0 ;


@end


#endif