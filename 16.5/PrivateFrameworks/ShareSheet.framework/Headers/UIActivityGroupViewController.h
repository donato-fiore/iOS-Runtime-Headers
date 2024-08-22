// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACTIVITYGROUPVIEWCONTROLLER_H
#define UIACTIVITYGROUPVIEWCONTROLLER_H

@class UICollectionViewController, NSArray, NSString, UILongPressGestureRecognizer, NSIndexPath;
@protocol _UIActivityGroupViewDelegateFlowLayout, UICollectionViewDataSourcePrefetching, UIGestureRecognizerDelegate, UIActivityGroupViewControllerDataSource, UIActivityGroupViewControllerDelegate;


#import "_UIActivityUserDefaults.h"
#import "_UIUserDefaultsActivity.h"

@interface UIActivityGroupViewController : UICollectionViewController <_UIActivityGroupViewDelegateFlowLayout, UICollectionViewDataSourcePrefetching, UIGestureRecognizerDelegate>



@property (copy, nonatomic) NSArray *activities; // ivar: _activities
@property (nonatomic) NSInteger activityCategory; // ivar: _activityCategory
@property (nonatomic) BOOL activityIndexDidChangeWhileDragging; // ivar: _activityIndexDidChangeWhileDragging
@property (nonatomic) BOOL allowsUserCustomization; // ivar: _allowsUserCustomization
@property (weak, nonatomic) NSObject<UIActivityGroupViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIActivityGroupViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILongPressGestureRecognizer *editingGestureRecognizer; // ivar: _editingGestureRecognizer
@property (nonatomic, getter=isEmbedded) BOOL embedded; // ivar: _embedded
@property (nonatomic) UIEdgeInsets externalSafeInset; // ivar: _externalSafeInset
@property (nonatomic) BOOL hasActivities; // ivar: _hasActivities
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSIndexPath *indexPathForMenuActivity; // ivar: _indexPathForMenuActivity
@property (nonatomic) CGPoint initialDraggingLocation; // ivar: _initialDraggingLocation
@property (nonatomic, getter=isPicker) BOOL picker; // ivar: _picker
@property (readonly) Class superclass;
@property (retain, nonatomic) _UIActivityUserDefaults *userDefaults; // ivar: _userDefaults
@property (retain, nonatomic) _UIUserDefaultsActivity *userDefaultsActivity; // ivar: _userDefaultsActivity
@property (copy, nonatomic) NSArray *visibleActivities; // ivar: _visibleActivities
@property (copy, nonatomic) NSArray *visibleActivityProxies; // ivar: _visibleActivityProxies


-(BOOL)canBecomeFirstResponder;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_titleTextForActivity:(id)arg0 ;
-(id)activityForItemAtIndexPath:(id)arg0 ;
-(id)activityGroupViewLayout;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 layout:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg0 layout:(id)arg1 needsContainerViewForDraggingItemAtIndexPath:(id)arg2 ;
-(id)initWithActivityCategory:(NSInteger)arg0 activityProxies:(id)arg1 ;
-(id)initWithActivityCategory:(NSInteger)arg0 userDefaults:(id)arg1 ;
-(id)initWithActivityCategory:(NSInteger)arg0 userDefaults:(id)arg1 userDefaultsIdentifier:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)targetIndexPathForMoveFromRowAtIndexPath:(id)arg0 toProposedIndexPath:(id)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 preferredSizeForItemAtIndexPath:(id)arg2 ;
-(void)_dismissPresentedMenuControllers;
-(void)_performHideActivityForMenuController:(id)arg0 ;
-(void)_updateItemSizeIfNeeded;
-(void)_updateVisibleActivitiesAnimated:(BOOL)arg0 ;
-(void)activityUserDefaultsDidChange:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 prefetchItemsAtIndexPaths:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)handleEditingGesture:(id)arg0 ;
-(void)hideItemAtIndexPath:(id)arg0 ;
-(void)ignoreUserDefaultsChangesWhileUsingBlock:(id)arg0 ;
-(void)registerClassForContentSizeCategoryChanges;
-(void)registerForActivityUserDefaultsChanges;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unregisterForActivityUserDefaultsChanges;
-(void)updateActivityProxies:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif