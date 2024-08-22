// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSAPPATTRIBUTIONBANNER_H
#define CPSAPPATTRIBUTIONBANNER_H

@class UIView, UIImageView, UILabel, PLPlatterView, UIImage, NSString;


#import "CPSLabelWithPlaceholder.h"
#import "CPSAppStoreButton.h"
#import "CPSHighlightForwardingButton.h"

@interface CPSAppAttributionBanner : UIView {
    UIImageView *_iconView;
    UILabel *_supertitleLabel;
    CPSLabelWithPlaceholder *_titleLabel;
    CPSLabelWithPlaceholder *_subtitleLabel;
    CPSAppStoreButton *_appStoreButton;
    CPSHighlightForwardingButton *_overlayButton;
    PLPlatterView *_platterView;
}


@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) BOOL showsAppStoreButton;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *supertitle;
@property (copy, nonatomic) id *tapAction; // ivar: _tapAction
@property (copy, nonatomic) NSString *title;


+(id)preferredImageDescriptor;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)commonInit;


@end


#endif