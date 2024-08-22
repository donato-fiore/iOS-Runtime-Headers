// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCENTEREDTEXTCOLLECTIONVIEWCELL_H
#define PKCENTEREDTEXTCOLLECTIONVIEWCELL_H

@class UILabel, NSString;


#import "PKDashboardCollectionViewCell.h"

@interface PKCenteredTextCollectionViewCell : PKDashboardCollectionViewCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}


@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)resetFonts;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateTitleTextColor;


@end


#endif