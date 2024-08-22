// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFACCOUNTDETAILHEADERVIEWCELL_H
#define SFACCOUNTDETAILHEADERVIEWCELL_H

@class UITableViewCell, UIImageView, UILabel, UIView, UIStackView, NSString;



@interface SFAccountDetailHeaderViewCell : UITableViewCell {
    UIImageView *_iconImageView;
    UILabel *_monogramLabel;
    UIView *_monogramBackgroundView;
    UIStackView *_labelStackView;
    UILabel *_domainLabel;
    UILabel *_lastModifiedDateLabel;
    NSString *_highLevelDomain;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_hideMonogramIcon;
-(void)_showMonogramIconWithBackgroundColor:(id)arg0 ;
-(void)setHighLevelDomain:(id)arg0 ;
-(void)setIcon:(id)arg0 ;
-(void)setLastModifiedDateString:(id)arg0 ;
-(void)setMonogramBackgroundColor:(id)arg0 ;


@end


#endif