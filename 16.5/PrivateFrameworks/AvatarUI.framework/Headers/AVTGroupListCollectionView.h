// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTGROUPLISTCOLLECTIONVIEW_H
#define AVTGROUPLISTCOLLECTIONVIEW_H

@class UIView, CALayer, UICollectionView, NSString, NSArray;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTGroupPicker, AVTGroupPickerDelegate;



@interface AVTGroupListCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTGroupPicker>



@property (retain, nonatomic) CALayer *border; // ivar: _border
@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTGroupPickerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *groupItems; // ivar: _groupItems
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger selectedGroupIndex; // ivar: selectedGroupIndex
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithGroupItems:(id)arg0 environment:(id)arg1 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(void)setupBorder;
-(void)setupView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCollectionLayoutItemSize:(id)arg0 ;


@end


#endif