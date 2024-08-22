// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMEDICALIDPERSONSUMMARYCELL_H
#define HKMEDICALIDPERSONSUMMARYCELL_H

@class UITableViewCell, UIImageView, UILabel, UIStackView, UIFont, NSLayoutConstraint, NSCalendar, NSDateComponents, NSString, NSNumber, UIImage;



@interface HKMedicalIDPersonSummaryCell : UITableViewCell {
    UIImageView *_pictureView;
    UILabel *_nameLabel;
    UILabel *_birthdateLabel;
    UILabel *_organDonationLabel;
    UILabel *_emergencyAccessLabel;
    UIStackView *_fullContainerView;
    UIStackView *_mainContainerView;
    UIStackView *_labelContainerView;
    UIFont *_nameLabelFont;
    NSLayoutConstraint *_pictureWidthAnchor;
    NSCalendar *_gregorianCalendar;
    BOOL _resetFormatters;
}


@property (retain, nonatomic) NSDateComponents *gregorianBirthday; // ivar: _gregorianBirthday
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *organDonationStatus; // ivar: _organDonationStatus
@property (retain, nonatomic) UIImage *picture; // ivar: _picture
@property (nonatomic) BOOL shareDuringEmergencyCalls; // ivar: _shareDuringEmergencyCalls
@property (nonatomic) BOOL shareOnLockScreen; // ivar: _shareOnLockScreen


-(id)_cachedCalendar;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)notOrganDonorString;
-(id)stringWithImageNamed:(id)arg0 withText:(id)arg1 andColor:(id)arg2 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)buildEmergencyAccessTableItem;
-(void)dealloc;
-(void)localeDidChange:(id)arg0 ;
-(void)timeZoneDidChange:(id)arg0 ;
-(void)updateSubviewsFromData;


@end


#endif