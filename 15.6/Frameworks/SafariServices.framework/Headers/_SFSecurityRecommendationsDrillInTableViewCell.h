// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFSECURITYRECOMMENDATIONSDRILLINTABLEVIEWCELL_H
#define _SFSECURITYRECOMMENDATIONSDRILLINTABLEVIEWCELL_H

@class UITableViewCell, UIImageView, UILabel, NSParagraphStyle, NSNumberFormatter, NSString;



@interface _SFSecurityRecommendationsDrillInTableViewCell : UITableViewCell {
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_detailLabel;
    UIImageView *_badgeView;
    UIImageView *_checkmarkView;
    NSParagraphStyle *_labelParagraphStyle;
    NSNumberFormatter *_numberFormatter;
}


@property (nonatomic) NSInteger numberOfWarnings; // ivar: _numberOfWarnings
@property (copy, nonatomic) NSString *subtitleText;
@property (nonatomic) NSInteger warningStyle; // ivar: _warningStyle


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_commonInit;
-(void)_setDetailLabelText;
-(void)_updateDetailViewVisibilityForWarningStyle:(NSInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif