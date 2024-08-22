// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUDELAYEDNAVIGATIONITEM_H
#define SUDELAYEDNAVIGATIONITEM_H

@class NSNumber;


#import "SUNavigationItem.h"

@interface SUDelayedNavigationItem : SUNavigationItem {
    BOOL _delayedBackButtonHidden;
    id *_delayedBackButtonTitle;
    id *_delayedLeftBarButtonItems;
    NSNumber *_delayedLeftItemsSupplementBackButton;
    id *_delayedTitle;
    id *_delayedTitleView;
    id *_delayedRightBarButtonItems;
}


@property (nonatomic) BOOL shouldDelayChanges; // ivar: _shouldDelayChanges
@property (retain, nonatomic) SUNavigationItem *wrappedNavigationItem; // ivar: _wrappedNavigationItem


-(BOOL)leftItemsSupplementBackButton;
-(id)backButtonTitle;
-(id)initWithNavigationItem:(id)arg0 ;
-(id)leftBarButtonItem;
-(id)leftBarButtonItems;
-(id)navigationBar;
-(id)rightBarButtonItem;
-(id)rightBarButtonItems;
-(id)title;
-(id)titleView;
-(void)_prepareButtonItemForDisplay:(id)arg0 ;
-(void)_scheduleCommit;
-(void)commitDelayedChanges;
-(void)dealloc;
-(void)setBackButtonTitle:(id)arg0 ;
-(void)setHidesBackButton:(BOOL)arg0 ;
-(void)setLeftBarButtonItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)setLeftBarButtonItems:(id)arg0 animated:(BOOL)arg1 ;
-(void)setLeftItemsSupplementBackButton:(BOOL)arg0 ;
-(void)setRightBarButtonItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)setRightBarButtonItems:(id)arg0 animated:(BOOL)arg1 ;
-(void)setTitle:(id)arg0 ;
-(void)setTitleView:(id)arg0 ;
-(void)setTitleView:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif