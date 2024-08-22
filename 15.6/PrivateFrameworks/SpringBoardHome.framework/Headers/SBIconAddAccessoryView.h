// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBICONADDACCESSORYVIEW_H
#define SBICONADDACCESSORYVIEW_H

@class UIView, UIImageView, UITapGestureRecognizer, NSString, SBFParallaxSettings;
@protocol SBIconAccessoryView, SBIconListLayout;



@interface SBIconAddAccessoryView : UIView <SBIconAccessoryView>

 {
    UIImageView *_addImageView;
}


@property (retain, nonatomic) UITapGestureRecognizer *actionTapGestureRecognizer; // ivar: _actionTapGestureRecognizer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SBIconListLayout> *listLayout; // ivar: _listLayout
@property (retain, nonatomic) SBFParallaxSettings *parallaxSettings;
@property (readonly) Class superclass;


-(BOOL)displayingAccessory;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGPoint )accessoryCenterForIconBounds:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_hitTestPadding;
-(void)configureAnimatedForIcon:(id)arg0 infoProvider:(id)arg1 animator:(id)arg2 ;
-(void)configureForIcon:(id)arg0 infoProvider:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setAccessoryBrightness:(CGFloat)arg0 ;


@end


#endif