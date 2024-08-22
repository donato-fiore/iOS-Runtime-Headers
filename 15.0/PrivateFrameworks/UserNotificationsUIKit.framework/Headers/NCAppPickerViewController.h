// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCAPPPICKERVIEWCONTROLLER_H
#define NCAPPPICKERVIEWCONTROLLER_H

@class NSMutableSet, UICollectionView, NSLayoutConstraint, NSString, NSArray, NSSet;
@protocol NCAppPickerViewFooterDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate;


#import "NCOnboardingViewController.h"
#import "NCAppPickerContentProvider.h"

@interface NCAppPickerViewController : NCOnboardingViewController <NCAppPickerViewFooterDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate>

 {
    NCAppPickerContentProvider *_contentProvider;
    BOOL _contentCollapsable;
    BOOL _contentCollapsed;
    NSUInteger _contentCollapsedCellCount;
    BOOL _viewHasAppeared;
    NSMutableSet *_mutableShownBundleIdentifiers;
    UICollectionView *_collectionView;
    CGFloat _collectionViewVisibleHeight;
    CGFloat _headerHeight;
    CGFloat _footerHeight;
    CGFloat _cellHeight;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_heightConstraint;
    BOOL _largerTextSize;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *selectedBundleIdentifiers;
@property (nonatomic) BOOL showMoreButtonWasPressed; // ivar: _showMoreButtonWasPressed
@property (readonly, copy, nonatomic) NSSet *shownBundleIdentifiers;
@property (readonly) Class superclass;


+(id)appPickerViewControllerWithContentProvider:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_shouldInlineButtontray;
-(CGFloat)_availableContentWidth;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_initWithContentProvider:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_refreshNextButton;
-(void)_reloadFooterHeight;
-(void)_saveCellsSeen;
-(void)_updateHeightConstraintAndLayoutIfNeeded:(BOOL)arg0 ;
-(void)appPickViewFooterShowMoreButtonPressed:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif