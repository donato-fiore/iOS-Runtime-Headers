// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCOLLECTIONSECTIONHEADERVIEW_H
#define PKCOLLECTIONSECTIONHEADERVIEW_H

@class UICollectionViewListCell, UILabel, UIFont, NSString;



@interface PKCollectionSectionHeaderView : UICollectionViewListCell {
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
}


@property (copy, nonatomic) UIFont *primaryFont; // ivar: _primaryFont
@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (copy, nonatomic) UIFont *secondaryFont; // ivar: _secondaryFont
@property (copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_resetFont;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif