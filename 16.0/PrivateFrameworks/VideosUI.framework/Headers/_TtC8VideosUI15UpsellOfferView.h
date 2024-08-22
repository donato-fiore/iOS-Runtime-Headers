// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI15UPSELLOFFERVIEW_H
#define _TTC8VIDEOSUI15UPSELLOFFERVIEW_H



#import "VUIBaseView.h"

@interface _TtC8VideosUI15UpsellOfferView : VUIBaseView {
    ? layout;
    ? debugUIOverlay;
    ? currentPrefersUberLayout;
    ? currentIsAXEnabled;
    ? upsellViewModel;
    ? coverArtImageView;
    ? tagsView;
    ? contextImageView;
    ? titleLabel;
    ? descriptionLabel;
    ? backgroundImageModel;
    ? currentWidth;
    ? backgroundImageView;
    ? storedGradientLayer;
    ? storedGradientView;
    ? contentLogoView;
    ? contentTextLabel;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(struct CGSize )vui_sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)handleGroupWatchActivityStateDidChange:(id)arg0 ;


@end


#endif