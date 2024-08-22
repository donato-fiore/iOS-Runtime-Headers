// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSAPPMETADATAVIEW_H
#define CPSAPPMETADATAVIEW_H

@class UIButton, UIImageView, NSArray, UIImage;


#import "CPSVibrantLabel.h"
#import "CPSContentRatingContainerView.h"
#import "CPSAppStoreButton.h"

@interface CPSAppMetadataView : UIButton {
    UIImageView *_appIconView;
    CPSVibrantLabel *_poweredByVibrantLabel;
    CPSVibrantLabel *_appNameVibrantLabel;
    CPSContentRatingContainerView *_contentRatingContainerView;
    CPSAppStoreButton *_appStoreButton;
    NSArray *_leadingAppStoreButtonConstraints;
    NSArray *_trailingAppStoreButtonConstraints;
}


@property (retain, nonatomic) UIImage *appIcon;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_setUpSubviews;
-(void)_updateAppStoreButtonConstraints;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateWithMetadata:(id)arg0 ;


@end


#endif