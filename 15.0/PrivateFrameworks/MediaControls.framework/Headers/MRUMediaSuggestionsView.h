// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUMEDIASUGGESTIONSVIEW_H
#define MRUMEDIASUGGESTIONSVIEW_H

@class UIView, UICollectionView, UICollectionViewCompositionalLayout;



@interface MRUMediaSuggestionsView : UIView

@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, nonatomic) UICollectionViewCompositionalLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (nonatomic) BOOL supportsHorizontalLayout; // ivar: _supportsHorizontalLayout


-(CGFloat)itemHeightForItemWidth:(CGFloat)arg0 ;
-(CGFloat)itemWidthForWidth:(CGFloat)arg0 ;
-(NSInteger)numberOfColumns;
-(NSInteger)numberOfRows;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)updateCollectionViewLayout;


@end


#endif