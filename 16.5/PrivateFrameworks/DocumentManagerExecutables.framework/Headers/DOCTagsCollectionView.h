// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCTAGSCOLLECTIONVIEW_H
#define DOCTAGSCOLLECTIONVIEW_H

@class UIView, UICollectionView, UIView<DOCTagsCollectionCellMenuTarget>, UIGestureRecognizer, NSUserDefaults, NSString, NSDictionary, NSArray;
@protocol UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, DOCTagsCollectionItemContentViewDelegate, UIGestureRecognizerDelegate, DOCTagsCollectionViewDelegate;



@interface DOCTagsCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, DOCTagsCollectionItemContentViewDelegate, UIGestureRecognizerDelegate>

 {
    CGSize _lastIntrinsicContentSize;
    UICollectionView *_collectionView;
    id *_calloutMenuTargetIdentity;
    UIView<DOCTagsCollectionCellMenuTarget> *_calloutMenuTarget;
    UIGestureRecognizer *_cellLongPressGestureRecognizer;
    NSUserDefaults *_userDefaults;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DOCTagsCollectionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showsAddTagButton; // ivar: _showsAddTagButton
@property (readonly, nonatomic) NSDictionary *sizingCells; // ivar: _sizingCells
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *tags; // ivar: _tags


-(BOOL)_supportsTagsCollectionContextMenu;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_cellMenuTargetForIndexPath:(id)arg0 ;
-(id)_cellMenuTargetForPoint:(struct CGPoint )arg0 ;
-(id)_layout;
-(id)cellForIndexPath:(id)arg0 dequeueCell:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 contextMenuConfigurationForItemsAtIndexPaths:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)init;
-(id)targetForAction:(SEL)arg0 withSender:(id)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)_clearCalloutMenuTarget;
-(void)_commonInit;
-(void)_reloadCalloutMenuTarget;
-(void)_setCalloutMenuTarget:(id)arg0 ;
-(void)_setupCalloutMenuGestureHandling;
-(void)_updateForContentCategorySize;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)layoutSubviews;
-(void)longPressGestureRecognizerHandler:(id)arg0 ;
-(void)reloadData;
-(void)setupCells:(id)arg0 registerClasses:(BOOL)arg1 ;
-(void)tagsCollectionItem:(id)arg0 didDeleteTag:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif