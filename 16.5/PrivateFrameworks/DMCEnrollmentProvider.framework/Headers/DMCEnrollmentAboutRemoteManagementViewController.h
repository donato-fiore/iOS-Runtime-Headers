// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCENROLLMENTABOUTREMOTEMANAGEMENTVIEWCONTROLLER_H
#define DMCENROLLMENTABOUTREMOTEMANAGEMENTVIEWCONTROLLER_H

@class OBPrivacySplashController, NSAttributedString, NSString, UILabel;



@interface DMCEnrollmentAboutRemoteManagementViewController : OBPrivacySplashController

@property (copy, nonatomic) NSAttributedString *attributedDetailText; // ivar: _attributedDetailText
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel


+(id)_textFontIsBold:(BOOL)arg0 ;
+(void)presentAboutRemoteManagementViewControllerWithBaseViewController:(id)arg0 ;
-(void)loadView;
-(void)rightBarButtonTapped:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif