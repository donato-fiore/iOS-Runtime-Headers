// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI17ORGANDONATIONCELL_H
#define _TTC18HEALTHEXPERIENCEUI17ORGANDONATIONCELL_H

@class UITableViewCell, UIImageView, UILabel;



@interface _TtC18HealthExperienceUI17OrganDonationCell : UITableViewCell {
    ? item;
}


@property (nonatomic, weak) UIImageView *organDonationLogoImage; // ivar: organDonationLogoImage
@property (nonatomic, weak) UILabel *subtitle; // ivar: subtitle
@property (nonatomic, weak) UILabel *title; // ivar: title


-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)awakeFromNib;


@end


#endif