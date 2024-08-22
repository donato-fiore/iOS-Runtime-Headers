// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROEDITORCLIPCOLLECTIONVIEWCONTROLLER_H
#define MIROEDITORCLIPCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSString, NSIndexPath;
@protocol MiroEditorFlowLayoutDelegate, MiroEditorClipCollection, MiroEditorClipCollectionDataSource, MiroEditorClipCollectionDelegate;



@interface MiroEditorClipCollectionViewController : UICollectionViewController <MiroEditorFlowLayoutDelegate, MiroEditorClipCollection>



@property (weak, nonatomic) NSObject<MiroEditorClipCollectionDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MiroEditorClipCollectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSIndexPath *initialIndexPath; // ivar: _initialIndexPath
@property (nonatomic) BOOL isInViewWillTransitionToSize; // ivar: _isInViewWillTransitionToSize
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)cellForClipProvider:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(void)_snapToIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 layout:(id)arg1 didSnapToItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)snapToIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif