// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIAPPINSTALLLOCKUP_H
#define VUIAPPINSTALLLOCKUP_H

@class UIView, UILabel, UIStackView, NSString, UIImage;


#import "VUIAppInstallView.h"
#import "VUITextBadge.h"

@interface VUIAppInstallLockup : UIView {
    VUIAppInstallView *_iconView;
    UILabel *_nameLabel;
    UILabel *_iAPLabel;
    UILabel *_subtitleLabel;
    UIStackView *_nameAndRatingStack;
    UIStackView *_containerStack;
}


@property (copy, nonatomic) NSString *ageRating; // ivar: _ageRating
@property (retain, nonatomic) VUITextBadge *ageRatingBadge; // ivar: _ageRatingBadge
@property (retain, nonatomic) UILabel *ageRatingLabel; // ivar: _ageRatingLabel
@property (nonatomic) BOOL canFocus; // ivar: _canFocus
@property (copy, nonatomic) NSString *iAP; // ivar: _iAP
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, nonatomic) VUIAppInstallView *installView;
@property (retain, nonatomic) UIStackView *metadataStackView; // ivar: _metadataStackView
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle


-(BOOL)canBecomeFocused;
-(id)_textColorForDarkMode;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureAgeRatingBadge;
-(void)_configureLabels;
-(void)_layoutForIos;
-(void)_layoutForTvos;


@end


#endif