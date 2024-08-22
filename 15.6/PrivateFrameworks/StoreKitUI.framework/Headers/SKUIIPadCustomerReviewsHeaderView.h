// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIIPADCUSTOMERREVIEWSHEADERVIEW_H
#define SKUIIPADCUSTOMERREVIEWSHEADERVIEW_H

@class UIControl, UIPopoverController, UIView, UIButton, UILabel, NSString, NSArray;
@protocol SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate;


#import "SKUIClientContext.h"
#import "SKUIColorScheme.h"

@interface SKUIIPadCustomerReviewsHeaderView : UIControl <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate>

 {
    SKUIClientContext *_clientContext;
    UIPopoverController *_sortPopoverController;
    UIView *_separatorView;
    UIButton *_sortButton;
    UILabel *_sortLabel;
    UILabel *_titleLabel;
}


@property (readonly, nonatomic) UIControl *appSupportButton; // ivar: _appSupportButton
@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger selectedSortIndex; // ivar: _selectedSortIndex
@property (copy, nonatomic) NSArray *sortTitles; // ivar: _sortTitles
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIControl *writeAReviewButton; // ivar: _writeAReviewButton


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithClientContext:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_destroySortPopoverController;
-(void)_reloadSortButton;
-(void)_sortButtonAction:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)menuViewController:(id)arg0 didSelectItemAtIndex:(NSInteger)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif