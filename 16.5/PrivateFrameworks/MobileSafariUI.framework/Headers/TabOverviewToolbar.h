// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TABOVERVIEWTOOLBAR_H
#define TABOVERVIEWTOOLBAR_H

@class UIView, UIVisualEffectView, NSMutableDictionary, NSString, UISearchBar;
@protocol SFCapsuleCollectionViewToolbarContentProviding;


#import "BarButton.h"

@interface TabOverviewToolbar : UIView <SFCapsuleCollectionViewToolbarContentProviding>

 {
    BarButton *_addTabButton;
    UIVisualEffectView *_background;
    NSMutableDictionary *_barButtonTitles;
    BarButton *_cancelSearchButton;
    UIView *_contentContainer;
    BarButton *_doneButton;
    BOOL _needsResizeItems;
    CGFloat _searchBarMinimumWidth;
    BarButton *_sidebarButton;
    BarButton *_tabGroupButton;
    CGFloat _tabGroupButtonPreferredWidth;
    UIView *_toolbarSeparator;
}


@property (readonly, nonatomic) BOOL contentBorrowed; // ivar: _contentBorrowed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger placement; // ivar: _placement
@property (retain, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (nonatomic) CGFloat searchBarLeadingMargin; // ivar: _searchBarLeadingMargin
@property (nonatomic) BOOL shouldReserveSpaceForSidebarButton; // ivar: _shouldReserveSpaceForSidebarButton
@property (readonly) Class superclass;


-(BOOL)_canDisplaySearchBarAndSidebarButton;
-(BOOL)barButtonIsEnabled:(NSInteger)arg0 ;
-(BOOL)barButtonIsHidden:(NSInteger)arg0 ;
-(CGFloat)capsuleCollectionView:(id)arg0 heightForToolbarContentView:(id)arg1 ;
-(id)_buttonForBarButton:(NSInteger)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)menuForBarButton:(NSInteger)arg0 ;
-(id)resolvedTintColorForBarButton:(NSInteger)arg0 ;
-(id)snapshotBarContentsAfterScreenUpdates:(BOOL)arg0 ;
-(id)titleForBarButton:(NSInteger)arg0 ;
-(id)toolbarContentViewForCapsuleCollectionView:(id)arg0 ;
-(struct CGRect )rectForBarButton:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutForBottomPlacement;
-(void)_layoutForTopPlacement;
-(void)_resizeItemsIfNeeded;
-(void)addInteraction:(id)arg0 toBarButton:(NSInteger)arg1 ;
-(void)addPrimaryAction:(id)arg0 forBarButton:(NSInteger)arg1 ;
-(void)capsuleCollectionView:(id)arg0 relinquishToolbarContentView:(id)arg1 ;
-(void)layoutSubviews;
-(void)removeInteraction:(id)arg0 fromBarButton:(NSInteger)arg1 ;
-(void)removePrimaryAction:(id)arg0 forBarButton:(NSInteger)arg1 ;
-(void)setBarButton:(NSInteger)arg0 enabled:(BOOL)arg1 ;
-(void)setBarButton:(NSInteger)arg0 hidden:(BOOL)arg1 ;
-(void)setMenu:(id)arg0 forBarButton:(NSInteger)arg1 ;
-(void)setShowingSearchCancelButton:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setTitle:(id)arg0 forBarButton:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif