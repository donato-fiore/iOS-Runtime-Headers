// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMULTIKEYVALUECELL_H
#define PKMULTIKEYVALUECELL_H

@class UICollectionViewListCell, NSArray;



@interface PKMultiKeyValueCell : UICollectionViewListCell {
    NSArray *_titleLabels;
    NSArray *_subtitleLabels;
}


@property (copy, nonatomic) NSArray *sources; // ivar: _sources


-(BOOL)_shouldStackLabelsWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif