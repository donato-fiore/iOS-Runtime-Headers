// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSEARCHSUGGESTIONCOLLECTIONVIEWCELL_H
#define PKSEARCHSUGGESTIONCOLLECTIONVIEWCELL_H

@class UILabel, UIImageView, UIImage, NSString;


#import "PKDashboardCollectionViewCell.h"

@interface PKSearchSuggestionCollectionViewCell : PKDashboardCollectionViewCell {
    UILabel *_labelSuggestion;
    UIImageView *_imageViewIcon;
    BOOL _isTemplateLayout;
}


@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (retain, nonatomic) NSString *suggestion; // ivar: _suggestion


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)resetFonts;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif