// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVSHELFVIEWCONTROLLER_H
#define _TVSHELFVIEWCONTROLLER_H

@class TVMLCollectionViewController, NSIndexPath, NSString;
@protocol TVShelfViewLayoutDelegate, UICollectionViewDelegateFlowLayout, __TVShelfViewControllerDelegate;



@interface _TVShelfViewController : TVMLCollectionViewController <TVShelfViewLayoutDelegate, UICollectionViewDelegateFlowLayout>

 {
    NSIndexPath *_pendingPreviewedIndexPath;
    NSIndexPath *_lastPreviewedIndexPath;
    CGFloat _lastPreviewDelay;
    NSUInteger _autohighlightScrollPosition;
    BOOL _configureForListTemplate;
    NSInteger _listTemplateAlignment;
    ? _delegateFlags;
}


@property (nonatomic, getter=isCentered) BOOL centered; // ivar: _centered
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<__TVShelfViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideHeader;
@property (nonatomic) NSInteger prominentSectionIndex; // ivar: _prominentSectionIndex
@property (nonatomic) NSUInteger speedBumpEdges; // ivar: _speedBumpEdges
@property (readonly) Class superclass;


+(void)_contentForCell:(id)arg0 shouldHide:(BOOL)arg1 ;
-(BOOL)contentFlowsVertically;
-(NSUInteger)preferredScrollPosition;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)makeCollectionViewWithFrame:(struct CGRect )arg0 ;
-(id)preferredFocusEnvironments;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )expectedCellSizeForElement:(id)arg0 atIndexPath:(id)arg1 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_delayedUpdatePreview;
-(void)_didSettleOnItemAtIndexPath:(id)arg0 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)dispatchEvent:(id)arg0 forItemAtIndexPath:(id)arg1 completionBlock:(id)arg2 ;
-(void)updateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)updateViewLayoutAnimated:(BOOL)arg0 relayout:(BOOL)arg1 ;
-(void)updateWithViewElement:(id)arg0 ;
-(void)updateWithViewElement:(id)arg0 cellMetrics:(struct TVCellMetrics )arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif