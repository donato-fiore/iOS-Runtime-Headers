// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKBASICLOGINCONTENTVIEWCONTROLLERCONTAINERVIEW_H
#define AKBASICLOGINCONTENTVIEWCONTROLLERCONTAINERVIEW_H

@class UIView, NSArray, UIImage, UIImageView, UILabel, NSString;



@interface AKBasicLoginContentViewControllerContainerView : UIView

@property (retain, nonatomic) NSArray *activeConstraints; // ivar: _activeConstraints
@property (retain, nonatomic) UIImage *bannerImage; // ivar: _bannerImage
@property (retain, nonatomic) UIImageView *bannerView; // ivar: _bannerView
@property (retain, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (copy, nonatomic) NSString *messageText; // ivar: _messageText
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)_configureBannerImage;
-(void)_configureMessageLabel;
-(void)updateConstraints;


@end


#endif