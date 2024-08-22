// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPAGINGSCROLLCONTAINERVIEW_H
#define MUPAGINGSCROLLCONTAINERVIEW_H

@class UIView, UIScrollView;


#import "MUPagingScrollControlsView.h"

@interface MUPagingScrollContainerView : UIView {
    UIView *_containedView;
    UIScrollView *_containedScrollView;
    MUPagingScrollControlsView *_controlsView;
}


@property (nonatomic) NSInteger cornerStyle; // ivar: _cornerStyle


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithHorizontalScrollView:(id)arg0 ;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateCorner;


@end


#endif