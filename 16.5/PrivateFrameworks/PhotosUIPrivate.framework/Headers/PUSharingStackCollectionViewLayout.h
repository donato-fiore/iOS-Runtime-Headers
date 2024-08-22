// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUSHARINGSTACKCOLLECTIONVIEWLAYOUT_H
#define PUSHARINGSTACKCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewLayout, NSArray;
@protocol PUSharingStackCollectionViewLayoutDelegate;



@interface PUSharingStackCollectionViewLayout : UICollectionViewLayout

@property (weak, nonatomic) NSObject<PUSharingStackCollectionViewLayoutDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSArray *stackedItemsLayoutAttributes; // ivar: _stackedItemsLayoutAttributes


-(id)_layoutItemInputAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGSize )collectionViewContentSize;
-(void)prepareLayout;


@end


#endif