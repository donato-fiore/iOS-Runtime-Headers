// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKMULTISTACKEDLABELCELL_H
#define PKMULTISTACKEDLABELCELL_H

@class UICollectionViewListCell, NSArray;



@interface PKMultiStackedLabelCell : UICollectionViewListCell {
    NSArray *_textLabels;
}


@property (copy, nonatomic) NSArray *sources; // ivar: _sources


-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif