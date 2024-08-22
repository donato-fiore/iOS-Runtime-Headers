// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKBROWSERSWITCHERFOOTERVIEW_H
#define CKBROWSERSWITCHERFOOTERVIEW_H

@class UIView, UICollectionView, NSTimer, UILongPressGestureRecognizer, NSString;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate, CKAppStripPredictiveTypeTransition, CKBrowserSwitcherFooterViewDataSource, CKBrowserSwitcherFooterViewDelegate;


#import "CKAppStripLayout.h"

@interface CKBrowserSwitcherFooterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>

 {
    UICollectionView *_collectionView;
    UIView *_predictiveTypeSnapshotView;
    UIView *_visibleView;
    id<CKAppStripPredictiveTypeTransition> *_animator;
    UIEdgeInsets _minifiedContentInsets;
    BOOL _isDoingMagnificationAnimation;
    BOOL _isMagnificationEnabled;
    BOOL _ignoreDataSourceChanges;
    NSTimer *_minificationTimer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UILongPressGestureRecognizer *_touchTracker;
    BOOL _hasTouches;
}


@property (retain, nonatomic) CKAppStripLayout *appStripLayout; // ivar: _appStripLayout
@property (weak, nonatomic) NSObject<CKBrowserSwitcherFooterViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKBrowserSwitcherFooterViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *grayLine; // ivar: _grayLine
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideShinyStatus; // ivar: _hideShinyStatus
@property (nonatomic) BOOL isMagnified; // ivar: _isMagnified
@property (nonatomic) BOOL isMinifyingOnTranscriptScroll; // ivar: _isMinifyingOnTranscriptScroll
@property (nonatomic) BOOL minifiesOnSelection; // ivar: _minifiesOnSelection
@property (nonatomic) BOOL scrollsLastUsedAppIconIntoView; // ivar: _scrollsLastUsedAppIconIntoView
@property (nonatomic) BOOL showBorders;
@property (nonatomic) CGFloat snapshotVerticalOffset; // ivar: _snapshotVerticalOffset
@property (readonly) Class superclass;
@property (nonatomic) BOOL toggleBordersOnInterfaceStyle; // ivar: _toggleBordersOnInterfaceStyle


-(BOOL)collectionView:(id)arg0 canMoveItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(CGFloat)contentHeight;
-(CGFloat)contentHeightForCameraApps;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 targetIndexPathForMoveFromItemAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 toggleBordersOnInterfaceStyle:(BOOL)arg1 ;
-(struct CGPoint )targetContentOffsetForFocusPoint:(struct CGPoint )arg0 initialLayoutMode:(NSUInteger)arg1 finalLayoutMode:(NSUInteger)arg2 ;
-(struct UIEdgeInsets )insetsForAppStrip;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateVisibilityState;
-(void)adjustMagnificationAtPoint:(struct CGPoint )arg0 minifyImmediately:(BOOL)arg1 ;
-(void)animateAppStripVisible:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)appsLongPressed:(id)arg0 ;
-(void)clearSelection;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)installedAppsChanged:(id)arg0 ;
-(void)layoutSubviews;
-(void)minifyImmediately:(BOOL)arg0 ;
-(void)reloadData;
-(void)resetScrollPosition;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)selectPluginAtIndexPath:(id)arg0 ;
-(void)setInitiallySelectedPluginIfNeeded;
-(void)touchTrackerTrackedTouches:(id)arg0 ;
-(void)transcriptCollectionStartedScrolling:(id)arg0 ;
-(void)updateBrowserCell:(id)arg0 ;
-(void)updateCollectionView:(id)arg0 ;
-(void)updatePredictiveTypeSnapshot:(id)arg0 ;
-(void)visibleAppsChanges:(id)arg0 ;
-(void)willMoveToSuperview:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif