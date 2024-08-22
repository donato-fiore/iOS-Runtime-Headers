// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSPLASHSCREENFEATUREVIEWCELL_H
#define HKSPLASHSCREENFEATUREVIEWCELL_H

@class UITableViewCell, NSString, UILabel, UIImage, NSLayoutConstraint, UIImageView;


#import "HKSplashScreenItem.h"

@interface HKSplashScreenFeatureViewCell : UITableViewCell

@property (readonly) CGFloat cellPadding; // ivar: _cellPadding
@property (retain, nonatomic) NSString *featureDescription; // ivar: _featureDescription
@property (retain, nonatomic) UILabel *fullDescriptionLabel; // ivar: _fullDescriptionLabel
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (retain, nonatomic) NSLayoutConstraint *iconTopConstraint; // ivar: _iconTopConstraint
@property (retain, nonatomic) UIImageView *itemIconView; // ivar: _itemIconView
@property (retain, nonatomic) HKSplashScreenItem *splashScreenItem; // ivar: _splashScreenItem
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)_descriptionFont;
+(id)defaultReuseIdentifier;
-(id)firstBaselineAnchor;
-(id)lastBaselineAnchor;
-(void)createSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateForFontOrTextChange;


@end


#endif