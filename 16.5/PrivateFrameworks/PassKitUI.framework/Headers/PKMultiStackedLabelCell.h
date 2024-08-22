// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMULTISTACKEDLABELCELL_H
#define PKMULTISTACKEDLABELCELL_H

@class UICollectionViewListCell, NSArray;



@interface PKMultiStackedLabelCell : UICollectionViewListCell {
    NSArray *_textLabels;
}


@property (nonatomic) CGFloat paddingBetweenRows; // ivar: _paddingBetweenRows
@property (copy, nonatomic) NSArray *sources; // ivar: _sources


-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif