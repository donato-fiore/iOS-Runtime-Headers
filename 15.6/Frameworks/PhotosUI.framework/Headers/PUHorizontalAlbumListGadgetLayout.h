// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUHORIZONTALALBUMLISTGADGETLAYOUT_H
#define PUHORIZONTALALBUMLISTGADGETLAYOUT_H

@class PXGadgetCollectionViewLayout;
@protocol PUHorizontalAlbumListGadgetLayoutDelegate;



@interface PUHorizontalAlbumListGadgetLayout : PXGadgetCollectionViewLayout

@property (readonly, nonatomic) CGSize albumCellSize;
@property (weak, nonatomic) NSObject<PUHorizontalAlbumListGadgetLayoutDelegate> *horizontalLayoutDelegate; // ivar: _horizontalLayoutDelegate
@property (readonly, nonatomic) BOOL showsHorizontalScrollIndicator; // ivar: _showsHorizontalScrollIndicator


-(CGFloat)_horizontalScrollIndicatorSpacing;
-(NSUInteger)_numberOfAlbums;
-(id)init;
-(id)initWithHorizontalLayoutDelegate:(id)arg0 showsHorizontalScrollIndicator:(BOOL)arg1 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;


@end


#endif