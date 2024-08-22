// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPAGINGSCROLLCONTROLSVIEW_H
#define MUPAGINGSCROLLCONTROLSVIEW_H

@class UIView, UIButton, UIView<MUScrollViewProtocol>;



@interface MUPagingScrollControlsView : UIView {
    UIButton *_previousPageButton;
    UIButton *_nextPageButton;
    UIView<MUScrollViewProtocol> *_scrollView;
}


@property (nonatomic) BOOL automaticallyFlipsForRTL; // ivar: _automaticallyFlipsForRTL
@property (readonly, nonatomic) BOOL hoverActive; // ivar: _hoverActive
@property (readonly, nonatomic) BOOL shouldFlipPagingDirection;


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