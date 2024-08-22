// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFTOOLBAR_H
#define _SFTOOLBAR_H

@class UIToolbar, UIVisualEffectView, UIBlurEffect, UIView, NSString, _SFBarTheme;
@protocol _SFBarCommon, _SFBarRegistrationObserving, _SFBarRegistrationToken;



@interface _SFToolbar : UIToolbar <_SFBarCommon, _SFBarRegistrationObserving>

 {
    UIVisualEffectView *_backgroundView;
    UIBlurEffect *_customBackdropEffect;
    UIView *_separator;
}


@property (copy, nonatomic) NSString *backdropGroupName;
@property (weak, nonatomic) NSObject<_SFBarRegistrationToken> *barRegistration; // ivar: _barRegistration
@property (readonly, nonatomic) CGFloat baselineOffsetAdjustment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger placement; // ivar: _placement
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *superviewOwningLayout; // ivar: _superviewOwningLayout
@property (retain, nonatomic) _SFBarTheme *theme; // ivar: _theme
@property (nonatomic) BOOL usesLegacyDarkBackdrop; // ivar: _usesLegacyDarkBackdrop


+(BOOL)_deviceSupportsMinibars;
-(BOOL)isMinibar;
-(CGFloat)_contentMargin;
-(id)initWithPlacement:(NSInteger)arg0 ;
-(id)initWithPlacement:(NSInteger)arg0 hideBackground:(BOOL)arg1 ;
-(id)popoverSourceInfoForBarItem:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_cancelLinkAnimations;
-(void)_updateBackgroundViewEffects;
// -(void)animateLinkImage:(struct CGImage *)arg0 fromRect:(struct CGRect )arg1 inView:(id)arg2 toBarItem:(NSInteger)arg3 afterImageDisappearsBlock:(id)arg4 afterDestinationLayerBouncesBlock:(unk)arg5  ;
-(void)animateSafariIconLinkFromPoint:(struct CGPoint )arg0 inView:(id)arg1 ;
-(void)dealloc;
-(void)didChangeArrangedBarItems:(id)arg0 ;
-(void)didCompleteBarRegistrationWithToken:(id)arg0 ;
-(void)layoutSubviews;
-(void)setItems:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif