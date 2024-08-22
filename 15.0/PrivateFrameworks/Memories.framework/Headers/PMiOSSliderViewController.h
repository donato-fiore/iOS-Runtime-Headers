// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMIOSSLIDERVIEWCONTROLLER_H
#define PMIOSSLIDERVIEWCONTROLLER_H

@class UICollectionViewController, NSString, UICollectionViewFlowLayout;
@protocol UIPointerInteractionDelegate, PMSliderProviderProtocol;



@interface PMiOSSliderViewController : UICollectionViewController <UIPointerInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UICollectionViewFlowLayout *flowLayout; // ivar: _flowLayout
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreScrolling; // ivar: _ignoreScrolling
@property (nonatomic) BOOL needsMiddlePositionUpdate; // ivar: _needsMiddlePositionUpdate
@property (retain, nonatomic) NSObject<PMSliderProviderProtocol> *provider; // ivar: _provider
@property (nonatomic) NSInteger selectedItem; // ivar: _selectedItem
@property (readonly) Class superclass;


-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)indexPathToMiddleItemInCollectionView:(id)arg0 ;
-(id)init;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGPoint )collectionView:(id)arg0 targetContentOffsetForProposedContentOffset:(struct CGPoint )arg1 ;
-(struct CGPoint )pointForMiddleOfItemInCollectionView:(id)arg0 withOffset:(struct CGPoint )arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_setFontStyleForCell:(id)arg0 highlighted:(BOOL)arg1 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)invalidateSelectedItemPostion;
-(void)performScrollTest:(id)arg0 iterations:(int)arg1 delta:(int)arg2 length:(int)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)updateFonts;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif