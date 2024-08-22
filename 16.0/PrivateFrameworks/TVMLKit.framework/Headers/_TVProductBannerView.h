// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVPRODUCTBANNERVIEW_H
#define _TVPRODUCTBANNERVIEW_H

@class TVFocusRedirectView, UIView, NSString;
@protocol TVAppTemplateImpressionable;



@interface _TVProductBannerView : TVFocusRedirectView <TVAppTemplateImpressionable>

 {
    CGFloat _height;
}


@property (retain, nonatomic) UIView *backgroundImageView; // ivar: _backgroundImageView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *heroImageView; // ivar: _heroImageView
@property (retain, nonatomic) UIView *infoListView; // ivar: _infoListView
@property (retain, nonatomic) UIView *stackView; // ivar: _stackView
@property (readonly) Class superclass;


+(id)productBannerViewWithElement:(id)arg0 existingView:(id)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredFocusEnvironments;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif