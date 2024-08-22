// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSBANNERTRAILINGVIEW_H
#define PKPASSBANNERTRAILINGVIEW_H

@class UIView, UIImage, UIColor, UIImageView, NSString;
@protocol SBUISystemApertureAccessoryView;


#import "PKPassBannerTrailingViewConfiguration.h"

@interface PKPassBannerTrailingView : UIView <SBUISystemApertureAccessoryView>

 {
    NSInteger _style;
    PKPassBannerTrailingViewConfiguration *_configuration;
    UIImage *_image;
    UIColor *_imageColor;
    UIImageView *_imageView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif