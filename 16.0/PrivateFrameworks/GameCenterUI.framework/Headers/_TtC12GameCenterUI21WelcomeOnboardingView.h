// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI21WELCOMEONBOARDINGVIEW_H
#define _TTC12GAMECENTERUI21WELCOMEONBOARDINGVIEW_H

@class TtC12GameCenterUI22OnboardingTemplateView;



@interface _TtC12GameCenterUI21WelcomeOnboardingView : TtC12GameCenterUI22OnboardingTemplateView {
    ? delegate;
    ? privacyLinkView;
    ? welcomeArtworkView;
    ? primaryTrayButton;
    ? $__lazy_storage_$_secondaryBarButton;
    ? $__lazy_storage_$_artworkHeight;
    ? title;
    ? subtitle;
}




-(id)initWithCoder:(id)arg0 ;
-(void)primaryAction;
-(void)secondaryAction;


@end


#endif