// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPAGINGSCROLLCONTAINERVIEW_H
#define MUPAGINGSCROLLCONTAINERVIEW_H

@class UIView, UIView<MUScrollViewProtocol>;


#import "MUPagingScrollControlsView.h"

@interface MUPagingScrollContainerView : UIView {
    UIView *_containedView;
    UIView<MUScrollViewProtocol> *_containedScrollView;
    MUPagingScrollControlsView *_controlsView;
}


@property (nonatomic) BOOL automaticallyFlipsForRTL;
@property (nonatomic) NSInteger cornerStyle; // ivar: _cornerStyle


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithHorizontalScrollView:(id)arg0 ;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateCorner;


@end


#endif