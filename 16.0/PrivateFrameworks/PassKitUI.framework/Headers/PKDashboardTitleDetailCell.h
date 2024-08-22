// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDASHBOARDTITLEDETAILCELL_H
#define PKDASHBOARDTITLEDETAILCELL_H

@class NSString, UIImageView, UIActivityIndicatorView, UIColor, UILabel, NSNumberFormatter;


#import "PKDashboardCollectionViewCell.h"

@interface PKDashboardTitleDetailCell : PKDashboardCollectionViewCell {
    NSString *_titleText;
    NSString *_detailText;
    UIImageView *_disclosureView;
    UIActivityIndicatorView *_spinnerView;
    NSUInteger _accessory;
    UIColor *_titleTextColor;
    UIColor *_defaultTitleTextColor;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSNumberFormatter *_numberFormatter;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateDefaultValues;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setAccessory:(NSUInteger)arg0 ;
-(void)setTitleText:(id)arg0 detail:(id)arg1 ;
-(void)setTitleTextColor:(id)arg0 ;


@end


#endif