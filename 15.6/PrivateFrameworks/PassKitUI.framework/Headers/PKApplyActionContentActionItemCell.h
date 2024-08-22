// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLYACTIONCONTENTACTIONITEMCELL_H
#define PKAPPLYACTIONCONTENTACTIONITEMCELL_H

@class UICollectionViewListCell, NSArray, UIImageView, PKApplyActionContentActionItem;



@interface PKApplyActionContentActionItemCell : UICollectionViewListCell {
    NSArray *_titleLabels;
    NSArray *_subtitleLabels;
    UIImageView *_disclosureView;
}


@property (retain, nonatomic) PKApplyActionContentActionItem *actionItem; // ivar: _actionItem


+(id)backgroundColor;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_resetState;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif