// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOSSHARINGCOLLECTIONVIEWITEMSUBLAYOUT_H
#define PUPHOTOSSHARINGCOLLECTIONVIEWITEMSUBLAYOUT_H

@class NSIndexPath, UICollectionViewLayoutAttributes;

#import <Foundation/Foundation.h>


@interface PUPhotosSharingCollectionViewItemSublayout : NSObject {
    CGPoint _selectionBadgeCenter;
    CGPoint _optionBadgeCenter;
}


@property (readonly, nonatomic) CGRect badgesContainerFrame; // ivar: _badgesContainerFrame
@property (nonatomic) NSUInteger badgesCorner; // ivar: _badgesCorner
@property (nonatomic) UIOffset badgesOffset; // ivar: _badgesOffset
@property (nonatomic) CGFloat bottomBadgeInset; // ivar: _bottomBadgeInset
@property (readonly, nonatomic) CGRect floatingBadgesContainerFrame; // ivar: _floatingBadgesContainerFrame
@property (readonly, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly, nonatomic) CGRect itemFrame; // ivar: _itemFrame
@property (readonly, nonatomic) UICollectionViewLayoutAttributes *optionBadgeLayoutAttributes; // ivar: _optionBadgeLayoutAttributes
@property (nonatomic) CGSize optionBadgeSize;
@property (readonly, nonatomic) UICollectionViewLayoutAttributes *selectionBadgeLayoutAttributes; // ivar: _selectionBadgeLayoutAttributes
@property (nonatomic) CGSize selectionBadgeSize;
@property (nonatomic) CGRect visibleItemFrame; // ivar: _visibleItemFrame


-(id)initWithIndexPath:(id)arg0 itemFrame:(struct CGRect )arg1 ;
-(void)prepareSublayout;
-(void)setFloatingOffset:(struct UIOffset )arg0 ;


@end


#endif