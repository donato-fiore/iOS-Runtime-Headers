// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROTIMELINECLIPCOLLECTIONVIEWCONTROLLER_H
#define MIROTIMELINECLIPCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSIndexPath, NSString;
@protocol MiroEditorFlowLayoutDelegate, MiroCollectionViewDelegate, MiroEditorClipCollection, MiroEditorClipCollectionDataSource, MiroEditorClipCollectionDelegate;



@interface MiroTimelineClipCollectionViewController : UICollectionViewController <MiroEditorFlowLayoutDelegate, MiroCollectionViewDelegate, MiroEditorClipCollection>



@property (readonly, nonatomic) UIEdgeInsets collectionViewContentInsets;
@property (retain, nonatomic) NSIndexPath *collectionViewDraggingIndexPath; // ivar: _collectionViewDraggingIndexPath
@property (weak, nonatomic) NSObject<MiroEditorClipCollectionDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MiroEditorClipCollectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightCenterThumbnail; // ivar: _highlightCenterThumbnail
@property (retain, nonatomic) NSIndexPath *initialIndexPath; // ivar: _initialIndexPath
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 canMoveItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)_proximityToCenterForCellAtIndexPath:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)cellForClipProvider:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(struct CGSize )_cellSizeForClipAtIndex:(NSInteger)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_snapToIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateHighlightForCell:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_updateHighlightForVisibleCellsAnimated:(BOOL)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 layout:(id)arg1 didSnapToItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)miroCollectionView:(id)arg0 willBeginInteractiveMovementForItemAtIndexPath:(id)arg1 ;
-(void)miroCollectionViewDidCancelInteractiveMovement:(id)arg0 ;
-(void)miroCollectionViewDidEndInteractiveMovement:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)snapToIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif