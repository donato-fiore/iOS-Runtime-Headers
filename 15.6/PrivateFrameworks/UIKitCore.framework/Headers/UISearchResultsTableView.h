// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISEARCHRESULTSTABLEVIEW_H
#define UISEARCHRESULTSTABLEVIEW_H



#import "UITableView.h"
#import "UIView.h"
#import "UISearchDisplayController.h"

@interface UISearchResultsTableView : UITableView {
    CGFloat _offsetForNoResultsMessage;
    UIView *_topShadowView;
}


@property (retain, nonatomic, getter=_topShadowView, setter=_setTopShadowView:) UIView *_topShadowView;
@property (weak, nonatomic) UISearchDisplayController *controller; // ivar: _controller


-(CGFloat)_offsetForNoResultsMessage;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)_numberOfRowsDidChange;
-(void)_setOffsetForNoResultsMessage:(CGFloat)arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 ;


@end


#endif