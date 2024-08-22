// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTSTICKERPAGINGCOLLECTIONVIEWCELL_H
#define AVTSTICKERPAGINGCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView;



@interface AVTStickerPagingCollectionViewCell : UICollectionViewCell

@property (nonatomic) UIEdgeInsets additionalContentInsets; // ivar: _additionalContentInsets
@property (retain, nonatomic) UIView *pageContentView; // ivar: _pageContentView


+(id)cellIdentifier;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif