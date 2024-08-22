// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8VIDEOSUI18BASECOLLECTIONVIEW_H
#define _TTC8VIDEOSUI18BASECOLLECTIONVIEW_H

@class UICollectionView;
@protocol UICollectionViewDelegate;



@interface _TtC8VideosUI18BaseCollectionView : UICollectionView <UICollectionViewDelegate>

 {
    ? vuiDelegate;
    ? vuiScrollDelegate;
    ? vuiContextMenuDelegate;
}




-(id)collectionView:(id)arg0 contextMenuConfigurationForItemAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)collectionView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)collectionView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg0 willEndContextMenuInteractionWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)collectionView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;


@end


#endif